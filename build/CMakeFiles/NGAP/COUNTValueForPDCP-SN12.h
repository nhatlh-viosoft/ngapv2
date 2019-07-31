/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_COUNTValueForPDCP_SN12_H_
#define	_COUNTValueForPDCP_SN12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* COUNTValueForPDCP-SN12 */
typedef struct COUNTValueForPDCP_SN12 {
	long	 pDCP_SN12;
	long	 hFN_PDCP_SN12;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} COUNTValueForPDCP_SN12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_COUNTValueForPDCP_SN12;
extern asn_SEQUENCE_specifics_t asn_SPC_COUNTValueForPDCP_SN12_specs_1;
extern asn_TYPE_member_t asn_MBR_COUNTValueForPDCP_SN12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _COUNTValueForPDCP_SN12_H_ */
#include <asn_internal.h>
