/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PhysCellIdListCDMA2000_v920_H_
#define	_PhysCellIdListCDMA2000_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdCDMA2000.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysCellIdListCDMA2000-v920 */
typedef struct PhysCellIdListCDMA2000_v920 {
	A_SEQUENCE_OF(PhysCellIdCDMA2000_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysCellIdListCDMA2000_v920_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysCellIdListCDMA2000_v920;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellIdListCDMA2000_v920_H_ */
#include <asn_internal.h>
