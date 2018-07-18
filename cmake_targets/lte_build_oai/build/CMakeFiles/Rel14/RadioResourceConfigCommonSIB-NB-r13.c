/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RadioResourceConfigCommonSIB-NB-r13.h"

static asn_TYPE_member_t asn_MBR_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext1, nprach_Config_v1330),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ConfigSIB_NB_v1330,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nprach-Config-v1330"
		},
};
static int asn_MAP_ext1_oms_11[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-Config-v1330 at 12384 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_11 = {
	sizeof(struct RadioResourceConfigCommonSIB_NB_r13__ext1),
	offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_11 = {
	"ext1",
	"ext1",
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
	asn_DEF_ext1_tags_11,
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_11,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSIB_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, rach_ConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommon_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rach-ConfigCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, bcch_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCH_Config_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bcch-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, pcch_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCCH_Config_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pcch-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, nprach_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ConfigSIB_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nprach-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, npdsch_ConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPDSCH_ConfigCommon_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"npdsch-ConfigCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, npusch_ConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPUSCH_ConfigCommon_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"npusch-ConfigCommon-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, dl_Gap_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_GapConfig_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-Gap-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, uplinkPowerControlCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlCommon-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext1_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
};
static int asn_MAP_RadioResourceConfigCommonSIB_NB_r13_oms_1[] = { 6, 8 };
static ber_tlv_tag_t asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommonSIB_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ConfigCommon-r13 at 12375 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bcch-Config-r13 at 12376 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pcch-Config-r13 at 12377 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-Config-r13 at 12378 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* npdsch-ConfigCommon-r13 at 12379 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* npusch-ConfigCommon-r13 at 12380 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dl-Gap-r13 at 12381 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* uplinkPowerControlCommon-r13 at 12382 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext1 at 12384 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSIB_NB_r13_specs_1 = {
	sizeof(struct RadioResourceConfigCommonSIB_NB_r13),
	offsetof(struct RadioResourceConfigCommonSIB_NB_r13, _asn_ctx),
	asn_MAP_RadioResourceConfigCommonSIB_NB_r13_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommonSIB_NB_r13_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	7,	/* Start extensions */
	10	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSIB_NB_r13 = {
	"RadioResourceConfigCommonSIB-NB-r13",
	"RadioResourceConfigCommonSIB-NB-r13",
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
	asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioResourceConfigCommonSIB_NB_r13_1,
	9,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommonSIB_NB_r13_specs_1	/* Additional specs */
};

