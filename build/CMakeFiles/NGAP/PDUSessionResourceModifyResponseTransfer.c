/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#include "PDUSessionResourceModifyResponseTransfer.h"

#include "UPTransportLayerInformation.h"
#include "QosFlowAddOrModifyResponseList.h"
#include "QosFlowPerTNLInformationList.h"
#include "QosFlowListWithCause.h"
#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_PDUSessionResourceModifyResponseTransfer_1[] = {
	{ ATF_POINTER, 6, offsetof(struct PDUSessionResourceModifyResponseTransfer, dL_NGU_UP_TNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-NGU-UP-TNLInformation"
		},
	{ ATF_POINTER, 5, offsetof(struct PDUSessionResourceModifyResponseTransfer, uL_NGU_UP_TNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-NGU-UP-TNLInformation"
		},
	{ ATF_POINTER, 4, offsetof(struct PDUSessionResourceModifyResponseTransfer, qosFlowAddOrModifyResponseList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QosFlowAddOrModifyResponseList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowAddOrModifyResponseList"
		},
	{ ATF_POINTER, 3, offsetof(struct PDUSessionResourceModifyResponseTransfer, additionalDLQosFlowPerTNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QosFlowPerTNLInformationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalDLQosFlowPerTNLInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct PDUSessionResourceModifyResponseTransfer, qosFlowFailedToAddOrModifyList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QosFlowListWithCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowFailedToAddOrModifyList"
		},
	{ ATF_POINTER, 1, offsetof(struct PDUSessionResourceModifyResponseTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_178P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_PDUSessionResourceModifyResponseTransfer_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_PDUSessionResourceModifyResponseTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDUSessionResourceModifyResponseTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dL-NGU-UP-TNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uL-NGU-UP-TNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* qosFlowAddOrModifyResponseList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* additionalDLQosFlowPerTNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* qosFlowFailedToAddOrModifyList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceModifyResponseTransfer_specs_1 = {
	sizeof(struct PDUSessionResourceModifyResponseTransfer),
	offsetof(struct PDUSessionResourceModifyResponseTransfer, _asn_ctx),
	asn_MAP_PDUSessionResourceModifyResponseTransfer_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_PDUSessionResourceModifyResponseTransfer_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceModifyResponseTransfer = {
	"PDUSessionResourceModifyResponseTransfer",
	"PDUSessionResourceModifyResponseTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_PDUSessionResourceModifyResponseTransfer_tags_1,
	sizeof(asn_DEF_PDUSessionResourceModifyResponseTransfer_tags_1)
		/sizeof(asn_DEF_PDUSessionResourceModifyResponseTransfer_tags_1[0]), /* 1 */
	asn_DEF_PDUSessionResourceModifyResponseTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDUSessionResourceModifyResponseTransfer_tags_1)
		/sizeof(asn_DEF_PDUSessionResourceModifyResponseTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDUSessionResourceModifyResponseTransfer_1,
	6,	/* Elements count */
	&asn_SPC_PDUSessionResourceModifyResponseTransfer_specs_1	/* Additional specs */
};

