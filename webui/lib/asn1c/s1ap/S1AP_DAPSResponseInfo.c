/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "S1AP_DAPSResponseInfo.h"

#include "S1AP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_S1AP_dapsresponseindicator_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_dapsresponseindicator_value2enum_2[] = {
	{ 0,	16,	"dAPS-HO-accepted" },
	{ 1,	20,	"dAPS-HO-not-accepted" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_S1AP_dapsresponseindicator_enum2value_2[] = {
	0,	/* dAPS-HO-accepted(0) */
	1	/* dAPS-HO-not-accepted(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_S1AP_dapsresponseindicator_specs_2 = {
	asn_MAP_S1AP_dapsresponseindicator_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_dapsresponseindicator_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_dapsresponseindicator_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_S1AP_dapsresponseindicator_2 = {
	"dapsresponseindicator",
	"dapsresponseindicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_dapsresponseindicator_tags_2,
	sizeof(asn_DEF_S1AP_dapsresponseindicator_tags_2)
		/sizeof(asn_DEF_S1AP_dapsresponseindicator_tags_2[0]) - 1, /* 1 */
	asn_DEF_S1AP_dapsresponseindicator_tags_2,	/* Same as above */
	sizeof(asn_DEF_S1AP_dapsresponseindicator_tags_2)
		/sizeof(asn_DEF_S1AP_dapsresponseindicator_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_S1AP_dapsresponseindicator_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_dapsresponseindicator_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_DAPSResponseInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_DAPSResponseInfo, dapsresponseindicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_dapsresponseindicator_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dapsresponseindicator"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_DAPSResponseInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_8194P50,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_DAPSResponseInfo_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_S1AP_DAPSResponseInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_DAPSResponseInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dapsresponseindicator */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_DAPSResponseInfo_specs_1 = {
	sizeof(struct S1AP_DAPSResponseInfo),
	offsetof(struct S1AP_DAPSResponseInfo, _asn_ctx),
	asn_MAP_S1AP_DAPSResponseInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S1AP_DAPSResponseInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_DAPSResponseInfo = {
	"DAPSResponseInfo",
	"DAPSResponseInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_DAPSResponseInfo_tags_1,
	sizeof(asn_DEF_S1AP_DAPSResponseInfo_tags_1)
		/sizeof(asn_DEF_S1AP_DAPSResponseInfo_tags_1[0]), /* 1 */
	asn_DEF_S1AP_DAPSResponseInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_DAPSResponseInfo_tags_1)
		/sizeof(asn_DEF_S1AP_DAPSResponseInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1AP_DAPSResponseInfo_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_DAPSResponseInfo_specs_1	/* Additional specs */
};

