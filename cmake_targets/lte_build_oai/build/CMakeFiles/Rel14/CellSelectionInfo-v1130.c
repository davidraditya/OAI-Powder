/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CellSelectionInfo-v1130.h"

static asn_TYPE_member_t asn_MBR_CellSelectionInfo_v1130_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfo_v1130, q_QualMinWB_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-QualMinWB-r11"
		},
};
static ber_tlv_tag_t asn_DEF_CellSelectionInfo_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellSelectionInfo_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-QualMinWB-r11 at 2059 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfo_v1130_specs_1 = {
	sizeof(struct CellSelectionInfo_v1130),
	offsetof(struct CellSelectionInfo_v1130, _asn_ctx),
	asn_MAP_CellSelectionInfo_v1130_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectionInfo_v1130 = {
	"CellSelectionInfo-v1130",
	"CellSelectionInfo-v1130",
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
	asn_DEF_CellSelectionInfo_v1130_tags_1,
	sizeof(asn_DEF_CellSelectionInfo_v1130_tags_1)
		/sizeof(asn_DEF_CellSelectionInfo_v1130_tags_1[0]), /* 1 */
	asn_DEF_CellSelectionInfo_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectionInfo_v1130_tags_1)
		/sizeof(asn_DEF_CellSelectionInfo_v1130_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellSelectionInfo_v1130_1,
	1,	/* Elements count */
	&asn_SPC_CellSelectionInfo_v1130_specs_1	/* Additional specs */
};
