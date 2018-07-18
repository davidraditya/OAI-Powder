/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SL-Parameters-v1310.h"

static int
discSysInfoReporting_r13_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
discSysInfoReporting_r13_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
discSysInfoReporting_r13_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
discSysInfoReporting_r13_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
discSysInfoReporting_r13_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
discSysInfoReporting_r13_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
discSysInfoReporting_r13_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
discSysInfoReporting_r13_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
discSysInfoReporting_r13_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
discSysInfoReporting_r13_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
discSysInfoReporting_r13_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
discSysInfoReporting_r13_2_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td1);
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
discSysInfoReporting_r13_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	discSysInfoReporting_r13_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
commMultipleTx_r13_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
commMultipleTx_r13_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
commMultipleTx_r13_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
commMultipleTx_r13_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
commMultipleTx_r13_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
commMultipleTx_r13_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
commMultipleTx_r13_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
commMultipleTx_r13_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
commMultipleTx_r13_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
commMultipleTx_r13_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
commMultipleTx_r13_4_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
commMultipleTx_r13_4_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td1);
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
commMultipleTx_r13_4_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	commMultipleTx_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
discInterFreqTx_r13_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
discInterFreqTx_r13_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
discInterFreqTx_r13_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
discInterFreqTx_r13_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
discInterFreqTx_r13_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
discInterFreqTx_r13_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
discInterFreqTx_r13_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
discInterFreqTx_r13_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
discInterFreqTx_r13_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
discInterFreqTx_r13_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
discInterFreqTx_r13_6_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
discInterFreqTx_r13_6_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td1);
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
discInterFreqTx_r13_6_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	discInterFreqTx_r13_6_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
discPeriodicSLSS_r13_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
discPeriodicSLSS_r13_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
discPeriodicSLSS_r13_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
discPeriodicSLSS_r13_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
discPeriodicSLSS_r13_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
discPeriodicSLSS_r13_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
discPeriodicSLSS_r13_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
discPeriodicSLSS_r13_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
discPeriodicSLSS_r13_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
discPeriodicSLSS_r13_8_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
discPeriodicSLSS_r13_8_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td1);
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
discPeriodicSLSS_r13_8_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	discPeriodicSLSS_r13_8_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_discSysInfoReporting_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_commMultipleTx_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discInterFreqTx_r13_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discPeriodicSLSS_r13_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_discSysInfoReporting_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_discSysInfoReporting_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_discSysInfoReporting_r13_specs_2 = {
	asn_MAP_discSysInfoReporting_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_discSysInfoReporting_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_discSysInfoReporting_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discSysInfoReporting_r13_2 = {
	"discSysInfoReporting-r13",
	"discSysInfoReporting-r13",
	discSysInfoReporting_r13_2_free,
	discSysInfoReporting_r13_2_print,
	discSysInfoReporting_r13_2_constraint,
	discSysInfoReporting_r13_2_decode_ber,
	discSysInfoReporting_r13_2_encode_der,
	discSysInfoReporting_r13_2_decode_xer,
	discSysInfoReporting_r13_2_encode_xer,
	discSysInfoReporting_r13_2_decode_uper,
	discSysInfoReporting_r13_2_encode_uper,
	discSysInfoReporting_r13_2_decode_aper,
	discSysInfoReporting_r13_2_encode_aper,
	discSysInfoReporting_r13_2_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_discSysInfoReporting_r13_tags_2,
	sizeof(asn_DEF_discSysInfoReporting_r13_tags_2)
		/sizeof(asn_DEF_discSysInfoReporting_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_discSysInfoReporting_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_discSysInfoReporting_r13_tags_2)
		/sizeof(asn_DEF_discSysInfoReporting_r13_tags_2[0]), /* 2 */
	&asn_PER_type_discSysInfoReporting_r13_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discSysInfoReporting_r13_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_commMultipleTx_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_commMultipleTx_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_commMultipleTx_r13_specs_4 = {
	asn_MAP_commMultipleTx_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_commMultipleTx_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_commMultipleTx_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commMultipleTx_r13_4 = {
	"commMultipleTx-r13",
	"commMultipleTx-r13",
	commMultipleTx_r13_4_free,
	commMultipleTx_r13_4_print,
	commMultipleTx_r13_4_constraint,
	commMultipleTx_r13_4_decode_ber,
	commMultipleTx_r13_4_encode_der,
	commMultipleTx_r13_4_decode_xer,
	commMultipleTx_r13_4_encode_xer,
	commMultipleTx_r13_4_decode_uper,
	commMultipleTx_r13_4_encode_uper,
	commMultipleTx_r13_4_decode_aper,
	commMultipleTx_r13_4_encode_aper,
	commMultipleTx_r13_4_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_commMultipleTx_r13_tags_4,
	sizeof(asn_DEF_commMultipleTx_r13_tags_4)
		/sizeof(asn_DEF_commMultipleTx_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_commMultipleTx_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_commMultipleTx_r13_tags_4)
		/sizeof(asn_DEF_commMultipleTx_r13_tags_4[0]), /* 2 */
	&asn_PER_type_commMultipleTx_r13_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_commMultipleTx_r13_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_discInterFreqTx_r13_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_discInterFreqTx_r13_enum2value_6[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_discInterFreqTx_r13_specs_6 = {
	asn_MAP_discInterFreqTx_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_discInterFreqTx_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_discInterFreqTx_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discInterFreqTx_r13_6 = {
	"discInterFreqTx-r13",
	"discInterFreqTx-r13",
	discInterFreqTx_r13_6_free,
	discInterFreqTx_r13_6_print,
	discInterFreqTx_r13_6_constraint,
	discInterFreqTx_r13_6_decode_ber,
	discInterFreqTx_r13_6_encode_der,
	discInterFreqTx_r13_6_decode_xer,
	discInterFreqTx_r13_6_encode_xer,
	discInterFreqTx_r13_6_decode_uper,
	discInterFreqTx_r13_6_encode_uper,
	discInterFreqTx_r13_6_decode_aper,
	discInterFreqTx_r13_6_encode_aper,
	discInterFreqTx_r13_6_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_discInterFreqTx_r13_tags_6,
	sizeof(asn_DEF_discInterFreqTx_r13_tags_6)
		/sizeof(asn_DEF_discInterFreqTx_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_discInterFreqTx_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_discInterFreqTx_r13_tags_6)
		/sizeof(asn_DEF_discInterFreqTx_r13_tags_6[0]), /* 2 */
	&asn_PER_type_discInterFreqTx_r13_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discInterFreqTx_r13_specs_6	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_discPeriodicSLSS_r13_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_discPeriodicSLSS_r13_enum2value_8[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_discPeriodicSLSS_r13_specs_8 = {
	asn_MAP_discPeriodicSLSS_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_discPeriodicSLSS_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_discPeriodicSLSS_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discPeriodicSLSS_r13_8 = {
	"discPeriodicSLSS-r13",
	"discPeriodicSLSS-r13",
	discPeriodicSLSS_r13_8_free,
	discPeriodicSLSS_r13_8_print,
	discPeriodicSLSS_r13_8_constraint,
	discPeriodicSLSS_r13_8_decode_ber,
	discPeriodicSLSS_r13_8_encode_der,
	discPeriodicSLSS_r13_8_decode_xer,
	discPeriodicSLSS_r13_8_encode_xer,
	discPeriodicSLSS_r13_8_decode_uper,
	discPeriodicSLSS_r13_8_encode_uper,
	discPeriodicSLSS_r13_8_decode_aper,
	discPeriodicSLSS_r13_8_encode_aper,
	discPeriodicSLSS_r13_8_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_discPeriodicSLSS_r13_tags_8,
	sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8)
		/sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_discPeriodicSLSS_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8)
		/sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8[0]), /* 2 */
	&asn_PER_type_discPeriodicSLSS_r13_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discPeriodicSLSS_r13_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SL_Parameters_v1310_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SL_Parameters_v1310, discSysInfoReporting_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discSysInfoReporting_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"discSysInfoReporting-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_Parameters_v1310, commMultipleTx_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_commMultipleTx_r13_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commMultipleTx-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_Parameters_v1310, discInterFreqTx_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discInterFreqTx_r13_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"discInterFreqTx-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_Parameters_v1310, discPeriodicSLSS_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discPeriodicSLSS_r13_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"discPeriodicSLSS-r13"
		},
};
static int asn_MAP_SL_Parameters_v1310_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_SL_Parameters_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SL_Parameters_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discSysInfoReporting-r13 at 9718 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commMultipleTx-r13 at 9719 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* discInterFreqTx-r13 at 9720 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* discPeriodicSLSS-r13 at 9721 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_Parameters_v1310_specs_1 = {
	sizeof(struct SL_Parameters_v1310),
	offsetof(struct SL_Parameters_v1310, _asn_ctx),
	asn_MAP_SL_Parameters_v1310_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SL_Parameters_v1310_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SL_Parameters_v1310 = {
	"SL-Parameters-v1310",
	"SL-Parameters-v1310",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SL_Parameters_v1310_tags_1,
	sizeof(asn_DEF_SL_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1310_tags_1[0]), /* 1 */
	asn_DEF_SL_Parameters_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1310_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SL_Parameters_v1310_1,
	4,	/* Elements count */
	&asn_SPC_SL_Parameters_v1310_specs_1	/* Additional specs */
};

