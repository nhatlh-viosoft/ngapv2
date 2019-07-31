/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_WarningAreaList_H_
#define	_WarningAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WarningAreaList_PR {
	WarningAreaList_PR_NOTHING,	/* No components present */
	WarningAreaList_PR_eUTRA_CGIListForWarning,
	WarningAreaList_PR_nR_CGIListForWarning,
	WarningAreaList_PR_tAIListForWarning,
	WarningAreaList_PR_emergencyAreaIDList,
	WarningAreaList_PR_choice_Extensions
} WarningAreaList_PR;

/* Forward declarations */
struct EUTRA_CGIListForWarning;
struct NR_CGIListForWarning;
struct TAIListForWarning;
struct EmergencyAreaIDList;
struct ProtocolIE_SingleContainer;

/* WarningAreaList */
typedef struct WarningAreaList {
	WarningAreaList_PR present;
	union WarningAreaList_u {
		struct EUTRA_CGIListForWarning	*eUTRA_CGIListForWarning;
		struct NR_CGIListForWarning	*nR_CGIListForWarning;
		struct TAIListForWarning	*tAIListForWarning;
		struct EmergencyAreaIDList	*emergencyAreaIDList;
		struct ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WarningAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WarningAreaList;

#ifdef __cplusplus
}
#endif

#endif	/* _WarningAreaList_H_ */
#include <asn_internal.h>