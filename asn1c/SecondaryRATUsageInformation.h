/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_SecondaryRATUsageInformation_H_
#define	_SecondaryRATUsageInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionUsageReport;
struct QoSFlowsUsageReportList;
struct ProtocolExtensionContainer;

/* SecondaryRATUsageInformation */
typedef struct SecondaryRATUsageInformation {
	struct PDUSessionUsageReport	*pDUSessionUsageReport	/* OPTIONAL */;
	struct QoSFlowsUsageReportList	*qosFlowsUsageReportList	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryRATUsageInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryRATUsageInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_SecondaryRATUsageInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SecondaryRATUsageInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryRATUsageInformation_H_ */
#include <asn_internal.h>
