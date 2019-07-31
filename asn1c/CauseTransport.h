/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CauseTransport_H_
#define	_CauseTransport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseTransport {
	CauseTransport_transport_resource_unavailable	= 0,
	CauseTransport_unspecified	= 1
	/*
	 * Enumeration is extensible
	 */
} e_CauseTransport;

/* CauseTransport */
typedef long	 CauseTransport_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseTransport_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseTransport;
extern const asn_INTEGER_specifics_t asn_SPC_CauseTransport_specs_1;
asn_struct_free_f CauseTransport_free;
asn_struct_print_f CauseTransport_print;
asn_constr_check_f CauseTransport_constraint;
ber_type_decoder_f CauseTransport_decode_ber;
der_type_encoder_f CauseTransport_encode_der;
xer_type_decoder_f CauseTransport_decode_xer;
xer_type_encoder_f CauseTransport_encode_xer;
oer_type_decoder_f CauseTransport_decode_oer;
oer_type_encoder_f CauseTransport_encode_oer;
per_type_decoder_f CauseTransport_decode_uper;
per_type_encoder_f CauseTransport_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseTransport_H_ */
#include <asn_internal.h>
