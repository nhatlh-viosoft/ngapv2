/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_AdditionalDLUPTNLInformationForHOItem_H_
#define	_AdditionalDLUPTNLInformationForHOItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UPTransportLayerInformation.h"
#include "QosFlowListWithDataForwarding.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UPTransportLayerInformation;
struct ProtocolExtensionContainer;

/* AdditionalDLUPTNLInformationForHOItem */
typedef struct AdditionalDLUPTNLInformationForHOItem {
	UPTransportLayerInformation_t	 additionalDL_NGU_UP_TNLInformation;
	QosFlowListWithDataForwarding_t	 additionalQosFlowSetupResponseList;
	struct UPTransportLayerInformation	*additionalDLForwardingUPTNLInformation;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalDLUPTNLInformationForHOItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalDLUPTNLInformationForHOItem;
extern asn_SEQUENCE_specifics_t asn_SPC_AdditionalDLUPTNLInformationForHOItem_specs_1;
extern asn_TYPE_member_t asn_MBR_AdditionalDLUPTNLInformationForHOItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalDLUPTNLInformationForHOItem_H_ */
#include <asn_internal.h>
