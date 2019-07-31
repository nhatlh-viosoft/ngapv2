/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_CompletedCellsInEAI_EUTRA_Item_H_
#define	_CompletedCellsInEAI_EUTRA_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-CGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* CompletedCellsInEAI-EUTRA-Item */
typedef struct CompletedCellsInEAI_EUTRA_Item {
	EUTRA_CGI_t	 eUTRA_CGI;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompletedCellsInEAI_EUTRA_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompletedCellsInEAI_EUTRA_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_CompletedCellsInEAI_EUTRA_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_CompletedCellsInEAI_EUTRA_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CompletedCellsInEAI_EUTRA_Item_H_ */
#include <asn_internal.h>
