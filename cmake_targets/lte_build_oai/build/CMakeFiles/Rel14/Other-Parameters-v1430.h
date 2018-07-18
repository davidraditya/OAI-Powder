/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Other_Parameters_v1430_H_
#define	_Other_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Other_Parameters_v1430__bwPrefInd_r14 {
	Other_Parameters_v1430__bwPrefInd_r14_supported	= 0
} e_Other_Parameters_v1430__bwPrefInd_r14;
typedef enum Other_Parameters_v1430__rlm_ReportSupport_r14 {
	Other_Parameters_v1430__rlm_ReportSupport_r14_supported	= 0
} e_Other_Parameters_v1430__rlm_ReportSupport_r14;

/* Other-Parameters-v1430 */
typedef struct Other_Parameters_v1430 {
	long	*bwPrefInd_r14	/* OPTIONAL */;
	long	*rlm_ReportSupport_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Other_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_bwPrefInd_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rlm_ReportSupport_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Other_Parameters_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _Other_Parameters_v1430_H_ */
#include <asn_internal.h>