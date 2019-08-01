/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "SONConfigurationTransfer.h"

#include "XnTNLConfigurationInfo.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_SONConfigurationTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SONConfigurationTransfer, targetRANNodeID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TargetRANNodeID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRANNodeID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONConfigurationTransfer, sourceRANNodeID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SourceRANNodeID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceRANNodeID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONConfigurationTransfer, sONInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SONInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sONInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct SONConfigurationTransfer, xnTNLConfigurationInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_XnTNLConfigurationInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xnTNLConfigurationInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SONConfigurationTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_178P159,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SONConfigurationTransfer_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_SONConfigurationTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SONConfigurationTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetRANNodeID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceRANNodeID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sONInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* xnTNLConfigurationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SONConfigurationTransfer_specs_1 = {
	sizeof(struct SONConfigurationTransfer),
	offsetof(struct SONConfigurationTransfer, _asn_ctx),
	asn_MAP_SONConfigurationTransfer_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SONConfigurationTransfer_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SONConfigurationTransfer = {
	"SONConfigurationTransfer",
	"SONConfigurationTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_SONConfigurationTransfer_tags_1,
	sizeof(asn_DEF_SONConfigurationTransfer_tags_1)
		/sizeof(asn_DEF_SONConfigurationTransfer_tags_1[0]), /* 1 */
	asn_DEF_SONConfigurationTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_SONConfigurationTransfer_tags_1)
		/sizeof(asn_DEF_SONConfigurationTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SONConfigurationTransfer_1,
	5,	/* Elements count */
	&asn_SPC_SONConfigurationTransfer_specs_1	/* Additional specs */
};

