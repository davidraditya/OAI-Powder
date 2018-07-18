/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LogicalChannelConfig_H_
#define	_LogicalChannelConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate {
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps0	= 0,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps8	= 1,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps16	= 2,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps32	= 3,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps64	= 4,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps128	= 5,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps256	= 6,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_infinity	= 7,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps512_v1020	= 8,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps1024_v1020	= 9,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps2048_v1020	= 10,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare5	= 11,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare4	= 12,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare3	= 13,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare2	= 14,
	LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare1	= 15
} e_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate;
typedef enum LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration {
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms50	= 0,
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms100	= 1,
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms150	= 2,
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms300	= 3,
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms500	= 4,
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms1000	= 5,
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare2	= 6,
	LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare1	= 7
} e_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration;
typedef enum LogicalChannelConfig__ext1__logicalChannelSR_Mask_r9 {
	LogicalChannelConfig__ext1__logicalChannelSR_Mask_r9_setup	= 0
} e_LogicalChannelConfig__ext1__logicalChannelSR_Mask_r9;
typedef enum LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14 {
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s0	= 0,
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s0dot4	= 1,
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s0dot8	= 2,
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s1dot6	= 3,
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s3	= 4,
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s6	= 5,
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s12	= 6,
	LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s30	= 7
} e_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14;

/* LogicalChannelConfig */
typedef struct LogicalChannelConfig {
	struct LogicalChannelConfig__ul_SpecificParameters {
		long	 priority;
		long	 prioritisedBitRate;
		long	 bucketSizeDuration;
		long	*logicalChannelGroup	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_SpecificParameters;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LogicalChannelConfig__ext1 {
		long	*logicalChannelSR_Mask_r9	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LogicalChannelConfig__ext2 {
		BOOLEAN_t	*logicalChannelSR_Prohibit_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LogicalChannelConfig__ext3 {
		BOOLEAN_t	*laa_UL_Allowed_r14	/* OPTIONAL */;
		long	*bitRateQueryProhibitTimer_r14	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogicalChannelConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_prioritisedBitRate_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bucketSizeDuration_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_Mask_r9_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bitRateQueryProhibitTimer_r14_39;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LogicalChannelConfig;

#ifdef __cplusplus
}
#endif

#endif	/* _LogicalChannelConfig_H_ */
#include <asn_internal.h>
