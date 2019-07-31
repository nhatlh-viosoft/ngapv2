/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_MaximumIntegrityProtectedDataRate_H_
#define	_MaximumIntegrityProtectedDataRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaximumIntegrityProtectedDataRate {
	MaximumIntegrityProtectedDataRate_bitrate64kbs	= 0,
	MaximumIntegrityProtectedDataRate_maximum_UE_rate	= 1
	/*
	 * Enumeration is extensible
	 */
} e_MaximumIntegrityProtectedDataRate;

/* MaximumIntegrityProtectedDataRate */
typedef long	 MaximumIntegrityProtectedDataRate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MaximumIntegrityProtectedDataRate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MaximumIntegrityProtectedDataRate;
extern const asn_INTEGER_specifics_t asn_SPC_MaximumIntegrityProtectedDataRate_specs_1;
asn_struct_free_f MaximumIntegrityProtectedDataRate_free;
asn_struct_print_f MaximumIntegrityProtectedDataRate_print;
asn_constr_check_f MaximumIntegrityProtectedDataRate_constraint;
ber_type_decoder_f MaximumIntegrityProtectedDataRate_decode_ber;
der_type_encoder_f MaximumIntegrityProtectedDataRate_encode_der;
xer_type_decoder_f MaximumIntegrityProtectedDataRate_decode_xer;
xer_type_encoder_f MaximumIntegrityProtectedDataRate_encode_xer;
oer_type_decoder_f MaximumIntegrityProtectedDataRate_decode_oer;
oer_type_encoder_f MaximumIntegrityProtectedDataRate_encode_oer;
per_type_decoder_f MaximumIntegrityProtectedDataRate_decode_uper;
per_type_encoder_f MaximumIntegrityProtectedDataRate_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaximumIntegrityProtectedDataRate_H_ */
#include <asn_internal.h>
