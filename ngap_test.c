#include <unistd.h>
#include "ngap_asn1c.h"
#include "amf_context.h"
#include "3gpp_types.h"
#include "core.h"
#include "pkbuf.h"
#include "tool/debug.h"



static amf_context_t amf;

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

     d_assert(message, return -1, " ");

    // if (g_trace_mask && TRACE_MODULE >= 25)
    	printf("***************Input Message***************\n");
        asn_fprint(stdout, &asn_DEF_NGAP_PDU, message);

    *pkbuf = pkbuf_alloc(0, MAX_SDU_LEN);
     d_assert(*pkbuf, return -1, "");

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


void ngap_buffer_to_OCTET_STRING( 
        void *buf, int size, OCTET_STRING_t *octet_string) // S1AP is TBCD-STRING
{
    octet_string->size = size;
    octet_string->buf = calloc(octet_string->size, sizeof(c_uint8_t));

    memcpy(octet_string->buf, buf, size);
}


void amf_context_init()
{
	amf.relative_capacity = 0xff;
}


/** 
 *  Direction AMF -> NG-RAN Node
 **/
int ngap_build_setup_rsp(pkbuf_t **pkbuf)
{
    int rv;
    int i = 0;
    int j = 0;
    ngap_message_t *decode_output;

    NGAP_PDU_t pdu;
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

int main()
{
	pkbuf_t **ngap_msg_buf;

	amf_context_init();
	ngap_build_setup_rsp(ngap_msg_buf);
	return 1;
}