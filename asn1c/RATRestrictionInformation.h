/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_RATRestrictionInformation_H_
#define	_RATRestrictionInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RATRestrictionInformation */
typedef BIT_STRING_t	 RATRestrictionInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RATRestrictionInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RATRestrictionInformation;
asn_struct_free_f RATRestrictionInformation_free;
asn_struct_print_f RATRestrictionInformation_print;
asn_constr_check_f RATRestrictionInformation_constraint;
ber_type_decoder_f RATRestrictionInformation_decode_ber;
der_type_encoder_f RATRestrictionInformation_encode_der;
xer_type_decoder_f RATRestrictionInformation_decode_xer;
xer_type_encoder_f RATRestrictionInformation_encode_xer;
oer_type_decoder_f RATRestrictionInformation_decode_oer;
oer_type_encoder_f RATRestrictionInformation_encode_oer;
per_type_decoder_f RATRestrictionInformation_decode_uper;
per_type_encoder_f RATRestrictionInformation_encode_uper;
per_type_decoder_f RATRestrictionInformation_decode_aper;
per_type_encoder_f RATRestrictionInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RATRestrictionInformation_H_ */
#include <asn_internal.h>
