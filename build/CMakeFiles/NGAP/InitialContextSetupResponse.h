/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_InitialContextSetupResponse_H_
#define	_InitialContextSetupResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InitialContextSetupResponse */
typedef struct InitialContextSetupResponse {
	ProtocolIE_Container_127P0_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialContextSetupResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialContextSetupResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_InitialContextSetupResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_InitialContextSetupResponse_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _InitialContextSetupResponse_H_ */
#include <asn_internal.h>
