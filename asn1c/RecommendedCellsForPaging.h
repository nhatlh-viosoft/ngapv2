/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_RecommendedCellsForPaging_H_
#define	_RecommendedCellsForPaging_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecommendedCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* RecommendedCellsForPaging */
typedef struct RecommendedCellsForPaging {
	RecommendedCellList_t	 recommendedCellList;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RecommendedCellsForPaging_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecommendedCellsForPaging;
extern asn_SEQUENCE_specifics_t asn_SPC_RecommendedCellsForPaging_specs_1;
extern asn_TYPE_member_t asn_MBR_RecommendedCellsForPaging_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RecommendedCellsForPaging_H_ */
#include <asn_internal.h>