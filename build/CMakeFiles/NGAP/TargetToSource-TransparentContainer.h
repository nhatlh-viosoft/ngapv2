/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_TargetToSource_TransparentContainer_H_
#define	_TargetToSource_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TargetToSource-TransparentContainer */
typedef OCTET_STRING_t	 TargetToSource_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetToSource_TransparentContainer;
asn_struct_free_f TargetToSource_TransparentContainer_free;
asn_struct_print_f TargetToSource_TransparentContainer_print;
asn_constr_check_f TargetToSource_TransparentContainer_constraint;
ber_type_decoder_f TargetToSource_TransparentContainer_decode_ber;
der_type_encoder_f TargetToSource_TransparentContainer_encode_der;
xer_type_decoder_f TargetToSource_TransparentContainer_decode_xer;
xer_type_encoder_f TargetToSource_TransparentContainer_encode_xer;
per_type_decoder_f TargetToSource_TransparentContainer_decode_uper;
per_type_encoder_f TargetToSource_TransparentContainer_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TargetToSource_TransparentContainer_H_ */
#include <asn_internal.h>
