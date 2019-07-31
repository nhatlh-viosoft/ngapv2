/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CauseNas_H_
#define	_CauseNas_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseNas {
	CauseNas_normal_release	= 0,
	CauseNas_authentication_failure	= 1,
	CauseNas_deregister	= 2,
	CauseNas_unspecified	= 3
	/*
	 * Enumeration is extensible
	 */
} e_CauseNas;

/* CauseNas */
typedef long	 CauseNas_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseNas_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseNas;
extern const asn_INTEGER_specifics_t asn_SPC_CauseNas_specs_1;
asn_struct_free_f CauseNas_free;
asn_struct_print_f CauseNas_print;
asn_constr_check_f CauseNas_constraint;
ber_type_decoder_f CauseNas_decode_ber;
der_type_encoder_f CauseNas_encode_der;
xer_type_decoder_f CauseNas_decode_xer;
xer_type_encoder_f CauseNas_encode_xer;
oer_type_decoder_f CauseNas_decode_oer;
oer_type_encoder_f CauseNas_encode_oer;
per_type_decoder_f CauseNas_decode_uper;
per_type_encoder_f CauseNas_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseNas_H_ */
#include <asn_internal.h>
