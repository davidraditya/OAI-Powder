/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_SpecialSubframePatterns_H_
#define	_X2ap_SpecialSubframePatterns_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_SpecialSubframePatterns {
	X2ap_SpecialSubframePatterns_ssp0	= 0,
	X2ap_SpecialSubframePatterns_ssp1	= 1,
	X2ap_SpecialSubframePatterns_ssp2	= 2,
	X2ap_SpecialSubframePatterns_ssp3	= 3,
	X2ap_SpecialSubframePatterns_ssp4	= 4,
	X2ap_SpecialSubframePatterns_ssp5	= 5,
	X2ap_SpecialSubframePatterns_ssp6	= 6,
	X2ap_SpecialSubframePatterns_ssp7	= 7,
	X2ap_SpecialSubframePatterns_ssp8	= 8,
	/*
	 * Enumeration is extensible
	 */
	X2ap_SpecialSubframePatterns_ssp9	= 9
} e_X2ap_SpecialSubframePatterns;

/* X2ap-SpecialSubframePatterns */
typedef long	 X2ap_SpecialSubframePatterns_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_SpecialSubframePatterns;
asn_struct_free_f X2ap_SpecialSubframePatterns_free;
asn_struct_print_f X2ap_SpecialSubframePatterns_print;
asn_constr_check_f X2ap_SpecialSubframePatterns_constraint;
ber_type_decoder_f X2ap_SpecialSubframePatterns_decode_ber;
der_type_encoder_f X2ap_SpecialSubframePatterns_encode_der;
xer_type_decoder_f X2ap_SpecialSubframePatterns_decode_xer;
xer_type_encoder_f X2ap_SpecialSubframePatterns_encode_xer;
per_type_decoder_f X2ap_SpecialSubframePatterns_decode_uper;
per_type_encoder_f X2ap_SpecialSubframePatterns_encode_uper;
per_type_decoder_f X2ap_SpecialSubframePatterns_decode_aper;
per_type_encoder_f X2ap_SpecialSubframePatterns_encode_aper;
type_compare_f     X2ap_SpecialSubframePatterns_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_SpecialSubframePatterns_H_ */
#include <asn_internal.h>
