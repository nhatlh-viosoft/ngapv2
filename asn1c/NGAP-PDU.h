/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "../NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_PDU_H_
#define	_NGAP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_PDU_PR {
	NGAP_PDU_PR_NOTHING,	/* No components present */
	NGAP_PDU_PR_initiatingMessage,
	NGAP_PDU_PR_successfulOutcome,
	NGAP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} NGAP_PDU_PR;

/* Forward declarations */
struct InitiatingMessage;
struct SuccessfulOutcome;
struct UnsuccessfulOutcome;

/* NGAP-PDU */
typedef struct NGAP_PDU {
	NGAP_PDU_PR present;
	union NGAP_PDU_u {
		struct InitiatingMessage	*initiatingMessage;
		struct SuccessfulOutcome	*successfulOutcome;
		struct UnsuccessfulOutcome	*unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDU_H_ */
#include <asn_internal.h>
