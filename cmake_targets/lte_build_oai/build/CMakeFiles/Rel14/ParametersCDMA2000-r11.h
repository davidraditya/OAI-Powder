/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_ParametersCDMA2000_r11_H_
#define	_ParametersCDMA2000_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SystemTimeInfoCDMA2000.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include "PreRegistrationInfoHRPD.h"
#include <constr_SEQUENCE.h>
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ParametersCDMA2000_r11__systemTimeInfo_r11_PR {
	ParametersCDMA2000_r11__systemTimeInfo_r11_PR_NOTHING,	/* No components present */
	ParametersCDMA2000_r11__systemTimeInfo_r11_PR_explicitValue,
	ParametersCDMA2000_r11__systemTimeInfo_r11_PR_defaultValue
} ParametersCDMA2000_r11__systemTimeInfo_r11_PR;
typedef enum ParametersCDMA2000_r11__parameters1XRTT_r11__csfb_DualRxTxSupport_r11 {
	ParametersCDMA2000_r11__parameters1XRTT_r11__csfb_DualRxTxSupport_r11_true	= 0
} e_ParametersCDMA2000_r11__parameters1XRTT_r11__csfb_DualRxTxSupport_r11;

/* Forward declarations */
struct CellReselectionParametersCDMA2000_r11;
struct CSFB_RegistrationParam1XRTT;
struct CSFB_RegistrationParam1XRTT_v920;
struct AC_BarringConfig1XRTT_r9;

/* ParametersCDMA2000-r11 */
typedef struct ParametersCDMA2000_r11 {
	struct ParametersCDMA2000_r11__systemTimeInfo_r11 {
		ParametersCDMA2000_r11__systemTimeInfo_r11_PR present;
		union ParametersCDMA2000_r11__systemTimeInfo_r11_u {
			SystemTimeInfoCDMA2000_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *systemTimeInfo_r11;
	long	 searchWindowSize_r11;
	struct ParametersCDMA2000_r11__parametersHRPD_r11 {
		PreRegistrationInfoHRPD_t	 preRegistrationInfoHRPD_r11;
		struct CellReselectionParametersCDMA2000_r11	*cellReselectionParametersHRPD_r11	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *parametersHRPD_r11;
	struct ParametersCDMA2000_r11__parameters1XRTT_r11 {
		struct CSFB_RegistrationParam1XRTT	*csfb_RegistrationParam1XRTT_r11	/* OPTIONAL */;
		struct CSFB_RegistrationParam1XRTT_v920	*csfb_RegistrationParam1XRTT_Ext_r11	/* OPTIONAL */;
		BIT_STRING_t	*longCodeState1XRTT_r11	/* OPTIONAL */;
		struct CellReselectionParametersCDMA2000_r11	*cellReselectionParameters1XRTT_r11	/* OPTIONAL */;
		struct AC_BarringConfig1XRTT_r9	*ac_BarringConfig1XRTT_r11	/* OPTIONAL */;
		BOOLEAN_t	*csfb_SupportForDualRxUEs_r11	/* OPTIONAL */;
		long	*csfb_DualRxTxSupport_r11	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *parameters1XRTT_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ParametersCDMA2000_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csfb_DualRxTxSupport_r11_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ParametersCDMA2000_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellReselectionParametersCDMA2000-r11.h"
#include "CSFB-RegistrationParam1XRTT.h"
#include "CSFB-RegistrationParam1XRTT-v920.h"
#include "AC-BarringConfig1XRTT-r9.h"

#endif	/* _ParametersCDMA2000_r11_H_ */
#include <asn_internal.h>
