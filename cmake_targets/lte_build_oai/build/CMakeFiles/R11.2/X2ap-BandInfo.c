/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-BandInfo.h"

static asn_TYPE_member_t asn_MBR_X2ap_BandInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_BandInfo, freqBandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_FreqBandIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"freqBandIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct X2ap_BandInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_X2ap_BandInfo_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_X2ap_BandInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_BandInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqBandIndicator at 893 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions at 895 */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2ap_BandInfo_specs_1 = {
	sizeof(struct X2ap_BandInfo),
	offsetof(struct X2ap_BandInfo, _asn_ctx),
	asn_MAP_X2ap_BandInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_X2ap_BandInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_BandInfo = {
	"X2ap-BandInfo",
	"X2ap-BandInfo",
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
	asn_DEF_X2ap_BandInfo_tags_1,
	sizeof(asn_DEF_X2ap_BandInfo_tags_1)
		/sizeof(asn_DEF_X2ap_BandInfo_tags_1[0]), /* 1 */
	asn_DEF_X2ap_BandInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_BandInfo_tags_1)
		/sizeof(asn_DEF_X2ap_BandInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_X2ap_BandInfo_1,
	2,	/* Elements count */
	&asn_SPC_X2ap_BandInfo_specs_1	/* Additional specs */
};

