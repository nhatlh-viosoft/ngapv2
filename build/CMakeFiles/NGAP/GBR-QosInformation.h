/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_GBR_QosInformation_H_
#define	_GBR_QosInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BitRate.h"
#include "NotificationControl.h"
#include "PacketLossRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* GBR-QosInformation */
typedef struct GBR_QosInformation {
	BitRate_t	 maximumFlowBitRateDL;
	BitRate_t	 maximumFlowBitRateUL;
	BitRate_t	 guaranteedFlowBitRateDL;
	BitRate_t	 guaranteedFlowBitRateUL;
	NotificationControl_t	*notificationControl	/* OPTIONAL */;
	PacketLossRate_t	*maximumPacketLossRateDL	/* OPTIONAL */;
	PacketLossRate_t	*maximumPacketLossRateUL	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GBR_QosInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GBR_QosInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_GBR_QosInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_GBR_QosInformation_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _GBR_QosInformation_H_ */
#include <asn_internal.h>
