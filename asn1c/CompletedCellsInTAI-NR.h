/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CompletedCellsInTAI_NR_H_
#define	_CompletedCellsInTAI_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CompletedCellsInTAI_NR_Item;

/* CompletedCellsInTAI-NR */
typedef struct CompletedCellsInTAI_NR {
	A_SEQUENCE_OF(struct CompletedCellsInTAI_NR_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompletedCellsInTAI_NR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompletedCellsInTAI_NR;
extern asn_SET_OF_specifics_t asn_SPC_CompletedCellsInTAI_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_CompletedCellsInTAI_NR_1[1];
extern asn_per_constraints_t asn_PER_type_CompletedCellsInTAI_NR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CompletedCellsInTAI_NR_H_ */
#include <asn_internal.h>