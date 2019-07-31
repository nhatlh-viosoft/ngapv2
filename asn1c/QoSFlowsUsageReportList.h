/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_QoSFlowsUsageReportList_H_
#define	_QoSFlowsUsageReportList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QoSFlowsUsageReport_Item;

/* QoSFlowsUsageReportList */
typedef struct QoSFlowsUsageReportList {
	A_SEQUENCE_OF(struct QoSFlowsUsageReport_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QoSFlowsUsageReportList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSFlowsUsageReportList;
extern asn_SET_OF_specifics_t asn_SPC_QoSFlowsUsageReportList_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSFlowsUsageReportList_1[1];
extern asn_per_constraints_t asn_PER_type_QoSFlowsUsageReportList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _QoSFlowsUsageReportList_H_ */
#include <asn_internal.h>
