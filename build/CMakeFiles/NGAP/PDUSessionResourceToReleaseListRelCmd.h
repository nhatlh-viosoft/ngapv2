/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_PDUSessionResourceToReleaseListRelCmd_H_
#define	_PDUSessionResourceToReleaseListRelCmd_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceToReleaseItemRelCmd;

/* PDUSessionResourceToReleaseListRelCmd */
typedef struct PDUSessionResourceToReleaseListRelCmd {
	A_SEQUENCE_OF(struct PDUSessionResourceToReleaseItemRelCmd) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceToReleaseListRelCmd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceToReleaseListRelCmd;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceToReleaseListRelCmd_H_ */
#include <asn_internal.h>
