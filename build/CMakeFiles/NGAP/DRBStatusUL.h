/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_DRBStatusUL_H_
#define	_DRBStatusUL_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRBStatusUL12.h"
#include "DRBStatusUL18.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRBStatusUL_PR {
	DRBStatusUL_PR_NOTHING,	/* No components present */
	DRBStatusUL_PR_dRBStatusUL12,
	DRBStatusUL_PR_dRBStatusUL18,
	DRBStatusUL_PR_choice_Extensions
} DRBStatusUL_PR;

/* DRBStatusUL */
typedef struct DRBStatusUL {
	DRBStatusUL_PR present;
	union DRBStatusUL_u {
		DRBStatusUL12_t	 dRBStatusUL12;
		DRBStatusUL18_t	 dRBStatusUL18;
		ProtocolIE_SingleContainer_130P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRBStatusUL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBStatusUL;
extern asn_CHOICE_specifics_t asn_SPC_DRBStatusUL_specs_1;
extern asn_TYPE_member_t asn_MBR_DRBStatusUL_1[3];
extern asn_per_constraints_t asn_PER_type_DRBStatusUL_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DRBStatusUL_H_ */
#include <asn_internal.h>
