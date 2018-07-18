/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MAC_Parameters_NB_r14_H_
#define	_MAC_Parameters_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_Parameters_NB_r14__dataInactMon_r14 {
	MAC_Parameters_NB_r14__dataInactMon_r14_supported	= 0
} e_MAC_Parameters_NB_r14__dataInactMon_r14;
typedef enum MAC_Parameters_NB_r14__rai_Support_r14 {
	MAC_Parameters_NB_r14__rai_Support_r14_supported	= 0
} e_MAC_Parameters_NB_r14__rai_Support_r14;

/* MAC-Parameters-NB-r14 */
typedef struct MAC_Parameters_NB_r14 {
	long	*dataInactMon_r14	/* OPTIONAL */;
	long	*rai_Support_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_Parameters_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dataInactMon_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rai_Support_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_NB_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_Parameters_NB_r14_H_ */
#include <asn_internal.h>