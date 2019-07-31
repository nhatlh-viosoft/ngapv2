/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_DL_NGU_TNLInformationReused_H_
#define	_DL_NGU_TNLInformationReused_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_NGU_TNLInformationReused {
	DL_NGU_TNLInformationReused_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_DL_NGU_TNLInformationReused;

/* DL-NGU-TNLInformationReused */
typedef long	 DL_NGU_TNLInformationReused_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DL_NGU_TNLInformationReused_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DL_NGU_TNLInformationReused;
extern const asn_INTEGER_specifics_t asn_SPC_DL_NGU_TNLInformationReused_specs_1;
asn_struct_free_f DL_NGU_TNLInformationReused_free;
asn_struct_print_f DL_NGU_TNLInformationReused_print;
asn_constr_check_f DL_NGU_TNLInformationReused_constraint;
ber_type_decoder_f DL_NGU_TNLInformationReused_decode_ber;
der_type_encoder_f DL_NGU_TNLInformationReused_encode_der;
xer_type_decoder_f DL_NGU_TNLInformationReused_decode_xer;
xer_type_encoder_f DL_NGU_TNLInformationReused_encode_xer;
per_type_decoder_f DL_NGU_TNLInformationReused_decode_uper;
per_type_encoder_f DL_NGU_TNLInformationReused_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_NGU_TNLInformationReused_H_ */
#include <asn_internal.h>
