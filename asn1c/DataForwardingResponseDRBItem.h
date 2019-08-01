/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DataForwardingResponseDRBItem_H_
#define	_DataForwardingResponseDRBItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UPTransportLayerInformation;
struct ProtocolExtensionContainer;

/* DataForwardingResponseDRBItem */
typedef struct DataForwardingResponseDRBItem {
	DRB_ID_t	 dRB_ID;
	struct UPTransportLayerInformation	*dLForwardingUP_TNLInformation;	/* OPTIONAL */
	struct UPTransportLayerInformation	*uLForwardingUP_TNLInformation;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataForwardingResponseDRBItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataForwardingResponseDRBItem;
extern asn_SEQUENCE_specifics_t asn_SPC_DataForwardingResponseDRBItem_specs_1;
extern asn_TYPE_member_t asn_MBR_DataForwardingResponseDRBItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DataForwardingResponseDRBItem_H_ */
#include <asn_internal.h>
