/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_H_
#define	_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSessionResourceModifyIndicationUnsuccessfulTransfer */
typedef struct PDUSessionResourceModifyIndicationUnsuccessfulTransfer {
	Cause_t	 cause;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceModifyIndicationUnsuccessfulTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceModifyIndicationUnsuccessfulTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceModifyIndicationUnsuccessfulTransfer_H_ */
#include <asn_internal.h>
