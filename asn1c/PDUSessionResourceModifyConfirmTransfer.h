/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDUSessionResourceModifyConfirmTransfer_H_
#define	_PDUSessionResourceModifyConfirmTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QosFlowModifyConfirmList.h"
#include "UPTransportLayerInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UPTransportLayerInformationPairList;
struct QosFlowListWithCause;
struct ProtocolExtensionContainer;

/* PDUSessionResourceModifyConfirmTransfer */
typedef struct PDUSessionResourceModifyConfirmTransfer {
	QosFlowModifyConfirmList_t	 qosFlowModifyConfirmList;
	UPTransportLayerInformation_t	 uLNGU_UP_TNLInformation;
	struct UPTransportLayerInformationPairList	*additionalNG_UUPTNLInformation	/* OPTIONAL */;
	struct QosFlowListWithCause	*qosFlowFailedToModifyList	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceModifyConfirmTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceModifyConfirmTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceModifyConfirmTransfer_H_ */
#include <asn_internal.h>
