/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDUSessionResourceReleasedItemPSFail_H_
#define	_PDUSessionResourceReleasedItemPSFail_H_


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

/* PDUSessionResourceReleasedItemPSFail */
typedef struct PDUSessionResourceReleasedItemPSFail {
	PDUSessionID_t	 pDUSessionID;
	OCTET_STRING_t	 pathSwitchRequestUnsuccessfulTransfer;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceReleasedItemPSFail_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceReleasedItemPSFail;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceReleasedItemPSFail_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceReleasedItemPSFail_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceReleasedItemPSFail_H_ */
#include <asn_internal.h>
