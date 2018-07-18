/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CE_Parameters_v1350_H_
#define	_CE_Parameters_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CE_Parameters_v1350__unicastFrequencyHopping_r13 {
	CE_Parameters_v1350__unicastFrequencyHopping_r13_supported	= 0
} e_CE_Parameters_v1350__unicastFrequencyHopping_r13;

/* CE-Parameters-v1350 */
typedef struct CE_Parameters_v1350 {
	long	*unicastFrequencyHopping_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CE_Parameters_v1350_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_unicastFrequencyHopping_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CE_Parameters_v1350;

#ifdef __cplusplus
}
#endif

#endif	/* _CE_Parameters_v1350_H_ */
#include <asn_internal.h>
