/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "ServiceAreaInformation-Item.h"

#include "AllowedTACs.h"
#include "NotAllowedTACs.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ServiceAreaInformation_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServiceAreaInformation_Item, pLMNIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNIdentity"
		},
	{ ATF_POINTER, 3, offsetof(struct ServiceAreaInformation_Item, allowedTACs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedTACs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedTACs"
		},
	{ ATF_POINTER, 2, offsetof(struct ServiceAreaInformation_Item, notAllowedTACs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NotAllowedTACs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notAllowedTACs"
		},
	{ ATF_POINTER, 1, offsetof(struct ServiceAreaInformation_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_178P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ServiceAreaInformation_Item_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ServiceAreaInformation_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServiceAreaInformation_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedTACs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* notAllowedTACs */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ServiceAreaInformation_Item_specs_1 = {
	sizeof(struct ServiceAreaInformation_Item),
	offsetof(struct ServiceAreaInformation_Item, _asn_ctx),
	asn_MAP_ServiceAreaInformation_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ServiceAreaInformation_Item_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServiceAreaInformation_Item = {
	"ServiceAreaInformation-Item",
	"ServiceAreaInformation-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_ServiceAreaInformation_Item_tags_1,
	sizeof(asn_DEF_ServiceAreaInformation_Item_tags_1)
		/sizeof(asn_DEF_ServiceAreaInformation_Item_tags_1[0]), /* 1 */
	asn_DEF_ServiceAreaInformation_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServiceAreaInformation_Item_tags_1)
		/sizeof(asn_DEF_ServiceAreaInformation_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServiceAreaInformation_Item_1,
	4,	/* Elements count */
	&asn_SPC_ServiceAreaInformation_Item_specs_1	/* Additional specs */
};

