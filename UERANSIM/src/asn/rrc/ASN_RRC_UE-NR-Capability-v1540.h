/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_UE_NR_Capability_v1540_H_
#define	_ASN_RRC_UE_NR_Capability_v1540_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_UE_NR_Capability_v1540__overheatingInd {
	ASN_RRC_UE_NR_Capability_v1540__overheatingInd_supported	= 0
} e_ASN_RRC_UE_NR_Capability_v1540__overheatingInd;

/* Forward declarations */
struct ASN_RRC_SDAP_Parameters;
struct ASN_RRC_IMS_Parameters;
struct ASN_RRC_UE_NR_CapabilityAddFRX_Mode_v1540;
struct ASN_RRC_UE_NR_CapabilityAddFRX_Mode;
struct ASN_RRC_UE_NR_Capability_v1550;

/* ASN_RRC_UE-NR-Capability-v1540 */
typedef struct ASN_RRC_UE_NR_Capability_v1540 {
	struct ASN_RRC_SDAP_Parameters	*sdap_Parameters;	/* OPTIONAL */
	long	*overheatingInd;	/* OPTIONAL */
	struct ASN_RRC_IMS_Parameters	*ims_Parameters;	/* OPTIONAL */
	struct ASN_RRC_UE_NR_CapabilityAddFRX_Mode_v1540	*fr1_Add_UE_NR_Capabilities_v1540;	/* OPTIONAL */
	struct ASN_RRC_UE_NR_CapabilityAddFRX_Mode_v1540	*fr2_Add_UE_NR_Capabilities_v1540;	/* OPTIONAL */
	struct ASN_RRC_UE_NR_CapabilityAddFRX_Mode	*fr1_fr2_Add_UE_NR_Capabilities;	/* OPTIONAL */
	struct ASN_RRC_UE_NR_Capability_v1550	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_UE_NR_Capability_v1540_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_overheatingInd_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_UE_NR_Capability_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_UE_NR_Capability_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_UE_NR_Capability_v1540_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_UE_NR_Capability_v1540_H_ */
#include <asn_internal.h>