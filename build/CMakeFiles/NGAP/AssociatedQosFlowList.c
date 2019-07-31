/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#include "AssociatedQosFlowList.h"

#include "AssociatedQosFlowItem.h"
asn_per_constraints_t asn_PER_type_AssociatedQosFlowList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AssociatedQosFlowList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AssociatedQosFlowItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_AssociatedQosFlowList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_AssociatedQosFlowList_specs_1 = {
	sizeof(struct AssociatedQosFlowList),
	offsetof(struct AssociatedQosFlowList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_AssociatedQosFlowList = {
	"AssociatedQosFlowList",
	"AssociatedQosFlowList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_AssociatedQosFlowList_tags_1,
	sizeof(asn_DEF_AssociatedQosFlowList_tags_1)
		/sizeof(asn_DEF_AssociatedQosFlowList_tags_1[0]), /* 1 */
	asn_DEF_AssociatedQosFlowList_tags_1,	/* Same as above */
	sizeof(asn_DEF_AssociatedQosFlowList_tags_1)
		/sizeof(asn_DEF_AssociatedQosFlowList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_AssociatedQosFlowList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_AssociatedQosFlowList_1,
	1,	/* Single element */
	&asn_SPC_AssociatedQosFlowList_specs_1	/* Additional specs */
};

