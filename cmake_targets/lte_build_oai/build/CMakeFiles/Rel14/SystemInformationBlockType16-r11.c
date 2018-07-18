/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SystemInformationBlockType16-r11.h"

static int
memb_timeInfoUTC_r11_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0 && value <= 549755813887ULL)) {
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
memb_dayLightSavingTime_r11_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
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
memb_leapSeconds_r11_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
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
memb_localTimeOffset_r11_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -63 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_timeInfoUTC_r11_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 39, -1,  0, 549755813887ULL }	/* (0..549755813887) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dayLightSavingTime_r11_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_leapSeconds_r11_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_localTimeOffset_r11_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -63,  64 }	/* (-63..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_timeInfo_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, timeInfoUTC_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		memb_timeInfoUTC_r11_constraint_2,
		&asn_PER_memb_timeInfoUTC_r11_constr_3,
		0,
		"timeInfoUTC-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, dayLightSavingTime_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_dayLightSavingTime_r11_constraint_2,
		&asn_PER_memb_dayLightSavingTime_r11_constr_4,
		0,
		"dayLightSavingTime-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, leapSeconds_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_leapSeconds_r11_constraint_2,
		&asn_PER_memb_leapSeconds_r11_constr_5,
		0,
		"leapSeconds-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, localTimeOffset_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_localTimeOffset_r11_constraint_2,
		&asn_PER_memb_localTimeOffset_r11_constr_6,
		0,
		"localTimeOffset-r11"
		},
};
static int asn_MAP_timeInfo_r11_oms_2[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_timeInfo_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_timeInfo_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeInfoUTC-r11 at 3374 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dayLightSavingTime-r11 at 3375 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* leapSeconds-r11 at 3376 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* localTimeOffset-r11 at 3377 */
};
static asn_SEQUENCE_specifics_t asn_SPC_timeInfo_r11_specs_2 = {
	sizeof(struct SystemInformationBlockType16_r11__timeInfo_r11),
	offsetof(struct SystemInformationBlockType16_r11__timeInfo_r11, _asn_ctx),
	asn_MAP_timeInfo_r11_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_timeInfo_r11_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeInfo_r11_2 = {
	"timeInfo-r11",
	"timeInfo-r11",
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
	asn_DEF_timeInfo_r11_tags_2,
	sizeof(asn_DEF_timeInfo_r11_tags_2)
		/sizeof(asn_DEF_timeInfo_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_timeInfo_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_timeInfo_r11_tags_2)
		/sizeof(asn_DEF_timeInfo_r11_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_timeInfo_r11_2,
	4,	/* Elements count */
	&asn_SPC_timeInfo_r11_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType16_r11_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType16_r11, timeInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_timeInfo_r11_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeInfo-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType16_r11, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType16_r11_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType16_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType16_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeInfo-r11 at 3374 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lateNonCriticalExtension at 3379 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType16_r11_specs_1 = {
	sizeof(struct SystemInformationBlockType16_r11),
	offsetof(struct SystemInformationBlockType16_r11, _asn_ctx),
	asn_MAP_SystemInformationBlockType16_r11_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType16_r11_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType16_r11 = {
	"SystemInformationBlockType16-r11",
	"SystemInformationBlockType16-r11",
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
	asn_DEF_SystemInformationBlockType16_r11_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType16_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType16_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType16_r11_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType16_r11_specs_1	/* Additional specs */
};

