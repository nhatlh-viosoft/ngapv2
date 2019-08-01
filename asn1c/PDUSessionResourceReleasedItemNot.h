/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDUSessionResourceReleasedItemNot_H_
#define	_PDUSessionResourceReleasedItemNot_H_


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

/* PDUSessionResourceReleasedItemNot */
typedef struct PDUSessionResourceReleasedItemNot {
	PDUSessionID_t	 pDUSessionID;
	OCTET_STRING_t	 pDUSessionResourceNotifyReleasedTransfer;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceReleasedItemNot_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceReleasedItemNot;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceReleasedItemNot_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceReleasedItemNot_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceReleasedItemNot_H_ */
#include <asn_internal.h>
