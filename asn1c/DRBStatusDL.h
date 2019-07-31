/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DRBStatusDL_H_
#define	_DRBStatusDL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRBStatusDL_PR {
	DRBStatusDL_PR_NOTHING,	/* No components present */
	DRBStatusDL_PR_dRBStatusDL12,
	DRBStatusDL_PR_dRBStatusDL18,
	DRBStatusDL_PR_choice_Extensions
} DRBStatusDL_PR;

/* Forward declarations */
struct DRBStatusDL12;
struct DRBStatusDL18;
struct ProtocolIE_SingleContainer;

/* DRBStatusDL */
typedef struct DRBStatusDL {
	DRBStatusDL_PR present;
	union DRBStatusDL_u {
		struct DRBStatusDL12	*dRBStatusDL12;
		struct DRBStatusDL18	*dRBStatusDL18;
		struct ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRBStatusDL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBStatusDL;
extern asn_CHOICE_specifics_t asn_SPC_DRBStatusDL_specs_1;
extern asn_TYPE_member_t asn_MBR_DRBStatusDL_1[3];
extern asn_per_constraints_t asn_PER_type_DRBStatusDL_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DRBStatusDL_H_ */
#include <asn_internal.h>
