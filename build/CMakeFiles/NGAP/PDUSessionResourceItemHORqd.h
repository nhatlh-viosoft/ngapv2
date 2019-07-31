/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_PDUSessionResourceItemHORqd_H_
#define	_PDUSessionResourceItemHORqd_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDUSessionID.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSessionResourceItemHORqd */
typedef struct PDUSessionResourceItemHORqd {
	PDUSessionID_t	 pDUSessionID;
	OCTET_STRING_t	 handoverRequiredTransfer;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceItemHORqd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceItemHORqd;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceItemHORqd_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceItemHORqd_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceItemHORqd_H_ */
#include <asn_internal.h>
