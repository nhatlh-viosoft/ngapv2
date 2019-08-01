/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_UEPagingIdentity_H_
#define	_UEPagingIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEPagingIdentity_PR {
	UEPagingIdentity_PR_NOTHING,	/* No components present */
	UEPagingIdentity_PR_fiveG_S_TMSI,
	UEPagingIdentity_PR_choice_Extensions
} UEPagingIdentity_PR;

/* Forward declarations */
struct FiveG_S_TMSI;
struct ProtocolIE_SingleContainer;

/* UEPagingIdentity */
typedef struct UEPagingIdentity {
	UEPagingIdentity_PR present;
	union UEPagingIdentity_u {
		struct FiveG_S_TMSI	*fiveG_S_TMSI;
		struct ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPagingIdentity;
extern asn_CHOICE_specifics_t asn_SPC_UEPagingIdentity_specs_1;
extern asn_TYPE_member_t asn_MBR_UEPagingIdentity_1[2];
extern asn_per_constraints_t asn_PER_type_UEPagingIdentity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UEPagingIdentity_H_ */
#include <asn_internal.h>
