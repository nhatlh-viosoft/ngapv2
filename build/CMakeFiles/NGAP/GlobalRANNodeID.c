/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#include "GlobalRANNodeID.h"

asn_per_constraints_t asn_PER_type_GlobalRANNodeID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GlobalRANNodeID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalRANNodeID, choice.globalGNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalGNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalGNB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalRANNodeID, choice.globalNgENB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalNgENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalNgENB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalRANNodeID, choice.globalN3IWF_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalN3IWF_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalN3IWF-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalRANNodeID, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_130P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GlobalRANNodeID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* globalGNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* globalNgENB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* globalN3IWF-ID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_GlobalRANNodeID_specs_1 = {
	sizeof(struct GlobalRANNodeID),
	offsetof(struct GlobalRANNodeID, _asn_ctx),
	offsetof(struct GlobalRANNodeID, present),
	sizeof(((struct GlobalRANNodeID *)0)->present),
	asn_MAP_GlobalRANNodeID_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GlobalRANNodeID = {
	"GlobalRANNodeID",
	"GlobalRANNodeID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_GlobalRANNodeID_constr_1, CHOICE_constraint },
	asn_MBR_GlobalRANNodeID_1,
	4,	/* Elements count */
	&asn_SPC_GlobalRANNodeID_specs_1	/* Additional specs */
};

