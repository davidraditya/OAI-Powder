/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CellsToAddModListUTRA_FDD_H_
#define	_CellsToAddModListUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellsToAddModUTRA_FDD;

/* CellsToAddModListUTRA-FDD */
typedef struct CellsToAddModListUTRA_FDD {
	A_SEQUENCE_OF(struct CellsToAddModUTRA_FDD) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddModListUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddModListUTRA_FDD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellsToAddModUTRA-FDD.h"

#endif	/* _CellsToAddModListUTRA_FDD_H_ */
#include <asn_internal.h>
