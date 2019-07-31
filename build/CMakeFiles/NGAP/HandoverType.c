/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#include "HandoverType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_HandoverType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_HandoverType_value2enum_1[] = {
	{ 0,	8,	"intra5gs" },
	{ 1,	13,	"fivegs-to-eps" },
	{ 2,	10,	"eps-to-5gs" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_HandoverType_enum2value_1[] = {
	2,	/* eps-to-5gs(2) */
	1,	/* fivegs-to-eps(1) */
	0	/* intra5gs(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_HandoverType_specs_1 = {
	asn_MAP_HandoverType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_HandoverType_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_HandoverType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_HandoverType = {
	"HandoverType",
	"HandoverType",
	&asn_OP_NativeEnumerated,
	asn_DEF_HandoverType_tags_1,
	sizeof(asn_DEF_HandoverType_tags_1)
		/sizeof(asn_DEF_HandoverType_tags_1[0]), /* 1 */
	asn_DEF_HandoverType_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverType_tags_1)
		/sizeof(asn_DEF_HandoverType_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_HandoverType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_HandoverType_specs_1	/* Additional specs */
};

