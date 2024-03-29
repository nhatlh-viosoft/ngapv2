/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_QosCharacteristics_H_
#define	_QosCharacteristics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonDynamic5QIDescriptor.h"
#include "Dynamic5QIDescriptor.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QosCharacteristics_PR {
	QosCharacteristics_PR_NOTHING,	/* No components present */
	QosCharacteristics_PR_nonDynamic5QI,
	QosCharacteristics_PR_dynamic5QI,
	QosCharacteristics_PR_choice_Extensions
} QosCharacteristics_PR;

/* QosCharacteristics */
typedef struct QosCharacteristics {
	QosCharacteristics_PR present;
	union QosCharacteristics_u {
		NonDynamic5QIDescriptor_t	 nonDynamic5QI;
		Dynamic5QIDescriptor_t	 dynamic5QI;
		ProtocolIE_SingleContainer_130P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QosCharacteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QosCharacteristics;
extern asn_CHOICE_specifics_t asn_SPC_QosCharacteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_QosCharacteristics_1[3];
extern asn_per_constraints_t asn_PER_type_QosCharacteristics_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _QosCharacteristics_H_ */
#include <asn_internal.h>
