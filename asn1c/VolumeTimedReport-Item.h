/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_VolumeTimedReport_Item_H_
#define	_VolumeTimedReport_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <INTEGER.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* VolumeTimedReport-Item */
typedef struct VolumeTimedReport_Item {
	OCTET_STRING_t	 startTimeStamp;
	OCTET_STRING_t	 endTimeStamp;
	INTEGER_t	 usageCountUL;
	INTEGER_t	 usageCountDL;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VolumeTimedReport_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VolumeTimedReport_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_VolumeTimedReport_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_VolumeTimedReport_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _VolumeTimedReport_Item_H_ */
#include <asn_internal.h>
