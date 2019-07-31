/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_IntegrityProtectionIndication_H_
#define	_IntegrityProtectionIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntegrityProtectionIndication {
	IntegrityProtectionIndication_required	= 0,
	IntegrityProtectionIndication_preferred	= 1,
	IntegrityProtectionIndication_not_needed	= 2
	/*
	 * Enumeration is extensible
	 */
} e_IntegrityProtectionIndication;

/* IntegrityProtectionIndication */
typedef long	 IntegrityProtectionIndication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_IntegrityProtectionIndication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_IntegrityProtectionIndication;
extern const asn_INTEGER_specifics_t asn_SPC_IntegrityProtectionIndication_specs_1;
asn_struct_free_f IntegrityProtectionIndication_free;
asn_struct_print_f IntegrityProtectionIndication_print;
asn_constr_check_f IntegrityProtectionIndication_constraint;
ber_type_decoder_f IntegrityProtectionIndication_decode_ber;
der_type_encoder_f IntegrityProtectionIndication_encode_der;
xer_type_decoder_f IntegrityProtectionIndication_decode_xer;
xer_type_encoder_f IntegrityProtectionIndication_encode_xer;
oer_type_decoder_f IntegrityProtectionIndication_decode_oer;
oer_type_encoder_f IntegrityProtectionIndication_encode_oer;
per_type_decoder_f IntegrityProtectionIndication_decode_uper;
per_type_encoder_f IntegrityProtectionIndication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IntegrityProtectionIndication_H_ */
#include <asn_internal.h>
