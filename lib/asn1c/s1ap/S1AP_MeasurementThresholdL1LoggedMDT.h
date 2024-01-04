/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_MeasurementThresholdL1LoggedMDT_H_
#define	_S1AP_MeasurementThresholdL1LoggedMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_Threshold-RSRP.h"
#include "S1AP_Threshold-RSRQ.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_MeasurementThresholdL1LoggedMDT_PR {
	S1AP_MeasurementThresholdL1LoggedMDT_PR_NOTHING,	/* No components present */
	S1AP_MeasurementThresholdL1LoggedMDT_PR_threshold_RSRP,
	S1AP_MeasurementThresholdL1LoggedMDT_PR_threshold_RSRQ,
	S1AP_MeasurementThresholdL1LoggedMDT_PR_choice_Extensions
} S1AP_MeasurementThresholdL1LoggedMDT_PR;

/* Forward declarations */
struct S1AP_ProtocolIE_SingleContainer;

/* S1AP_MeasurementThresholdL1LoggedMDT */
typedef struct S1AP_MeasurementThresholdL1LoggedMDT {
	S1AP_MeasurementThresholdL1LoggedMDT_PR present;
	union S1AP_MeasurementThresholdL1LoggedMDT_u {
		S1AP_Threshold_RSRP_t	 threshold_RSRP;
		S1AP_Threshold_RSRQ_t	 threshold_RSRQ;
		struct S1AP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_MeasurementThresholdL1LoggedMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_MeasurementThresholdL1LoggedMDT;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_MeasurementThresholdL1LoggedMDT_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_MeasurementThresholdL1LoggedMDT_1[3];
extern asn_per_constraints_t asn_PER_type_S1AP_MeasurementThresholdL1LoggedMDT_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_MeasurementThresholdL1LoggedMDT_H_ */
#include <asn_internal.h>
