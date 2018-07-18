/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_ReportIntervalMDT_H_
#define	_S1ap_ReportIntervalMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_ReportIntervalMDT {
	S1ap_ReportIntervalMDT_ms120	= 0,
	S1ap_ReportIntervalMDT_ms240	= 1,
	S1ap_ReportIntervalMDT_ms480	= 2,
	S1ap_ReportIntervalMDT_ms640	= 3,
	S1ap_ReportIntervalMDT_ms1024	= 4,
	S1ap_ReportIntervalMDT_ms2048	= 5,
	S1ap_ReportIntervalMDT_ms5120	= 6,
	S1ap_ReportIntervalMDT_ms10240	= 7,
	S1ap_ReportIntervalMDT_min1	= 8,
	S1ap_ReportIntervalMDT_min6	= 9,
	S1ap_ReportIntervalMDT_min12	= 10,
	S1ap_ReportIntervalMDT_min30	= 11,
	S1ap_ReportIntervalMDT_min60	= 12
} e_S1ap_ReportIntervalMDT;

/* S1ap-ReportIntervalMDT */
typedef long	 S1ap_ReportIntervalMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_ReportIntervalMDT;
asn_struct_free_f S1ap_ReportIntervalMDT_free;
asn_struct_print_f S1ap_ReportIntervalMDT_print;
asn_constr_check_f S1ap_ReportIntervalMDT_constraint;
ber_type_decoder_f S1ap_ReportIntervalMDT_decode_ber;
der_type_encoder_f S1ap_ReportIntervalMDT_encode_der;
xer_type_decoder_f S1ap_ReportIntervalMDT_decode_xer;
xer_type_encoder_f S1ap_ReportIntervalMDT_encode_xer;
per_type_decoder_f S1ap_ReportIntervalMDT_decode_uper;
per_type_encoder_f S1ap_ReportIntervalMDT_encode_uper;
per_type_decoder_f S1ap_ReportIntervalMDT_decode_aper;
per_type_encoder_f S1ap_ReportIntervalMDT_encode_aper;
type_compare_f     S1ap_ReportIntervalMDT_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_ReportIntervalMDT_H_ */
#include <asn_internal.h>
