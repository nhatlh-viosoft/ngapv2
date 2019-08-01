/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PagingDRX_H_
#define	_PagingDRX_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingDRX {
	PagingDRX_v32	= 0,
	PagingDRX_v64	= 1,
	PagingDRX_v128	= 2,
	PagingDRX_v256	= 3
	/*
	 * Enumeration is extensible
	 */
} e_PagingDRX;

/* PagingDRX */
typedef long	 PagingDRX_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PagingDRX_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PagingDRX;
extern const asn_INTEGER_specifics_t asn_SPC_PagingDRX_specs_1;
asn_struct_free_f PagingDRX_free;
asn_struct_print_f PagingDRX_print;
asn_constr_check_f PagingDRX_constraint;
ber_type_decoder_f PagingDRX_decode_ber;
der_type_encoder_f PagingDRX_encode_der;
xer_type_decoder_f PagingDRX_decode_xer;
xer_type_encoder_f PagingDRX_encode_xer;
oer_type_decoder_f PagingDRX_decode_oer;
oer_type_encoder_f PagingDRX_encode_oer;
per_type_decoder_f PagingDRX_decode_uper;
per_type_encoder_f PagingDRX_encode_uper;
per_type_decoder_f PagingDRX_decode_aper;
per_type_encoder_f PagingDRX_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingDRX_H_ */
#include <asn_internal.h>
