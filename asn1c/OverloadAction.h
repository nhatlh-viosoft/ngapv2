/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_OverloadAction_H_
#define	_OverloadAction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OverloadAction {
	OverloadAction_reject_non_emergency_mo_dt	= 0,
	OverloadAction_reject_rrc_cr_signalling	= 1,
	OverloadAction_permit_emergency_sessions_and_mobile_terminated_services_only	= 2,
	OverloadAction_permit_high_priority_sessions_and_mobile_terminated_services_only	= 3
	/*
	 * Enumeration is extensible
	 */
} e_OverloadAction;

/* OverloadAction */
typedef long	 OverloadAction_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_OverloadAction_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_OverloadAction;
extern const asn_INTEGER_specifics_t asn_SPC_OverloadAction_specs_1;
asn_struct_free_f OverloadAction_free;
asn_struct_print_f OverloadAction_print;
asn_constr_check_f OverloadAction_constraint;
ber_type_decoder_f OverloadAction_decode_ber;
der_type_encoder_f OverloadAction_encode_der;
xer_type_decoder_f OverloadAction_decode_xer;
xer_type_encoder_f OverloadAction_encode_xer;
oer_type_decoder_f OverloadAction_decode_oer;
oer_type_encoder_f OverloadAction_encode_oer;
per_type_decoder_f OverloadAction_decode_uper;
per_type_encoder_f OverloadAction_encode_uper;
per_type_decoder_f OverloadAction_decode_aper;
per_type_encoder_f OverloadAction_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _OverloadAction_H_ */
#include <asn_internal.h>
