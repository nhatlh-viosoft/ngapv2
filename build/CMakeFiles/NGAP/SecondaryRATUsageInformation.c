/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#include "SecondaryRATUsageInformation.h"

#include "PDUSessionUsageReport.h"
#include "QoSFlowsUsageReportList.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_SecondaryRATUsageInformation_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SecondaryRATUsageInformation, pDUSessionUsageReport),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDUSessionUsageReport,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDUSessionUsageReport"
		},
	{ ATF_POINTER, 2, offsetof(struct SecondaryRATUsageInformation, qosFlowsUsageReportList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSFlowsUsageReportList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowsUsageReportList"
		},
	{ ATF_POINTER, 1, offsetof(struct SecondaryRATUsageInformation, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_178P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_SecondaryRATUsageInformation_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SecondaryRATUsageInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecondaryRATUsageInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pDUSessionUsageReport */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qosFlowsUsageReportList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_SecondaryRATUsageInformation_specs_1 = {
	sizeof(struct SecondaryRATUsageInformation),
	offsetof(struct SecondaryRATUsageInformation, _asn_ctx),
	asn_MAP_SecondaryRATUsageInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SecondaryRATUsageInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SecondaryRATUsageInformation = {
	"SecondaryRATUsageInformation",
	"SecondaryRATUsageInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_SecondaryRATUsageInformation_tags_1,
	sizeof(asn_DEF_SecondaryRATUsageInformation_tags_1)
		/sizeof(asn_DEF_SecondaryRATUsageInformation_tags_1[0]), /* 1 */
	asn_DEF_SecondaryRATUsageInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecondaryRATUsageInformation_tags_1)
		/sizeof(asn_DEF_SecondaryRATUsageInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SecondaryRATUsageInformation_1,
	3,	/* Elements count */
	&asn_SPC_SecondaryRATUsageInformation_specs_1	/* Additional specs */
};

