/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_TAC_H_
#define	_TAC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TAC */
typedef OCTET_STRING_t	 TAC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TAC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TAC;
asn_struct_free_f TAC_free;
asn_struct_print_f TAC_print;
asn_constr_check_f TAC_constraint;
ber_type_decoder_f TAC_decode_ber;
der_type_encoder_f TAC_encode_der;
xer_type_decoder_f TAC_decode_xer;
xer_type_encoder_f TAC_encode_xer;
oer_type_decoder_f TAC_decode_oer;
oer_type_encoder_f TAC_encode_oer;
per_type_decoder_f TAC_decode_uper;
per_type_encoder_f TAC_encode_uper;
per_type_decoder_f TAC_decode_aper;
per_type_encoder_f TAC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TAC_H_ */
#include <asn_internal.h>
