/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_SerialNumber_H_
#define	_S1ap_SerialNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap-SerialNumber */
typedef BIT_STRING_t	 S1ap_SerialNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_SerialNumber;
asn_struct_free_f S1ap_SerialNumber_free;
asn_struct_print_f S1ap_SerialNumber_print;
asn_constr_check_f S1ap_SerialNumber_constraint;
ber_type_decoder_f S1ap_SerialNumber_decode_ber;
der_type_encoder_f S1ap_SerialNumber_encode_der;
xer_type_decoder_f S1ap_SerialNumber_decode_xer;
xer_type_encoder_f S1ap_SerialNumber_encode_xer;
per_type_decoder_f S1ap_SerialNumber_decode_uper;
per_type_encoder_f S1ap_SerialNumber_encode_uper;
per_type_decoder_f S1ap_SerialNumber_decode_aper;
per_type_encoder_f S1ap_SerialNumber_encode_aper;
type_compare_f     S1ap_SerialNumber_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_SerialNumber_H_ */
#include <asn_internal.h>
