/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_PeriodicRegistrationUpdateTimer_H_
#define	_PeriodicRegistrationUpdateTimer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PeriodicRegistrationUpdateTimer */
typedef BIT_STRING_t	 PeriodicRegistrationUpdateTimer_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PeriodicRegistrationUpdateTimer_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PeriodicRegistrationUpdateTimer;
asn_struct_free_f PeriodicRegistrationUpdateTimer_free;
asn_struct_print_f PeriodicRegistrationUpdateTimer_print;
asn_constr_check_f PeriodicRegistrationUpdateTimer_constraint;
ber_type_decoder_f PeriodicRegistrationUpdateTimer_decode_ber;
der_type_encoder_f PeriodicRegistrationUpdateTimer_encode_der;
xer_type_decoder_f PeriodicRegistrationUpdateTimer_decode_xer;
xer_type_encoder_f PeriodicRegistrationUpdateTimer_encode_xer;
per_type_decoder_f PeriodicRegistrationUpdateTimer_decode_uper;
per_type_encoder_f PeriodicRegistrationUpdateTimer_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicRegistrationUpdateTimer_H_ */
#include <asn_internal.h>
