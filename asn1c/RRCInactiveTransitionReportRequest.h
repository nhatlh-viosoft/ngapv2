/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_RRCInactiveTransitionReportRequest_H_
#define	_RRCInactiveTransitionReportRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCInactiveTransitionReportRequest {
	RRCInactiveTransitionReportRequest_subsequent_state_transition_report	= 0,
	RRCInactiveTransitionReportRequest_single_rrc_connected_state_report	= 1,
	RRCInactiveTransitionReportRequest_cancel_report	= 2
	/*
	 * Enumeration is extensible
	 */
} e_RRCInactiveTransitionReportRequest;

/* RRCInactiveTransitionReportRequest */
typedef long	 RRCInactiveTransitionReportRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRCInactiveTransitionReportRequest_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRCInactiveTransitionReportRequest;
extern const asn_INTEGER_specifics_t asn_SPC_RRCInactiveTransitionReportRequest_specs_1;
asn_struct_free_f RRCInactiveTransitionReportRequest_free;
asn_struct_print_f RRCInactiveTransitionReportRequest_print;
asn_constr_check_f RRCInactiveTransitionReportRequest_constraint;
ber_type_decoder_f RRCInactiveTransitionReportRequest_decode_ber;
der_type_encoder_f RRCInactiveTransitionReportRequest_encode_der;
xer_type_decoder_f RRCInactiveTransitionReportRequest_decode_xer;
xer_type_encoder_f RRCInactiveTransitionReportRequest_encode_xer;
oer_type_decoder_f RRCInactiveTransitionReportRequest_decode_oer;
oer_type_encoder_f RRCInactiveTransitionReportRequest_encode_oer;
per_type_decoder_f RRCInactiveTransitionReportRequest_decode_uper;
per_type_encoder_f RRCInactiveTransitionReportRequest_encode_uper;
per_type_decoder_f RRCInactiveTransitionReportRequest_decode_aper;
per_type_encoder_f RRCInactiveTransitionReportRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCInactiveTransitionReportRequest_H_ */
#include <asn_internal.h>
