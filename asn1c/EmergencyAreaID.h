/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_EmergencyAreaID_H_
#define	_EmergencyAreaID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EmergencyAreaID */
typedef OCTET_STRING_t	 EmergencyAreaID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EmergencyAreaID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EmergencyAreaID;
asn_struct_free_f EmergencyAreaID_free;
asn_struct_print_f EmergencyAreaID_print;
asn_constr_check_f EmergencyAreaID_constraint;
ber_type_decoder_f EmergencyAreaID_decode_ber;
der_type_encoder_f EmergencyAreaID_encode_der;
xer_type_decoder_f EmergencyAreaID_decode_xer;
xer_type_encoder_f EmergencyAreaID_encode_xer;
oer_type_decoder_f EmergencyAreaID_decode_oer;
oer_type_encoder_f EmergencyAreaID_encode_oer;
per_type_decoder_f EmergencyAreaID_decode_uper;
per_type_encoder_f EmergencyAreaID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EmergencyAreaID_H_ */
#include <asn_internal.h>
