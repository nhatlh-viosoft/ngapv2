/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "LastVisitedNGRANCellInformation.h"

#include "Cause.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_LastVisitedNGRANCellInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LastVisitedNGRANCellInformation, globalCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalCellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LastVisitedNGRANCellInformation, cellType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LastVisitedNGRANCellInformation, timeUEStayedInCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeUEStayedInCell,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeUEStayedInCell"
		},
	{ ATF_POINTER, 3, offsetof(struct LastVisitedNGRANCellInformation, timeUEStayedInCellEnhancedGranularity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeUEStayedInCellEnhancedGranularity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeUEStayedInCellEnhancedGranularity"
		},
	{ ATF_POINTER, 2, offsetof(struct LastVisitedNGRANCellInformation, hOCauseValue),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hOCauseValue"
		},
	{ ATF_POINTER, 1, offsetof(struct LastVisitedNGRANCellInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_178P70,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_LastVisitedNGRANCellInformation_oms_1[] = { 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LastVisitedNGRANCellInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LastVisitedNGRANCellInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* globalCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeUEStayedInCell */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeUEStayedInCellEnhancedGranularity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* hOCauseValue */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_LastVisitedNGRANCellInformation_specs_1 = {
	sizeof(struct LastVisitedNGRANCellInformation),
	offsetof(struct LastVisitedNGRANCellInformation, _asn_ctx),
	asn_MAP_LastVisitedNGRANCellInformation_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LastVisitedNGRANCellInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LastVisitedNGRANCellInformation = {
	"LastVisitedNGRANCellInformation",
	"LastVisitedNGRANCellInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_LastVisitedNGRANCellInformation_tags_1,
	sizeof(asn_DEF_LastVisitedNGRANCellInformation_tags_1)
		/sizeof(asn_DEF_LastVisitedNGRANCellInformation_tags_1[0]), /* 1 */
	asn_DEF_LastVisitedNGRANCellInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_LastVisitedNGRANCellInformation_tags_1)
		/sizeof(asn_DEF_LastVisitedNGRANCellInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LastVisitedNGRANCellInformation_1,
	6,	/* Elements count */
	&asn_SPC_LastVisitedNGRANCellInformation_specs_1	/* Additional specs */
};

