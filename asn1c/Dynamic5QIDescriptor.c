/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "Dynamic5QIDescriptor.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Dynamic5QIDescriptor_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Dynamic5QIDescriptor, priorityLevelQos),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PriorityLevelQos,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityLevelQos"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Dynamic5QIDescriptor, packetDelayBudget),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PacketDelayBudget,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"packetDelayBudget"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Dynamic5QIDescriptor, packetErrorRate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PacketErrorRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"packetErrorRate"
		},
	{ ATF_POINTER, 5, offsetof(struct Dynamic5QIDescriptor, fiveQI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FiveQI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveQI"
		},
	{ ATF_POINTER, 4, offsetof(struct Dynamic5QIDescriptor, delayCritical),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DelayCritical,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"delayCritical"
		},
	{ ATF_POINTER, 3, offsetof(struct Dynamic5QIDescriptor, averagingWindow),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AveragingWindow,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"averagingWindow"
		},
	{ ATF_POINTER, 2, offsetof(struct Dynamic5QIDescriptor, maximumDataBurstVolume),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaximumDataBurstVolume,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maximumDataBurstVolume"
		},
	{ ATF_POINTER, 1, offsetof(struct Dynamic5QIDescriptor, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_178P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Dynamic5QIDescriptor_oms_1[] = { 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_Dynamic5QIDescriptor_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Dynamic5QIDescriptor_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityLevelQos */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* packetDelayBudget */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* packetErrorRate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fiveQI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* delayCritical */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* averagingWindow */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* maximumDataBurstVolume */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Dynamic5QIDescriptor_specs_1 = {
	sizeof(struct Dynamic5QIDescriptor),
	offsetof(struct Dynamic5QIDescriptor, _asn_ctx),
	asn_MAP_Dynamic5QIDescriptor_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_Dynamic5QIDescriptor_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Dynamic5QIDescriptor = {
	"Dynamic5QIDescriptor",
	"Dynamic5QIDescriptor",
	&asn_OP_SEQUENCE,
	asn_DEF_Dynamic5QIDescriptor_tags_1,
	sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1)
		/sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1[0]), /* 1 */
	asn_DEF_Dynamic5QIDescriptor_tags_1,	/* Same as above */
	sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1)
		/sizeof(asn_DEF_Dynamic5QIDescriptor_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Dynamic5QIDescriptor_1,
	8,	/* Elements count */
	&asn_SPC_Dynamic5QIDescriptor_specs_1	/* Additional specs */
};

