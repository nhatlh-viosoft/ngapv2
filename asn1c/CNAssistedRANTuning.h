/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CNAssistedRANTuning_H_
#define	_CNAssistedRANTuning_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExpectedUEBehaviour;
struct ProtocolExtensionContainer;

/* CNAssistedRANTuning */
typedef struct CNAssistedRANTuning {
	struct ExpectedUEBehaviour	*expectedUEBehaviour	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CNAssistedRANTuning_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CNAssistedRANTuning;

#ifdef __cplusplus
}
#endif

#endif	/* _CNAssistedRANTuning_H_ */
#include <asn_internal.h>
