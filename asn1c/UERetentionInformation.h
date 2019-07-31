/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_UERetentionInformation_H_
#define	_UERetentionInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UERetentionInformation {
	UERetentionInformation_ues_retained	= 0
	/*
	 * Enumeration is extensible
	 */
} e_UERetentionInformation;

/* UERetentionInformation */
typedef long	 UERetentionInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERetentionInformation;
asn_struct_free_f UERetentionInformation_free;
asn_struct_print_f UERetentionInformation_print;
asn_constr_check_f UERetentionInformation_constraint;
ber_type_decoder_f UERetentionInformation_decode_ber;
der_type_encoder_f UERetentionInformation_encode_der;
xer_type_decoder_f UERetentionInformation_decode_xer;
xer_type_encoder_f UERetentionInformation_encode_xer;
oer_type_decoder_f UERetentionInformation_decode_oer;
oer_type_encoder_f UERetentionInformation_encode_oer;
per_type_decoder_f UERetentionInformation_decode_uper;
per_type_encoder_f UERetentionInformation_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UERetentionInformation_H_ */
#include <asn_internal.h>
