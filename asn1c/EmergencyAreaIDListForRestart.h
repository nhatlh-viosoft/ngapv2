/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_EmergencyAreaIDListForRestart_H_
#define	_EmergencyAreaIDListForRestart_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EmergencyAreaID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EmergencyAreaIDListForRestart */
typedef struct EmergencyAreaIDListForRestart {
	A_SEQUENCE_OF(EmergencyAreaID_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EmergencyAreaIDListForRestart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmergencyAreaIDListForRestart;

#ifdef __cplusplus
}
#endif

#endif	/* _EmergencyAreaIDListForRestart_H_ */
#include <asn_internal.h>
