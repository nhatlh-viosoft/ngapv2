/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-Containers.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#include "ProtocolIE-SingleContainer.h"

/*
 * This type is implemented using ProtocolIE_Field_133P0,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_130P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_130P0 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_130P0_tags_1,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_130P0_tags_1)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_130P0_tags_1[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_130P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_130P0_tags_1)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_130P0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ProtocolIE_Field_133P0_1,
	3,	/* Elements count */
	&asn_SPC_ProtocolIE_Field_133P0_specs_1	/* Additional specs */
};

