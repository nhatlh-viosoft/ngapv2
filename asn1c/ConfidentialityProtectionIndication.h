/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_ConfidentialityProtectionIndication_H_
#define	_ConfidentialityProtectionIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ConfidentialityProtectionIndication {
	ConfidentialityProtectionIndication_required	= 0,
	ConfidentialityProtectionIndication_preferred	= 1,
	ConfidentialityProtectionIndication_not_needed	= 2
	/*
	 * Enumeration is extensible
	 */
} e_ConfidentialityProtectionIndication;

/* ConfidentialityProtectionIndication */
typedef long	 ConfidentialityProtectionIndication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ConfidentialityProtectionIndication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ConfidentialityProtectionIndication;
extern const asn_INTEGER_specifics_t asn_SPC_ConfidentialityProtectionIndication_specs_1;
asn_struct_free_f ConfidentialityProtectionIndication_free;
asn_struct_print_f ConfidentialityProtectionIndication_print;
asn_constr_check_f ConfidentialityProtectionIndication_constraint;
ber_type_decoder_f ConfidentialityProtectionIndication_decode_ber;
der_type_encoder_f ConfidentialityProtectionIndication_encode_der;
xer_type_decoder_f ConfidentialityProtectionIndication_decode_xer;
xer_type_encoder_f ConfidentialityProtectionIndication_encode_xer;
oer_type_decoder_f ConfidentialityProtectionIndication_decode_oer;
oer_type_encoder_f ConfidentialityProtectionIndication_encode_oer;
per_type_decoder_f ConfidentialityProtectionIndication_decode_uper;
per_type_encoder_f ConfidentialityProtectionIndication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ConfidentialityProtectionIndication_H_ */
#include <asn_internal.h>
