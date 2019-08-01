/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_EPS_TAI_H_
#define	_EPS_TAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNIdentity.h"
#include "EPS-TAC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* EPS-TAI */
typedef struct EPS_TAI {
	PLMNIdentity_t	 pLMNIdentity;
	EPS_TAC_t	 ePS_TAC;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPS_TAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPS_TAI;
extern asn_SEQUENCE_specifics_t asn_SPC_EPS_TAI_specs_1;
extern asn_TYPE_member_t asn_MBR_EPS_TAI_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EPS_TAI_H_ */
#include <asn_internal.h>
