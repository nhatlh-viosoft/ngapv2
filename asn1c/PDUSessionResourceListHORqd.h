/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDUSessionResourceListHORqd_H_
#define	_PDUSessionResourceListHORqd_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceItemHORqd;

/* PDUSessionResourceListHORqd */
typedef struct PDUSessionResourceListHORqd {
	A_SEQUENCE_OF(struct PDUSessionResourceItemHORqd) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceListHORqd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceListHORqd;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceListHORqd_H_ */
#include <asn_internal.h>
