/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_DRBStatusDL18_H_
#define	_DRBStatusDL18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "COUNTValueForPDCP-SN18.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* DRBStatusDL18 */
typedef struct DRBStatusDL18 {
	COUNTValueForPDCP_SN18_t	 dL_COUNTValue;
	struct ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRBStatusDL18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBStatusDL18;
extern asn_SEQUENCE_specifics_t asn_SPC_DRBStatusDL18_specs_1;
extern asn_TYPE_member_t asn_MBR_DRBStatusDL18_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DRBStatusDL18_H_ */
#include <asn_internal.h>
