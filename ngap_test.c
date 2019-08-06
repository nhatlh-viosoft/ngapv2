#include <unistd.h>
#include "ngap_asn1c.h"
#include "amf_context.h"
#include "3gpp_types.h"
#include "core.h"
#include "pkbuf.h"
#include "debug.h"
#include "core_mutex.h"



static amf_context_t amf;


/*Temporary data*/
#define GNB_MAX_NUMBER_OF_TACS	1


typedef struct {
	/* Used to identify gNB within 5GC 
	*/
	uint32_t gnb_id;

	/* Support multiple TA
	*/
	uint16_t no_of_TACs;
	uint8_t no_of_broadcastPLMN[GNB_MAX_NUMBER_OF_TACS];

	/* Tracking area code */
  	uint16_t tac[GNB_MAX_NUMBER_OF_TACS];

	/* PLMN Identity
	*/
  	plmn_id_t plmn_id[GNB_MAX_NUMBER_OF_TACS][maxnoofBPLMNs];
} ngap_gnb_instance_t;	


//*End of Temporary data*/

int ngap_decode_pdu(ngap_message_t *message, pkbuf_t *pkbuf);
int ngap_encode_pdu(pkbuf_t **pkbuf, ngap_message_t *message);
int ngap_free_pdu(ngap_message_t *message);
void amf_context_init();


int ngap_build_setup_rsp(pkbuf_t **pkbuf);


int ngap_decode_pdu(ngap_message_t *message, pkbuf_t *pkbuf)
{
	asn_dec_rval_t dec_ret = {0};

    d_assert(message, return -1, " ");
    d_assert(pkbuf, return -1, " ");
    d_assert(pkbuf->payload, return -1, " ");

    memset((void *)message, 0, sizeof(ngap_message_t));
    dec_ret = aper_decode(NULL, &asn_DEF_NGAP_PDU, (void **)&message, 
            pkbuf->payload, pkbuf->len, 0, 0);

    if (dec_ret.code != RC_OK) 
    {
        // d_error("Failed to decode NGAP-PDU[%d]", dec_ret.code);
        // return -1;
        printf("Failed to decode NGAP-PDU[%d]", dec_ret.code);
        return -1;
    }

    // if (g_trace_mask && TRACE_MODULE >= 25)
        printf("***************Output Message***************\n");
        asn_fprint(stdout, &asn_DEF_NGAP_PDU, message);

    // return CORE_OK;
    return 1;
}

int ngap_encode_pdu(pkbuf_t **pkbuf, ngap_message_t *message)
{
	asn_enc_rval_t enc_ret = {0};
	pkbuf_t *buf = NULL;
	// printf("*pkbuf = %d\n", *pkbuf);

     d_assert(message, return -1, " ");

    // if (g_trace_mask && TRACE_MODULE >= 25)
    	printf("***************Input Message***************\n");
        asn_fprint(stdout, &asn_DEF_NGAP_PDU, message);

    buf = pkbuf_alloc(0, MAX_SDU_LEN);
    printf("buf = %d\n", buf);
    *pkbuf = NULL;
    d_assert(*pkbuf, return -1, "canot allocate pkbuf");

    enc_ret = aper_encode_to_buffer(&asn_DEF_NGAP_PDU, NULL,
                    message, (*pkbuf)->payload, MAX_SDU_LEN);
    if (enc_ret.encoded < 0)
    {
        // d_error("Failed to encoded NGAP-PDU[%d]", enc_ret.encoded);
        pkbuf_free(*pkbuf);
        // return -1;
        printf("Failed to encoded NGAP-PDU[%ld]", enc_ret.encoded);
        return -1;
    }

    (*pkbuf)->len = (enc_ret.encoded >> 3);

    // return CORE_OK;
    return 1;
}

int ngap_free_pdu(ngap_message_t *message)
{
	// d_assert(message, return -1,);

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_NGAP_PDU, message);

    // return CORE_OK;
    return 1;
}


void amf_context_init()
{
	amf.relative_capacity = 0xff;
}


/** 
 *  Direction NG-RAN Node -> AMF
 **/
int ngap_build_setup_req(pkbuf_t **pkbuf, void *node_instance, NG_RAN_version ng_ran_version)
{
	int i;
	int j;
	ngap_message_t *decode_output = NULL;

	NGAP_PDU_t pdu = {0};
	InitiatingMessage_t *initiatingMessage = NULL;
	NGSetupRequest_t *NGSetupRequest = calloc(1, sizeof(NGSetupRequest_t));
		NGSetupRequestIEs_t	*ie = NULL;
		GlobalRANNodeID_t *GlobalRANNodeID = NULL;
		SupportedTAList_t *SupportedTAList = NULL;
		PagingDRX_t *DefaultPagingDRX = NULL;

	memset(&pdu, 0, sizeof(NGAP_PDU_t)); //?is this necessary?	
	pdu.present = NGAP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage = calloc(1, sizeof(InitiatingMessage_t));

	initiatingMessage = pdu.choice.initiatingMessage;
	initiatingMessage->procedureCode = ProcedureCode_id_NGSetup;
	initiatingMessage->criticality = Criticality_reject;
	initiatingMessage->value.present = InitiatingMessage__value_PR_NGSetupRequest;

	NGSetupRequest = initiatingMessage->value.choice.NGSetupRequest;

	//Add 'Global RAN Node ID' IE to message
	ie = calloc(1, sizeof(NGSetupRequestIEs_t));
	ASN_SEQUENCE_ADD(&NGSetupRequest->protocolIEs, ie);
	ie->id = ProtocolIE_ID_id_GlobalRANNodeID;
	ie->criticality = Criticality_reject;
	ie->value.present = NGSetupRequestIEs__value_PR_GlobalRANNodeID;
	GlobalRANNodeID = ie->value.choice.GlobalRANNodeID;

	//Add 'Supported TA List' IE to messgae
	ie = calloc(1, sizeof(NGSetupRequestIEs_t));
	ASN_SEQUENCE_ADD(&NGSetupRequest->protocolIEs, ie);
	ie->id = ProtocolIE_ID_id_SupportedTAList;
	ie->criticality = Criticality_reject;
	ie->value.present = NGSetupRequestIEs__value_PR_SupportedTAList;
	SupportedTAList = ie->value.choice.SupportedTAList;

	//Add 'Default Paging DRX' IE to message


	switch(ng_ran_version)
	{
		case N3IWF:
			N3IWF_ID_t *N3IWF_ID = NULL;
			//todo: complete
			break;

		case ng_eNB:
			NgENB_ID_t *NgENB_ID = NULL;
			//todo: complete
			break;

		case gNB: 
			ngap_gnb_instance_t *ngap_node_instance = (* ngap_gnb_instance_t) node_instance;

			//Assign value to 'Global RAN Node ID' IE
			GNB_ID_t *GNB_ID = NULL;

			GlobalRANNodeID->present = GlobalRANNodeID_PR_globalGNB_ID;
			GNB_ID = GlobalRANNodeID->choice.globalGNB_ID;
			ngap_uint32_to_GNB_ID(GNB_ID_PR_gNB_ID, ngap_node_instance->gnb_id, GNB_ID);	

			//Assign value to 'Supported TA List' IE
			for (i = 0; i < ngap_node_instance->no_of_TACs; i++)
			{
				SupportedTAItem_t *SupportedTAITem = calloc(1, sizeof(SupportedTAItem_t));

				ngap_uint16_to_OCTET_STRING(tac[i], SupportedTAITem->tAC);

				BroadcastPLMNList_t *BroadcastPLMNList = calloc(1, sizeof(BroadcastPLMNList_t));

				for (j = 0; j < ngap_node_instance->no_of_broadcastPLMN[i]; j++)
				{
					BroadcastPLMNItem_t *BroadcastPLMNItem = calloc(1, sizeof(BroadcastPLMNItem_t));
					BroadcastPLMNItem->pLMNIdentity = ngap_node_instance->plmn_id[i][j]

				}

				ASN_SEQUENCE_ADD(&SupportedTAList->list, SupportedTAITem);
			}
			break;
		default:
			printf("Unknown NG-RAN type");		
			return -1;
	}




	//Assign value to 'Default Paging DRX' IE

	return 1;
}


/** 
 *  Direction AMF -> NG-RAN Node
 **/
int ngap_build_setup_rsp(pkbuf_t **pkbuf)
{
    int rv;
    int i = 0;
    int j = 0;
    ngap_message_t *decode_output = NULL;

    NGAP_PDU_t pdu = {0};
    SuccessfulOutcome_t *successfulOutcome = NULL;
    NGSetupResponse_t *NGSetupResponse = calloc(1, sizeof(NGSetupResponse_t));//NULL;
        NGSetupResponseIEs_t *ie = NULL;
        AMFName_t *AMFName = NULL;
        ServedGUAMIList_t *ServedGUAMIList = NULL;
        RelativeAMFCapacity_t *RelativeAMFCapacity = NULL;
        PLMNSupportList_t *PLMNSupportList = NULL;

    memset(&pdu, 0, sizeof (NGAP_PDU_t));
    pdu.present = NGAP_PDU_PR_successfulOutcome;
    pdu.choice.successfulOutcome = 
        calloc(1, sizeof(SuccessfulOutcome_t));

    successfulOutcome = pdu.choice.successfulOutcome;
    successfulOutcome->procedureCode = ProcedureCode_id_NGSetup;
    successfulOutcome->criticality = Criticality_reject;
    successfulOutcome->value.present =
        SuccessfulOutcome__value_PR_NGSetupResponse;

    NGSetupResponse = &successfulOutcome->value.choice.NGSetupResponse;

    ie = calloc(1, sizeof(NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = ProtocolIE_ID_id_AMFName;
    ie->criticality = Criticality_reject;
    ie->value.present = NGSetupResponseIEs__value_PR_AMFName;
    AMFName = &ie->value.choice.AMFName;
#if 1 //TODO fix it 
    char tmp3[3] = {0x41, 0x42, 0x43};
    ngap_buffer_to_OCTET_STRING(tmp3, 3, AMFName);

#endif

    ie = calloc(1, sizeof(NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = ProtocolIE_ID_id_ServedGUAMIList;
    ie->criticality = Criticality_reject;
    ie->value.present = NGSetupResponseIEs__value_PR_ServedGUAMIList;
    ServedGUAMIList = &ie->value.choice.ServedGUAMIList;

    ie = calloc(1, sizeof(NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = ProtocolIE_ID_id_RelativeAMFCapacity;
    ie->criticality = Criticality_ignore;
    ie->value.present = NGSetupResponseIEs__value_PR_RelativeAMFCapacity;
    RelativeAMFCapacity = &ie->value.choice.RelativeAMFCapacity;
    *RelativeAMFCapacity = amf.relative_capacity;

    ie = calloc(1, sizeof(NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = ProtocolIE_ID_id_PLMNSupportList;
    ie->criticality = Criticality_reject;
    ie->value.present = NGSetupResponseIEs__value_PR_PLMNSupportList;
    PLMNSupportList = &ie->value.choice.PLMNSupportList;

    //TODO: fix it
    for (i = 0; i < 1/*amf4g_self()->max_num_of_served_guami*/; i++)
    {   
        ServedGUAMIItem_t *ServedGUAMIItem = NULL;
        ServedGUAMIItem = calloc(1, sizeof(ServedGUAMIItem_t));
         //TODO: fix it
        // served_guami_t *served_guami = &amf4g_self()->served_guami[i];
        //for (j = 0; j < served_guami->num_of_plmn_id, j++)
        //{
       	
            //TODO: fix it, use gUAMI pLMNIdentity          
            ngap_buffer_to_OCTET_STRING(tmp3, 3, &ServedGUAMIItem->gUAMI.pLMNIdentity);
            
            //TODO: fix it, use gUAMI aMFRegionID   
            char tmp2[2] = {0x01, 0x02};
            ngap_buffer_to_OCTET_STRING(tmp2, 2, &ServedGUAMIItem->gUAMI.aMFRegionID);
            
            // //TODO: fix it,  use gUAMI aMFSetID   
            char tmp4[4] = {0x01,0x02,0x03,0x04};
            ServedGUAMIItem->gUAMI.aMFSetID.size = 1;
            ServedGUAMIItem->gUAMI.aMFSetID.bits_unused = 4;
            ServedGUAMIItem->gUAMI.aMFSetID.buf = calloc(1, sizeof(c_uint8_t));
            memcpy(ServedGUAMIItem->gUAMI.aMFSetID.buf, tmp4, 1);
            

            // //TODO: fix it,  use gUAMI aMFPointer   
            ServedGUAMIItem->gUAMI.aMFPointer.size = 1;
            ServedGUAMIItem->gUAMI.aMFPointer.bits_unused = 4;
            ServedGUAMIItem->gUAMI.aMFPointer.buf = calloc(1, sizeof(c_uint8_t));
            memcpy(ServedGUAMIItem->gUAMI.aMFPointer.buf, tmp4, 1);

        ASN_SEQUENCE_ADD(&ServedGUAMIList->list, ServedGUAMIItem);
    }


    //TODO fix it : use real counter
    for (i = 0; i < 1/*amf4g_self()->max_num_of_plmn_support*/; i++)
    {
        PLMNSupportItem_t *PLMNSupportItem = NULL;
        PLMNSupportItem = (PLMNSupportItem_t *) calloc(1, sizeof(PLMNSupportItem_t));

        // plmn_support_t *plmn_support = &amf4g_self()->plmn_support[i];
        plmn_id_t plmn_id;
        plmn_id_build(&plmn_id, 1, 1, 2);
        ngap_buffer_to_OCTET_STRING(&plmn_id, 3, &PLMNSupportItem->pLMNIdentity);
        //TODO fix it: use real counter
        for (j = 0; j < 1/*amf4g_self()->plmn_support->num_of_s_nssai*/; j++)
        {         
            SliceSupportItem_t *SliceSupportItem = NULL;
            SliceSupportItem = (SliceSupportItem_t *) calloc(1, sizeof(SliceSupportItem_t));
            //TODO: fix it,  use s_NSSAI 
            char tmp1[1] = {0x12};
            ngap_buffer_to_OCTET_STRING(tmp1, 1, &SliceSupportItem->s_NSSAI.sST);
            ngap_buffer_to_OCTET_STRING(tmp3, 3, &SliceSupportItem->s_NSSAI.sD);
            // ngap_buffer_to_OCTET_STRING(&plmn_support->s_nssai[j].sst, SST_LEN, &SliceSupportItem->s_NSSAI.sST);
           
           ASN_SEQUENCE_ADD(&PLMNSupportItem->sliceSupportList.list, SliceSupportItem);
        }
    }

    rv = ngap_encode_pdu(pkbuf, &pdu);
    ngap_free_pdu(&pdu);

    if (rv < 0)
    {
        printf("ngap_encode_pdu() failed");
        return -1;
    }

    rv = ngap_decode_pdu(decode_output, pkbuf);

    if (rv < 0)
    {
    	printf("ngap_decode_pdu() failed");
    	return -1;
    }

    return 1;
}


/** 
 *  Direction AMF -> NG-RAN Node
 **/
status_t ngap_build_setup_failure(pkbuf_t **pkbuf, Cause_t *cause, long time_to_wait)
{
	ngap_message_t *decode_output = NULL;

	NGAP_PDU_t pdu = {0};
	UnsuccessfulOutcome_t *unsuccessfulOutcom = NULL; 
	NGSetupFailure_t *NGSetupFailure = calloc(1, sizeof(NGSetupFailure_t));
		NGSetupFailureIEs_t *ie = NULL;
		Cause_t	*Cause = NULL;
		TimeToWait_t *TimeToWait = NULL;

	memset(&pdu, 0, sizeof(NGAP_PDU_t));
	pdu.present = NGAP_PDU_PR_unsuccessfulOutcome;
	pdu.choice.unsuccessfulOutcome = calloc(1, sizeof(UnsuccessfulOutcome_t));

	unsuccessfulOutcom = pdu.choice.unsuccessfulOutcom;
	unsuccessfulOutcom->procedureCode = ProcedureCode_id_NGSetup;
	unsuccessfulOutcom->criticality = Criticality_reject;
	unsuccessfulOutcom->value.present = UnsuccessfulOutcome__value_PR_NGSetupFailure;
	NGSetupFailure = unsuccessfulOutcom->value.choice.NGSetupFailure;

	//Add 'Cause' IE to message
	ie = calloc(1, sizeof(NGSetupFailureIEs_t));
	ASN_SEQUENCE_ADD(&NGSetupFailure->protocolIEs, ie);
	ie->id = ProtocolIE_ID_id_Cause;
	ie->criticality = Criticality_ignore;
	ie->value.present = NGSetupFailureIEs__value_PR_Cause;
	Cause = ie->value.choice.Cause;

	//Add 'Time To Wait' IE to message
	ie = calloc(1, sizeof(NGSetupFailureIEs_t));
	ASN_SEQUENCE_ADD(&NGSetupFailure->protocolIEs, ie);
	ie->id = ProtocolIE_ID_id_TimeToWait;
	ie->criticality = Criticality_ignore;
	ie->value.present = NGSetupFailureIEs__value_PR_TimeToWait;
	TimeToWait = ie->value.choice.TimeToWait;

	//Assign value to 'Cause'
	*Cause = *cause;

	//Assign value to 'Time To Wait'
	*TimeToWait = time_to_wait;


	int rv = ngap_encode_pdu(pkbuf, &pdu);
    ngap_free_pdu(&pdu);

    if (rv < 0)
    {
        printf("ngap_encode_pdu() failed");
        return -1;
    }

    rv = ngap_decode_pdu(decode_output, pkbuf);

    if (rv < 0)
    {
    	printf("ngap_decode_pdu() failed");
    	return -1;
    }

    return 1;
}

void terminate()
{
	pkbuf_final();
	mutex_final();

	return;
}

int main()
{
	pkbuf_t **ngap_msg_buf = NULL;

	mutex_init();
	pkbuf_init();

	amf_context_init();

	atexit(terminate);
	ngap_build_setup_rsp(ngap_msg_buf);
	return 1;
}