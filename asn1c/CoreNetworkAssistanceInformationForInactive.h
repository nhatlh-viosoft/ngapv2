/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CoreNetworkAssistanceInformationForInactive_H_
#define	_CoreNetworkAssistanceInformationForInactive_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UEIdentityIndexValue.h"
#include "PagingDRX.h"
#include "PeriodicRegistrationUpdateTimer.h"
#include "MICOModeIndication.h"
#include "TAIListForInactive.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExpectedUEBehaviour;
struct ProtocolExtensionContainer;

/* CoreNetworkAssistanceInformationForInactive */
typedef struct CoreNetworkAssistanceInformationForInactive {
	UEIdentityIndexValue_t	 uEIdentityIndexValue;
	PagingDRX_t	*uESpecificDRX	/* OPTIONAL */;
	PeriodicRegistrationUpdateTimer_t	 periodicRegistrationUpdateTimer;
	MICOModeIndication_t	*mICOModeIndication	/* OPTIONAL */;
	TAIListForInactive_t	 tAIListForInactive;
	struct ExpectedUEBehaviour	*expectedUEBehaviour	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CoreNetworkAssistanceInformationForInactive_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CoreNetworkAssistanceInformationForInactive;

#ifdef __cplusplus
}
#endif

#endif	/* _CoreNetworkAssistanceInformationForInactive_H_ */
#include <asn_internal.h>
