/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_UE_associatedLogicalNG_connectionItem_H_
#define	_UE_associatedLogicalNG_connectionItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AMF-UE-NGAP-ID.h"
#include "RAN-UE-NGAP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UE-associatedLogicalNG-connectionItem */
typedef struct UE_associatedLogicalNG_connectionItem {
	AMF_UE_NGAP_ID_t	*aMF_UE_NGAP_ID	/* OPTIONAL */;
	RAN_UE_NGAP_ID_t	*rAN_UE_NGAP_ID	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_associatedLogicalNG_connectionItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_associatedLogicalNG_connectionItem;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_associatedLogicalNG_connectionItem_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_associatedLogicalNG_connectionItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_associatedLogicalNG_connectionItem_H_ */
#include <asn_internal.h>