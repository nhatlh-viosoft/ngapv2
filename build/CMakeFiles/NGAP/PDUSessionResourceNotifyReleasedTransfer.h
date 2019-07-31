/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_PDUSessionResourceNotifyReleasedTransfer_H_
#define	_PDUSessionResourceNotifyReleasedTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSessionResourceNotifyReleasedTransfer */
typedef struct PDUSessionResourceNotifyReleasedTransfer {
	Cause_t	 cause;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceNotifyReleasedTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceNotifyReleasedTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceNotifyReleasedTransfer_H_ */
#include <asn_internal.h>