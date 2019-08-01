/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "UE-NGAP-IDs.h"

#include "UE-NGAP-ID-pair.h"
#include "ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_UE_NGAP_IDs_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UE_NGAP_IDs_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UE_NGAP_IDs_1[] = {
	{ ATF_POINTER, 0, offsetof(struct UE_NGAP_IDs, choice.uE_NGAP_ID_pair),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_NGAP_ID_pair,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uE-NGAP-ID-pair"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_NGAP_IDs, choice.aMF_UE_NGAP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AMF_UE_NGAP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aMF-UE-NGAP-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct UE_NGAP_IDs, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_130P21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UE_NGAP_IDs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uE-NGAP-ID-pair */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* aMF-UE-NGAP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_UE_NGAP_IDs_specs_1 = {
	sizeof(struct UE_NGAP_IDs),
	offsetof(struct UE_NGAP_IDs, _asn_ctx),
	offsetof(struct UE_NGAP_IDs, present),
	sizeof(((struct UE_NGAP_IDs *)0)->present),
	asn_MAP_UE_NGAP_IDs_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UE_NGAP_IDs = {
	"UE-NGAP-IDs",
	"UE-NGAP-IDs",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UE_NGAP_IDs_constr_1, &asn_PER_type_UE_NGAP_IDs_constr_1, CHOICE_constraint },
	asn_MBR_UE_NGAP_IDs_1,
	3,	/* Elements count */
	&asn_SPC_UE_NGAP_IDs_specs_1	/* Additional specs */
};

