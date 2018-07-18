/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "NPUSCH-ConfigCommon-NB-r13.h"

static int
srs_SubframeConfig_r13_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
srs_SubframeConfig_r13_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
srs_SubframeConfig_r13_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
srs_SubframeConfig_r13_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
srs_SubframeConfig_r13_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
srs_SubframeConfig_r13_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
srs_SubframeConfig_r13_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
srs_SubframeConfig_r13_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
srs_SubframeConfig_r13_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
srs_SubframeConfig_r13_4_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
srs_SubframeConfig_r13_4_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td1);
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
srs_SubframeConfig_r13_4_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	srs_SubframeConfig_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_threeTone_BaseSequence_r13_constraint_21(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 12)) {
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
memb_threeTone_CyclicShift_r13_constraint_21(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2)) {
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
memb_sixTone_BaseSequence_r13_constraint_21(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 14)) {
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
memb_sixTone_CyclicShift_r13_constraint_21(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_twelveTone_BaseSequence_r13_constraint_21(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 30)) {
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
memb_ack_NACK_NumRepetitions_Msg4_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 3)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ack_NACK_NumRepetitions_Msg4_r13_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_SubframeConfig_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_threeTone_BaseSequence_r13_constr_22 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  12 }	/* (0..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_threeTone_CyclicShift_r13_constr_23 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sixTone_BaseSequence_r13_constr_24 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sixTone_CyclicShift_r13_constr_25 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_twelveTone_BaseSequence_r13_constr_26 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ack_NACK_NumRepetitions_Msg4_r13_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ack_NACK_NumRepetitions_Msg4_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ACK_NACK_NumRepetitions_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ack_NACK_NumRepetitions_Msg4_r13_specs_2 = {
	sizeof(struct NPUSCH_ConfigCommon_NB_r13__ack_NACK_NumRepetitions_Msg4_r13),
	offsetof(struct NPUSCH_ConfigCommon_NB_r13__ack_NACK_NumRepetitions_Msg4_r13, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_2 = {
	"ack-NACK-NumRepetitions-Msg4-r13",
	"ack-NACK-NumRepetitions-Msg4-r13",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	SEQUENCE_OF_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_tags_2,
	sizeof(asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_tags_2)
		/sizeof(asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_tags_2)
		/sizeof(asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_tags_2[0]), /* 2 */
	&asn_PER_type_ack_NACK_NumRepetitions_Msg4_r13_constr_2,
	asn_MBR_ack_NACK_NumRepetitions_Msg4_r13_2,
	1,	/* Single element */
	&asn_SPC_ack_NACK_NumRepetitions_Msg4_r13_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_srs_SubframeConfig_r13_value2enum_4[] = {
	{ 0,	3,	"sc0" },
	{ 1,	3,	"sc1" },
	{ 2,	3,	"sc2" },
	{ 3,	3,	"sc3" },
	{ 4,	3,	"sc4" },
	{ 5,	3,	"sc5" },
	{ 6,	3,	"sc6" },
	{ 7,	3,	"sc7" },
	{ 8,	3,	"sc8" },
	{ 9,	3,	"sc9" },
	{ 10,	4,	"sc10" },
	{ 11,	4,	"sc11" },
	{ 12,	4,	"sc12" },
	{ 13,	4,	"sc13" },
	{ 14,	4,	"sc14" },
	{ 15,	4,	"sc15" }
};
static unsigned int asn_MAP_srs_SubframeConfig_r13_enum2value_4[] = {
	0,	/* sc0(0) */
	1,	/* sc1(1) */
	10,	/* sc10(10) */
	11,	/* sc11(11) */
	12,	/* sc12(12) */
	13,	/* sc13(13) */
	14,	/* sc14(14) */
	15,	/* sc15(15) */
	2,	/* sc2(2) */
	3,	/* sc3(3) */
	4,	/* sc4(4) */
	5,	/* sc5(5) */
	6,	/* sc6(6) */
	7,	/* sc7(7) */
	8,	/* sc8(8) */
	9	/* sc9(9) */
};
static asn_INTEGER_specifics_t asn_SPC_srs_SubframeConfig_r13_specs_4 = {
	asn_MAP_srs_SubframeConfig_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_SubframeConfig_r13_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_srs_SubframeConfig_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_SubframeConfig_r13_4 = {
	"srs-SubframeConfig-r13",
	"srs-SubframeConfig-r13",
	srs_SubframeConfig_r13_4_free,
	srs_SubframeConfig_r13_4_print,
	srs_SubframeConfig_r13_4_constraint,
	srs_SubframeConfig_r13_4_decode_ber,
	srs_SubframeConfig_r13_4_encode_der,
	srs_SubframeConfig_r13_4_decode_xer,
	srs_SubframeConfig_r13_4_encode_xer,
	srs_SubframeConfig_r13_4_decode_uper,
	srs_SubframeConfig_r13_4_encode_uper,
	srs_SubframeConfig_r13_4_decode_aper,
	srs_SubframeConfig_r13_4_encode_aper,
	srs_SubframeConfig_r13_4_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_SubframeConfig_r13_tags_4,
	sizeof(asn_DEF_srs_SubframeConfig_r13_tags_4)
		/sizeof(asn_DEF_srs_SubframeConfig_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_srs_SubframeConfig_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_srs_SubframeConfig_r13_tags_4)
		/sizeof(asn_DEF_srs_SubframeConfig_r13_tags_4[0]), /* 2 */
	&asn_PER_type_srs_SubframeConfig_r13_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_SubframeConfig_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dmrs_Config_r13_21[] = {
	{ ATF_POINTER, 1, offsetof(struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, threeTone_BaseSequence_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_threeTone_BaseSequence_r13_constraint_21,
		&asn_PER_memb_threeTone_BaseSequence_r13_constr_22,
		0,
		"threeTone-BaseSequence-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, threeTone_CyclicShift_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_threeTone_CyclicShift_r13_constraint_21,
		&asn_PER_memb_threeTone_CyclicShift_r13_constr_23,
		0,
		"threeTone-CyclicShift-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, sixTone_BaseSequence_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sixTone_BaseSequence_r13_constraint_21,
		&asn_PER_memb_sixTone_BaseSequence_r13_constr_24,
		0,
		"sixTone-BaseSequence-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, sixTone_CyclicShift_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sixTone_CyclicShift_r13_constraint_21,
		&asn_PER_memb_sixTone_CyclicShift_r13_constr_25,
		0,
		"sixTone-CyclicShift-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, twelveTone_BaseSequence_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_twelveTone_BaseSequence_r13_constraint_21,
		&asn_PER_memb_twelveTone_BaseSequence_r13_constr_26,
		0,
		"twelveTone-BaseSequence-r13"
		},
};
static int asn_MAP_dmrs_Config_r13_oms_21[] = { 0, 2, 4 };
static ber_tlv_tag_t asn_DEF_dmrs_Config_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_dmrs_Config_r13_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threeTone-BaseSequence-r13 at 12296 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* threeTone-CyclicShift-r13 at 12297 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sixTone-BaseSequence-r13 at 12298 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sixTone-CyclicShift-r13 at 12299 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* twelveTone-BaseSequence-r13 at 12300 */
};
static asn_SEQUENCE_specifics_t asn_SPC_dmrs_Config_r13_specs_21 = {
	sizeof(struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13),
	offsetof(struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, _asn_ctx),
	asn_MAP_dmrs_Config_r13_tag2el_21,
	5,	/* Count of tags in the map */
	asn_MAP_dmrs_Config_r13_oms_21,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_Config_r13_21 = {
	"dmrs-Config-r13",
	"dmrs-Config-r13",
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
	asn_DEF_dmrs_Config_r13_tags_21,
	sizeof(asn_DEF_dmrs_Config_r13_tags_21)
		/sizeof(asn_DEF_dmrs_Config_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_dmrs_Config_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_dmrs_Config_r13_tags_21)
		/sizeof(asn_DEF_dmrs_Config_r13_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_dmrs_Config_r13_21,
	5,	/* Elements count */
	&asn_SPC_dmrs_Config_r13_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NPUSCH_ConfigCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NPUSCH_ConfigCommon_NB_r13, ack_NACK_NumRepetitions_Msg4_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ack_NACK_NumRepetitions_Msg4_r13_2,
		memb_ack_NACK_NumRepetitions_Msg4_r13_constraint_1,
		&asn_PER_memb_ack_NACK_NumRepetitions_Msg4_r13_constr_2,
		0,
		"ack-NACK-NumRepetitions-Msg4-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct NPUSCH_ConfigCommon_NB_r13, srs_SubframeConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_SubframeConfig_r13_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-SubframeConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct NPUSCH_ConfigCommon_NB_r13, dmrs_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_dmrs_Config_r13_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dmrs-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NPUSCH_ConfigCommon_NB_r13, ul_ReferenceSignalsNPUSCH_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ReferenceSignalsNPUSCH_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-ReferenceSignalsNPUSCH-r13"
		},
};
static int asn_MAP_NPUSCH_ConfigCommon_NB_r13_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_NPUSCH_ConfigCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NPUSCH_ConfigCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ack-NACK-NumRepetitions-Msg4-r13 at 12290 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-SubframeConfig-r13 at 12292 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dmrs-Config-r13 at 12296 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ul-ReferenceSignalsNPUSCH-r13 at 12303 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NPUSCH_ConfigCommon_NB_r13_specs_1 = {
	sizeof(struct NPUSCH_ConfigCommon_NB_r13),
	offsetof(struct NPUSCH_ConfigCommon_NB_r13, _asn_ctx),
	asn_MAP_NPUSCH_ConfigCommon_NB_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NPUSCH_ConfigCommon_NB_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NPUSCH_ConfigCommon_NB_r13 = {
	"NPUSCH-ConfigCommon-NB-r13",
	"NPUSCH-ConfigCommon-NB-r13",
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
	asn_DEF_NPUSCH_ConfigCommon_NB_r13_tags_1,
	sizeof(asn_DEF_NPUSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_NPUSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_NPUSCH_ConfigCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_NPUSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_NPUSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NPUSCH_ConfigCommon_NB_r13_1,
	4,	/* Elements count */
	&asn_SPC_NPUSCH_ConfigCommon_NB_r13_specs_1	/* Additional specs */
};

