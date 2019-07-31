/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_AreaOfInterestCellList_H_
#define	_AreaOfInterestCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaOfInterestCellItem;

/* AreaOfInterestCellList */
typedef struct AreaOfInterestCellList {
	A_SEQUENCE_OF(struct AreaOfInterestCellItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaOfInterestCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaOfInterestCellList;
extern asn_SET_OF_specifics_t asn_SPC_AreaOfInterestCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaOfInterestCellList_1[1];
extern asn_per_constraints_t asn_PER_type_AreaOfInterestCellList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaOfInterestCellList_H_ */
#include <asn_internal.h>
