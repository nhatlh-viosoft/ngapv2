/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_TAIListForPagingItem_H_
#define	_TAIListForPagingItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TAI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TAIListForPagingItem */
typedef struct TAIListForPagingItem {
	TAI_t	 tAI;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAIListForPagingItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAIListForPagingItem;
extern asn_SEQUENCE_specifics_t asn_SPC_TAIListForPagingItem_specs_1;
extern asn_TYPE_member_t asn_MBR_TAIListForPagingItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TAIListForPagingItem_H_ */
#include <asn_internal.h>
