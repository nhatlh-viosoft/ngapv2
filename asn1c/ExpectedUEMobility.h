/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_ExpectedUEMobility_H_
#define	_ExpectedUEMobility_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ExpectedUEMobility {
	ExpectedUEMobility_stationary	= 0,
	ExpectedUEMobility_mobile	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ExpectedUEMobility;

/* ExpectedUEMobility */
typedef long	 ExpectedUEMobility_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ExpectedUEMobility_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ExpectedUEMobility;
extern const asn_INTEGER_specifics_t asn_SPC_ExpectedUEMobility_specs_1;
asn_struct_free_f ExpectedUEMobility_free;
asn_struct_print_f ExpectedUEMobility_print;
asn_constr_check_f ExpectedUEMobility_constraint;
ber_type_decoder_f ExpectedUEMobility_decode_ber;
der_type_encoder_f ExpectedUEMobility_encode_der;
xer_type_decoder_f ExpectedUEMobility_decode_xer;
xer_type_encoder_f ExpectedUEMobility_encode_xer;
oer_type_decoder_f ExpectedUEMobility_decode_oer;
oer_type_encoder_f ExpectedUEMobility_encode_oer;
per_type_decoder_f ExpectedUEMobility_decode_uper;
per_type_encoder_f ExpectedUEMobility_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExpectedUEMobility_H_ */
#include <asn_internal.h>
