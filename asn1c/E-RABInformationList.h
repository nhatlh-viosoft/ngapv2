/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_E_RABInformationList_H_
#define	_E_RABInformationList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_RABInformationItem;

/* E-RABInformationList */
typedef struct E_RABInformationList {
	A_SEQUENCE_OF(struct E_RABInformationItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABInformationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABInformationList;
extern asn_SET_OF_specifics_t asn_SPC_E_RABInformationList_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABInformationList_1[1];
extern asn_per_constraints_t asn_PER_type_E_RABInformationList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABInformationList_H_ */
#include <asn_internal.h>
