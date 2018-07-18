/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "TDD-PUSCH-UpPTS-r14.h"

static int
symPUSCH_UpPTS_r14_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
symPUSCH_UpPTS_r14_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
symPUSCH_UpPTS_r14_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
symPUSCH_UpPTS_r14_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
symPUSCH_UpPTS_r14_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
symPUSCH_UpPTS_r14_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
symPUSCH_UpPTS_r14_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
symPUSCH_UpPTS_r14_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
symPUSCH_UpPTS_r14_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
symPUSCH_UpPTS_r14_4_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
symPUSCH_UpPTS_r14_4_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td1);
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
symPUSCH_UpPTS_r14_4_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	symPUSCH_UpPTS_r14_4_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
dmrs_LessUpPTS_Config_r14_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dmrs_LessUpPTS_Config_r14_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dmrs_LessUpPTS_Config_r14_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dmrs_LessUpPTS_Config_r14_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dmrs_LessUpPTS_Config_r14_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dmrs_LessUpPTS_Config_r14_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dmrs_LessUpPTS_Config_r14_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dmrs_LessUpPTS_Config_r14_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dmrs_LessUpPTS_Config_r14_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
dmrs_LessUpPTS_Config_r14_11_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
dmrs_LessUpPTS_Config_r14_11_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td1);
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
dmrs_LessUpPTS_Config_r14_11_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dmrs_LessUpPTS_Config_r14_11_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_symPUSCH_UpPTS_r14_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dmrs_LessUpPTS_Config_r14_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_TDD_PUSCH_UpPTS_r14_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_symPUSCH_UpPTS_r14_value2enum_4[] = {
	{ 0,	4,	"sym1" },
	{ 1,	4,	"sym2" },
	{ 2,	4,	"sym3" },
	{ 3,	4,	"sym4" },
	{ 4,	4,	"sym5" },
	{ 5,	4,	"sym6" }
};
static unsigned int asn_MAP_symPUSCH_UpPTS_r14_enum2value_4[] = {
	0,	/* sym1(0) */
	1,	/* sym2(1) */
	2,	/* sym3(2) */
	3,	/* sym4(3) */
	4,	/* sym5(4) */
	5	/* sym6(5) */
};
static asn_INTEGER_specifics_t asn_SPC_symPUSCH_UpPTS_r14_specs_4 = {
	asn_MAP_symPUSCH_UpPTS_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_symPUSCH_UpPTS_r14_enum2value_4,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_symPUSCH_UpPTS_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_symPUSCH_UpPTS_r14_4 = {
	"symPUSCH-UpPTS-r14",
	"symPUSCH-UpPTS-r14",
	symPUSCH_UpPTS_r14_4_free,
	symPUSCH_UpPTS_r14_4_print,
	symPUSCH_UpPTS_r14_4_constraint,
	symPUSCH_UpPTS_r14_4_decode_ber,
	symPUSCH_UpPTS_r14_4_encode_der,
	symPUSCH_UpPTS_r14_4_decode_xer,
	symPUSCH_UpPTS_r14_4_encode_xer,
	symPUSCH_UpPTS_r14_4_decode_uper,
	symPUSCH_UpPTS_r14_4_encode_uper,
	symPUSCH_UpPTS_r14_4_decode_aper,
	symPUSCH_UpPTS_r14_4_encode_aper,
	symPUSCH_UpPTS_r14_4_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_symPUSCH_UpPTS_r14_tags_4,
	sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4)
		/sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_symPUSCH_UpPTS_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4)
		/sizeof(asn_DEF_symPUSCH_UpPTS_r14_tags_4[0]), /* 2 */
	&asn_PER_type_symPUSCH_UpPTS_r14_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_symPUSCH_UpPTS_r14_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_dmrs_LessUpPTS_Config_r14_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_dmrs_LessUpPTS_Config_r14_enum2value_11[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_dmrs_LessUpPTS_Config_r14_specs_11 = {
	asn_MAP_dmrs_LessUpPTS_Config_r14_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_dmrs_LessUpPTS_Config_r14_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dmrs_LessUpPTS_Config_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_LessUpPTS_Config_r14_11 = {
	"dmrs-LessUpPTS-Config-r14",
	"dmrs-LessUpPTS-Config-r14",
	dmrs_LessUpPTS_Config_r14_11_free,
	dmrs_LessUpPTS_Config_r14_11_print,
	dmrs_LessUpPTS_Config_r14_11_constraint,
	dmrs_LessUpPTS_Config_r14_11_decode_ber,
	dmrs_LessUpPTS_Config_r14_11_encode_der,
	dmrs_LessUpPTS_Config_r14_11_decode_xer,
	dmrs_LessUpPTS_Config_r14_11_encode_xer,
	dmrs_LessUpPTS_Config_r14_11_decode_uper,
	dmrs_LessUpPTS_Config_r14_11_encode_uper,
	dmrs_LessUpPTS_Config_r14_11_decode_aper,
	dmrs_LessUpPTS_Config_r14_11_encode_aper,
	dmrs_LessUpPTS_Config_r14_11_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dmrs_LessUpPTS_Config_r14_tags_11,
	sizeof(asn_DEF_dmrs_LessUpPTS_Config_r14_tags_11)
		/sizeof(asn_DEF_dmrs_LessUpPTS_Config_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_dmrs_LessUpPTS_Config_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_dmrs_LessUpPTS_Config_r14_tags_11)
		/sizeof(asn_DEF_dmrs_LessUpPTS_Config_r14_tags_11[0]), /* 2 */
	&asn_PER_type_dmrs_LessUpPTS_Config_r14_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dmrs_LessUpPTS_Config_r14_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct TDD_PUSCH_UpPTS_r14__setup, symPUSCH_UpPTS_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_symPUSCH_UpPTS_r14_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"symPUSCH-UpPTS-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct TDD_PUSCH_UpPTS_r14__setup, dmrs_LessUpPTS_Config_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dmrs_LessUpPTS_Config_r14_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dmrs-LessUpPTS-Config-r14"
		},
};
static int asn_MAP_setup_oms_3[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* symPUSCH-UpPTS-r14 at 5548 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dmrs-LessUpPTS-Config-r14 at 5549 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct TDD_PUSCH_UpPTS_r14__setup),
	offsetof(struct TDD_PUSCH_UpPTS_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TDD_PUSCH_UpPTS_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_PUSCH_UpPTS_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_PUSCH_UpPTS_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_TDD_PUSCH_UpPTS_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 5546 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 5548 */
};
static asn_CHOICE_specifics_t asn_SPC_TDD_PUSCH_UpPTS_r14_specs_1 = {
	sizeof(struct TDD_PUSCH_UpPTS_r14),
	offsetof(struct TDD_PUSCH_UpPTS_r14, _asn_ctx),
	offsetof(struct TDD_PUSCH_UpPTS_r14, present),
	sizeof(((struct TDD_PUSCH_UpPTS_r14 *)0)->present),
	asn_MAP_TDD_PUSCH_UpPTS_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TDD_PUSCH_UpPTS_r14 = {
	"TDD-PUSCH-UpPTS-r14",
	"TDD-PUSCH-UpPTS-r14",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_TDD_PUSCH_UpPTS_r14_constr_1,
	asn_MBR_TDD_PUSCH_UpPTS_r14_1,
	2,	/* Elements count */
	&asn_SPC_TDD_PUSCH_UpPTS_r14_specs_1	/* Additional specs */
};

