#include <stdint.h>
#include <unistd.h>
#include "ngap_asn1c.h"

typedef struct NGAP_NGAP_PDU ngap_message_t;

int ngap_decode_pdu(ngap_message_t *message, pkbuf_t *pkbuf);
int ngap_encode_pdu(pkbuf_t **pkbuf, ngap_message_t *message);
int ngap_free_pdu(ngap_message_t *message);

int ngap_build_setup_rsp(pkbuf_t **pkbuf);


int ngap_decode_pdu(ngap_message_t *message, pkbuf_t *pkbuf)
{
	asn_dec_rval_t dec_ret = {0};

    // d_assert(message, return CORE_ERROR,);
    // d_assert(pkbuf, return CORE_ERROR,);
    // d_assert(pkbuf->payload, return CORE_ERROR,);

    memset((void *)message, 0, sizeof(ngap_message_t));
    dec_ret = aper_decode(NULL, &asn_DEF_NGAP_PDU, (void **)&message, 
            pkbuf->payload, pkbuf->len, 0, 0);

    if (dec_ret.code != RC_OK) 
    {
        // d_error("Failed to decode NGAP-PDU[%d]", dec_ret.code);
        // return CORE_ERROR;
        printf("Failed to decode NGAP-PDU[%d]", dec_ret.code);
        return -1;
    }

    // if (g_trace_mask && TRACE_MODULE >= 25)
        asn_fprint(stdout, &asn_DEF_NGAP_PDU, message);

    // return CORE_OK;
    return 1;
}

int ngap_encode_pdu(pkbuf_t **pkbuf, ngap_message_t *message)
{
	asn_enc_rval_t enc_ret = {0};

    // d_assert(message, return CORE_ERROR,);

    // if (g_trace_mask && TRACE_MODULE >= 25)
        asn_fprint(stdout, &asn_DEF_NGAP_PDU, message);

    *pkbuf = pkbuf_alloc(0, MAX_SDU_LEN);
    // d_assert(*pkbuf, return CORE_ERROR,);

    enc_ret = aper_encode_to_buffer(&asn_DEF_NGAP_PDU, NULL,
                    message, (*pkbuf)->payload, MAX_SDU_LEN);
    if (enc_ret.encoded < 0)
    {
        // d_error("Failed to encoded NGAP-PDU[%d]", enc_ret.encoded);
        pkbuf_free(*pkbuf);
        // return CORE_ERROR;
        printf("Failed to encoded NGAP-PDU[%d]", enc_ret.encoded);
        return -1;
    }

    (*pkbuf)->len = (enc_ret.encoded >> 3);

    // return CORE_OK;
    return 1;
}

int ngap_free_pdu(ngap_message_t *message)
{
	// d_assert(message, return CORE_ERROR,);

    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_NGAP_PDU, message);

    // return CORE_OK;
    return 1;
}

int ngap_build_setup_rsp(pkbuf_t **pkbuf)
{
    int rv;
    int i = 0;
    int j = 0;

    NGAP_PDU_t pdu;
    NGAP_SuccessfulOutcome_t *successfulOutcome = NULL;
    NGAP_NGSetupResponse_t *NGSetupResponse = NULL;
        NGAP_NGSetupResponseIEs_t *ie = NULL;
        NGAP_AMFName_t *AMFName = NULL;
        NGAP_ServedGUAMIList_t *ServedGUAMIList = NULL;
        NGAP_RelativeAMFCapacity_t *RelativeAMFCapacity = NULL;
        NGAP_PLMNSupportList_t *PLMNSupportList = NULL;

    memset(&pdu, 0, sizeof (NGAP_PDU_t));
    pdu.present = NGAP_NGAP_PDU_PR_successfulOutcome;
    pdu.choice.successfulOutcome = 
        core_calloc(1, sizeof(NGAP_SuccessfulOutcome_t));

    successfulOutcome = pdu.choice.successfulOutcome;
    successfulOutcome->procedureCode = NGAP_ProcedureCode_id_NGSetup;
    successfulOutcome->criticality = NGAP_Criticality_reject;
    successfulOutcome->value.present =
        NGAP_SuccessfulOutcome__value_PR_NGSetupResponse;

    NGSetupResponse = &successfulOutcome->value.choice.NGSetupResponse;
    d_trace(1, "NGSetupResponse=%d",NGSetupResponse);

    ie = core_calloc(1, sizeof(NGAP_NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = NGAP_ProtocolIE_ID_id_AMFName;
    ie->criticality = NGAP_Criticality_reject;
    ie->value.present = NGAP_NGSetupResponseIEs__value_PR_AMFName;
    AMFName = &ie->value.choice.AMFName;
#if 1 //TODO fix it 
    char tmp3[3] = {0x41, 0x42, 0x43};
    ngap_buffer_to_OCTET_STRING(tmp3, 3, AMFName);

#endif

    ie = core_calloc(1, sizeof(NGAP_NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = NGAP_ProtocolIE_ID_id_ServedGUAMIList;
    ie->criticality = NGAP_Criticality_reject;
    ie->value.present = NGAP_NGSetupResponseIEs__value_PR_ServedGUAMIList;
    ServedGUAMIList = &ie->value.choice.ServedGUAMIList;

    ie = core_calloc(1, sizeof(NGAP_NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = NGAP_ProtocolIE_ID_id_RelativeAMFCapacity;
    ie->criticality = NGAP_Criticality_ignore;
    ie->value.present = NGAP_NGSetupResponseIEs__value_PR_RelativeAMFCapacity;
    RelativeAMFCapacity = &ie->value.choice.RelativeAMFCapacity;
    *RelativeAMFCapacity = amf4g_self()->relative_capacity;

    ie = core_calloc(1, sizeof(NGAP_NGSetupResponseIEs_t));
    ASN_SEQUENCE_ADD(&NGSetupResponse->protocolIEs, ie);
    ie->id = NGAP_ProtocolIE_ID_id_PLMNSupportList;
    ie->criticality = NGAP_Criticality_reject;
    ie->value.present = NGAP_NGSetupResponseIEs__value_PR_PLMNSupportList;
    PLMNSupportList = &ie->value.choice.PLMNSupportList;

    //TODO: fix it
    for (i = 0; i < 1/*amf4g_self()->max_num_of_served_guami*/; i++)
    {   
        NGAP_ServedGUAMIItem_t *ServedGUAMIItem = NULL;
        ServedGUAMIItem = core_calloc(1, sizeof(NGAP_ServedGUAMIItem_t));
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
            ServedGUAMIItem->gUAMI.aMFSetID.buf = core_calloc(1, sizeof(c_uint8_t));
            memcpy(ServedGUAMIItem->gUAMI.aMFSetID.buf, tmp4, 1);
            

            // //TODO: fix it,  use gUAMI aMFPointer   
            ServedGUAMIItem->gUAMI.aMFPointer.size = 1;
            ServedGUAMIItem->gUAMI.aMFPointer.bits_unused = 4;
            ServedGUAMIItem->gUAMI.aMFPointer.buf = core_calloc(1, sizeof(c_uint8_t));
            memcpy(ServedGUAMIItem->gUAMI.aMFPointer.buf, tmp4, 1);

        ASN_SEQUENCE_ADD(&ServedGUAMIList->list, ServedGUAMIItem);
    }


    //TODO fix it : use real counter
    for (i = 0; i < 1/*amf4g_self()->max_num_of_plmn_support*/; i++)
    {
        NGAP_PLMNSupportItem_t *PLMNSupportItem = NULL;
        PLMNSupportItem = (NGAP_PLMNSupportItem_t *) core_calloc(1, sizeof(NGAP_PLMNSupportItem_t));

        // plmn_support_t *plmn_support = &amf4g_self()->plmn_support[i];
        plmn_id_t plmn_id;
        plmn_id_build(&plmn_id, 1, 1, 2);
        ngap_buffer_to_OCTET_STRING(&plmn_id, 3, &PLMNSupportItem->pLMNIdentity);
        //TODO fix it: use real counter
        for (j = 0; j < 1/*amf4g_self()->plmn_support->num_of_s_nssai*/; j++)
        {         
            NGAP_SliceSupportItem_t *SliceSupportItem = NULL;
            SliceSupportItem = (NGAP_SliceSupportItem_t *) core_calloc(1, sizeof(NGAP_SliceSupportItem_t));
            //TODO: fix it,  use s_NSSAI 
            char tmp1[1] = {0x12};
            ngap_buffer_to_OCTET_STRING(tmp1, 1, &SliceSupportItem->s_NSSAI.sST);
            ngap_buffer_to_OCTET_STRING(tmp3, 3, &SliceSupportItem->s_NSSAI.sD);
            // ngap_buffer_to_OCTET_STRING(&plmn_support->s_nssai[j].sst, SST_LEN, &SliceSupportItem->s_NSSAI.sST);
           
           ASN_SEQUENCE_ADD(&PLMNSupportItem->sliceSupportList.list, SliceSupportItem);
        }
        ASN_SEQUENCE_ADD(&PLMNSupportList->list, PLMNSupportItem);
    }

    rv = ngap_encode_pdu(pkbuf, &pdu);
    ngap_free_pdu(&pdu);

    if (rv != CORE_OK)
    {
        d_error("ngap_encode_pdu() failed");
        return CORE_ERROR;
    }

    return CORE_OK;
}