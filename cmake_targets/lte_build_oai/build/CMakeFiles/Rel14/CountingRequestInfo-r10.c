/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CountingRequestInfo-r10.h"

static asn_TYPE_member_t asn_MBR_CountingRequestInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CountingRequestInfo_r10, tmgi_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TMGI_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tmgi-r10"
		},
};
static ber_tlv_tag_t asn_DEF_CountingRequestInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CountingRequestInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tmgi-r10 at 562 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CountingRequestInfo_r10_specs_1 = {
	sizeof(struct CountingRequestInfo_r10),
	offsetof(struct CountingRequestInfo_r10, _asn_ctx),
	asn_MAP_CountingRequestInfo_r10_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CountingRequestInfo_r10 = {
	"CountingRequestInfo-r10",
	"CountingRequestInfo-r10",
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
	asn_DEF_CountingRequestInfo_r10_tags_1,
	sizeof(asn_DEF_CountingRequestInfo_r10_tags_1)
		/sizeof(asn_DEF_CountingRequestInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_CountingRequestInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CountingRequestInfo_r10_tags_1)
		/sizeof(asn_DEF_CountingRequestInfo_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CountingRequestInfo_r10_1,
	1,	/* Elements count */
	&asn_SPC_CountingRequestInfo_r10_specs_1	/* Additional specs */
};

