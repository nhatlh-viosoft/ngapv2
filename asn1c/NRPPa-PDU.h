/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NRPPa_PDU_H_
#define	_NRPPa_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NRPPa-PDU */
typedef OCTET_STRING_t	 NRPPa_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPa_PDU;
asn_struct_free_f NRPPa_PDU_free;
asn_struct_print_f NRPPa_PDU_print;
asn_constr_check_f NRPPa_PDU_constraint;
ber_type_decoder_f NRPPa_PDU_decode_ber;
der_type_encoder_f NRPPa_PDU_encode_der;
xer_type_decoder_f NRPPa_PDU_decode_xer;
xer_type_encoder_f NRPPa_PDU_encode_xer;
oer_type_decoder_f NRPPa_PDU_decode_oer;
oer_type_encoder_f NRPPa_PDU_encode_oer;
per_type_decoder_f NRPPa_PDU_decode_uper;
per_type_encoder_f NRPPa_PDU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPa_PDU_H_ */
#include <asn_internal.h>
