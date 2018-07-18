/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MBMS_CarrierType_r14_H_
#define	_MBMS_CarrierType_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_CarrierType_r14__carrierType_r14 {
	MBMS_CarrierType_r14__carrierType_r14_mbms	= 0,
	MBMS_CarrierType_r14__carrierType_r14_fembmsMixed	= 1,
	MBMS_CarrierType_r14__carrierType_r14_fembmsDedicated	= 2
} e_MBMS_CarrierType_r14__carrierType_r14;

/* MBMS-CarrierType-r14 */
typedef struct MBMS_CarrierType_r14 {
	long	 carrierType_r14;
	long	*frameOffset_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_CarrierType_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_carrierType_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_CarrierType_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_CarrierType_r14_H_ */
#include <asn_internal.h>
