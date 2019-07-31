/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_UERadioCapability_H_
#define	_UERadioCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UERadioCapability */
typedef OCTET_STRING_t	 UERadioCapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioCapability;
asn_struct_free_f UERadioCapability_free;
asn_struct_print_f UERadioCapability_print;
asn_constr_check_f UERadioCapability_constraint;
ber_type_decoder_f UERadioCapability_decode_ber;
der_type_encoder_f UERadioCapability_encode_der;
xer_type_decoder_f UERadioCapability_decode_xer;
xer_type_encoder_f UERadioCapability_encode_xer;
oer_type_decoder_f UERadioCapability_decode_oer;
oer_type_encoder_f UERadioCapability_encode_oer;
per_type_decoder_f UERadioCapability_decode_uper;
per_type_encoder_f UERadioCapability_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UERadioCapability_H_ */
#include <asn_internal.h>
