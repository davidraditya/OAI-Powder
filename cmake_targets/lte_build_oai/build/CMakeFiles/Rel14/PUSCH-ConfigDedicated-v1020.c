/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "PUSCH-ConfigDedicated-v1020.h"

static int
memb_betaOffset_ACK_Index_MC_r10_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_betaOffset_RI_Index_MC_r10_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_betaOffset_CQI_Index_MC_r10_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
groupHoppingDisabled_r10_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
groupHoppingDisabled_r10_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
groupHoppingDisabled_r10_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
groupHoppingDisabled_r10_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
groupHoppingDisabled_r10_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
groupHoppingDisabled_r10_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
groupHoppingDisabled_r10_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
groupHoppingDisabled_r10_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
groupHoppingDisabled_r10_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
groupHoppingDisabled_r10_6_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
groupHoppingDisabled_r10_6_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td1);
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
groupHoppingDisabled_r10_6_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	groupHoppingDisabled_r10_6_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
dmrs_WithOCC_Activated_r10_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dmrs_WithOCC_Activated_r10_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dmrs_WithOCC_Activated_r10_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dmrs_WithOCC_Activated_r10_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dmrs_WithOCC_Activated_r10_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dmrs_WithOCC_Activated_r10_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dmrs_WithOCC_Activated_r10_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dmrs_WithOCC_Activated_r10_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dmrs_WithOCC_Activated_r10_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
dmrs_WithOCC_Activated_r10_8_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
dmrs_WithOCC_Activated_r10_8_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td1);
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
dmrs_WithOCC_Activated_r10_8_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dmrs_WithOCC_Activated_r10_8_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_memb_betaOffset_ACK_Index_MC_r10_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaOffset_RI_Index_MC_r10_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaOffset_CQI_Index_MC_r10_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_groupHoppingDisabled_r10_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dmrs_WithOCC_Activated_r10_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_betaOffsetMC_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, betaOffset_ACK_Index_MC_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_betaOffset_ACK_Index_MC_r10_constraint_2,
		&asn_PER_memb_betaOffset_ACK_Index_MC_r10_constr_3,
		0,
		"betaOffset-ACK-Index-MC-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, betaOffset_RI_Index_MC_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_betaOffset_RI_Index_MC_r10_constraint_2,
		&asn_PER_memb_betaOffset_RI_Index_MC_r10_constr_4,
		0,
		"betaOffset-RI-Index-MC-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, betaOffset_CQI_Index_MC_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_betaOffset_CQI_Index_MC_r10_constraint_2,
		&asn_PER_memb_betaOffset_CQI_Index_MC_r10_constr_5,
		0,
		"betaOffset-CQI-Index-MC-r10"
		},
};
static ber_tlv_tag_t asn_DEF_betaOffsetMC_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_betaOffsetMC_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffset-ACK-Index-MC-r10 at 5457 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* betaOffset-RI-Index-MC-r10 at 5458 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* betaOffset-CQI-Index-MC-r10 at 5459 */
};
static asn_SEQUENCE_specifics_t asn_SPC_betaOffsetMC_r10_specs_2 = {
	sizeof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10),
	offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, _asn_ctx),
	asn_MAP_betaOffsetMC_r10_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_betaOffsetMC_r10_2 = {
	"betaOffsetMC-r10",
	"betaOffsetMC-r10",
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
	asn_DEF_betaOffsetMC_r10_tags_2,
	sizeof(asn_DEF_betaOffsetMC_r10_tags_2)
		/sizeof(asn_DEF_betaOffsetMC_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_betaOffsetMC_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_betaOffsetMC_r10_tags_2)
		/sizeof(asn_DEF_betaOffsetMC_r10_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_betaOffsetMC_r10_2,
	3,	/* Elements count */
	&asn_SPC_betaOffsetMC_r10_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_groupHoppingDisabled_r10_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_groupHoppingDisabled_r10_enum2value_6[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_groupHoppingDisabled_r10_specs_6 = {
	asn_MAP_groupHoppingDisabled_r10_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_groupHoppingDisabled_r10_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_groupHoppingDisabled_r10_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupHoppingDisabled_r10_6 = {
	"groupHoppingDisabled-r10",
	"groupHoppingDisabled-r10",
	groupHoppingDisabled_r10_6_free,
	groupHoppingDisabled_r10_6_print,
	groupHoppingDisabled_r10_6_constraint,
	groupHoppingDisabled_r10_6_decode_ber,
	groupHoppingDisabled_r10_6_encode_der,
	groupHoppingDisabled_r10_6_decode_xer,
	groupHoppingDisabled_r10_6_encode_xer,
	groupHoppingDisabled_r10_6_decode_uper,
	groupHoppingDisabled_r10_6_encode_uper,
	groupHoppingDisabled_r10_6_decode_aper,
	groupHoppingDisabled_r10_6_encode_aper,
	groupHoppingDisabled_r10_6_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_groupHoppingDisabled_r10_tags_6,
	sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6)
		/sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6[0]) - 1, /* 1 */
	asn_DEF_groupHoppingDisabled_r10_tags_6,	/* Same as above */
	sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6)
		/sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6[0]), /* 2 */
	&asn_PER_type_groupHoppingDisabled_r10_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_groupHoppingDisabled_r10_specs_6	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_dmrs_WithOCC_Activated_r10_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_dmrs_WithOCC_Activated_r10_enum2value_8[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_dmrs_WithOCC_Activated_r10_specs_8 = {
	asn_MAP_dmrs_WithOCC_Activated_r10_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_dmrs_WithOCC_Activated_r10_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dmrs_WithOCC_Activated_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_WithOCC_Activated_r10_8 = {
	"dmrs-WithOCC-Activated-r10",
	"dmrs-WithOCC-Activated-r10",
	dmrs_WithOCC_Activated_r10_8_free,
	dmrs_WithOCC_Activated_r10_8_print,
	dmrs_WithOCC_Activated_r10_8_constraint,
	dmrs_WithOCC_Activated_r10_8_decode_ber,
	dmrs_WithOCC_Activated_r10_8_encode_der,
	dmrs_WithOCC_Activated_r10_8_decode_xer,
	dmrs_WithOCC_Activated_r10_8_encode_xer,
	dmrs_WithOCC_Activated_r10_8_decode_uper,
	dmrs_WithOCC_Activated_r10_8_encode_uper,
	dmrs_WithOCC_Activated_r10_8_decode_aper,
	dmrs_WithOCC_Activated_r10_8_encode_aper,
	dmrs_WithOCC_Activated_r10_8_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dmrs_WithOCC_Activated_r10_tags_8,
	sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8)
		/sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_dmrs_WithOCC_Activated_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8)
		/sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8[0]), /* 2 */
	&asn_PER_type_dmrs_WithOCC_Activated_r10_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dmrs_WithOCC_Activated_r10_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1020_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PUSCH_ConfigDedicated_v1020, betaOffsetMC_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_betaOffsetMC_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"betaOffsetMC-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PUSCH_ConfigDedicated_v1020, groupHoppingDisabled_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_groupHoppingDisabled_r10_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"groupHoppingDisabled-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_ConfigDedicated_v1020, dmrs_WithOCC_Activated_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dmrs_WithOCC_Activated_r10_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dmrs-WithOCC-Activated-r10"
		},
};
static int asn_MAP_PUSCH_ConfigDedicated_v1020_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PUSCH_ConfigDedicated_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffsetMC-r10 at 5457 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* groupHoppingDisabled-r10 at 5461 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dmrs-WithOCC-Activated-r10 at 5462 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1020_specs_1 = {
	sizeof(struct PUSCH_ConfigDedicated_v1020),
	offsetof(struct PUSCH_ConfigDedicated_v1020, _asn_ctx),
	asn_MAP_PUSCH_ConfigDedicated_v1020_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PUSCH_ConfigDedicated_v1020_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1020 = {
	"PUSCH-ConfigDedicated-v1020",
	"PUSCH-ConfigDedicated-v1020",
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
	asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1,
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PUSCH_ConfigDedicated_v1020_1,
	3,	/* Elements count */
	&asn_SPC_PUSCH_ConfigDedicated_v1020_specs_1	/* Additional specs */
};

