/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_Dynamic5QIDescriptor_H_
#define	_Dynamic5QIDescriptor_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PriorityLevelQos.h"
#include "PacketDelayBudget.h"
#include "PacketErrorRate.h"
#include "FiveQI.h"
#include "DelayCritical.h"
#include "AveragingWindow.h"
#include "MaximumDataBurstVolume.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Dynamic5QIDescriptor */
typedef struct Dynamic5QIDescriptor {
	PriorityLevelQos_t	 priorityLevelQos;
	PacketDelayBudget_t	 packetDelayBudget;
	PacketErrorRate_t	 packetErrorRate;
	FiveQI_t	*fiveQI;	/* OPTIONAL */
	DelayCritical_t	*delayCritical;	/* OPTIONAL */
	AveragingWindow_t	*averagingWindow;	/* OPTIONAL */
	MaximumDataBurstVolume_t	*maximumDataBurstVolume;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Dynamic5QIDescriptor_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Dynamic5QIDescriptor;
extern asn_SEQUENCE_specifics_t asn_SPC_Dynamic5QIDescriptor_specs_1;
extern asn_TYPE_member_t asn_MBR_Dynamic5QIDescriptor_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _Dynamic5QIDescriptor_H_ */
#include <asn_internal.h>
