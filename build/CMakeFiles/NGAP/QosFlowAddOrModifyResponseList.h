/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_QosFlowAddOrModifyResponseList_H_
#define	_QosFlowAddOrModifyResponseList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QosFlowAddOrModifyResponseItem;

/* QosFlowAddOrModifyResponseList */
typedef struct QosFlowAddOrModifyResponseList {
	A_SEQUENCE_OF(struct QosFlowAddOrModifyResponseItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QosFlowAddOrModifyResponseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QosFlowAddOrModifyResponseList;
extern asn_SET_OF_specifics_t asn_SPC_QosFlowAddOrModifyResponseList_specs_1;
extern asn_TYPE_member_t asn_MBR_QosFlowAddOrModifyResponseList_1[1];
extern asn_per_constraints_t asn_PER_type_QosFlowAddOrModifyResponseList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _QosFlowAddOrModifyResponseList_H_ */
#include <asn_internal.h>
