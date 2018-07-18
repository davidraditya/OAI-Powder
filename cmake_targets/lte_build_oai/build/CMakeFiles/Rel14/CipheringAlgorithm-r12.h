/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CipheringAlgorithm_r12_H_
#define	_CipheringAlgorithm_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CipheringAlgorithm_r12 {
	CipheringAlgorithm_r12_eea0	= 0,
	CipheringAlgorithm_r12_eea1	= 1,
	CipheringAlgorithm_r12_eea2	= 2,
	CipheringAlgorithm_r12_eea3_v1130	= 3,
	CipheringAlgorithm_r12_spare4	= 4,
	CipheringAlgorithm_r12_spare3	= 5,
	CipheringAlgorithm_r12_spare2	= 6,
	CipheringAlgorithm_r12_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_CipheringAlgorithm_r12;

/* CipheringAlgorithm-r12 */
typedef long	 CipheringAlgorithm_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CipheringAlgorithm_r12;
asn_struct_free_f CipheringAlgorithm_r12_free;
asn_struct_print_f CipheringAlgorithm_r12_print;
asn_constr_check_f CipheringAlgorithm_r12_constraint;
ber_type_decoder_f CipheringAlgorithm_r12_decode_ber;
der_type_encoder_f CipheringAlgorithm_r12_encode_der;
xer_type_decoder_f CipheringAlgorithm_r12_decode_xer;
xer_type_encoder_f CipheringAlgorithm_r12_encode_xer;
per_type_decoder_f CipheringAlgorithm_r12_decode_uper;
per_type_encoder_f CipheringAlgorithm_r12_encode_uper;
per_type_decoder_f CipheringAlgorithm_r12_decode_aper;
per_type_encoder_f CipheringAlgorithm_r12_encode_aper;
type_compare_f     CipheringAlgorithm_r12_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _CipheringAlgorithm_r12_H_ */
#include <asn_internal.h>
