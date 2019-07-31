/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "../NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "UnsuccessfulOutcome.h"

static const long asn_VAL_1_id_AMFConfigurationUpdate = 0;
static const long asn_VAL_1_reject = 0;
static const long asn_VAL_2_id_HandoverCancel = 10;
static const long asn_VAL_2_reject = 0;
static const long asn_VAL_3_id_HandoverPreparation = 12;
static const long asn_VAL_3_reject = 0;
static const long asn_VAL_4_id_HandoverResourceAllocation = 13;
static const long asn_VAL_4_reject = 0;
static const long asn_VAL_5_id_InitialContextSetup = 14;
static const long asn_VAL_5_reject = 0;
static const long asn_VAL_6_id_NGReset = 20;
static const long asn_VAL_6_reject = 0;
static const long asn_VAL_7_id_NGSetup = 21;
static const long asn_VAL_7_reject = 0;
static const long asn_VAL_8_id_PathSwitchRequest = 25;
static const long asn_VAL_8_reject = 0;
static const long asn_VAL_9_id_PDUSessionResourceModify = 26;
static const long asn_VAL_9_reject = 0;
static const long asn_VAL_10_id_PDUSessionResourceModifyIndication = 27;
static const long asn_VAL_10_reject = 0;
static const long asn_VAL_11_id_PDUSessionResourceRelease = 28;
static const long asn_VAL_11_reject = 0;
static const long asn_VAL_12_id_PDUSessionResourceSetup = 29;
static const long asn_VAL_12_reject = 0;
static const long asn_VAL_13_id_PWSCancel = 32;
static const long asn_VAL_13_reject = 0;
static const long asn_VAL_14_id_RANConfigurationUpdate = 35;
static const long asn_VAL_14_reject = 0;
static const long asn_VAL_15_id_UEContextModification = 40;
static const long asn_VAL_15_reject = 0;
static const long asn_VAL_16_id_UEContextRelease = 41;
static const long asn_VAL_16_reject = 0;
static const long asn_VAL_17_id_UERadioCapabilityCheck = 43;
static const long asn_VAL_17_reject = 0;
static const long asn_VAL_18_id_WriteReplaceWarning = 51;
static const long asn_VAL_18_reject = 0;
static const long asn_VAL_19_id_AMFStatusIndication = 1;
static const long asn_VAL_19_ignore = 1;
static const long asn_VAL_20_id_CellTrafficTrace = 2;
static const long asn_VAL_20_ignore = 1;
static const long asn_VAL_21_id_DeactivateTrace = 3;
static const long asn_VAL_21_ignore = 1;
static const long asn_VAL_22_id_DownlinkNASTransport = 4;
static const long asn_VAL_22_ignore = 1;
static const long asn_VAL_23_id_DownlinkNonUEAssociatedNRPPaTransport = 5;
static const long asn_VAL_23_ignore = 1;
static const long asn_VAL_24_id_DownlinkRANConfigurationTransfer = 6;
static const long asn_VAL_24_ignore = 1;
static const long asn_VAL_25_id_DownlinkRANStatusTransfer = 7;
static const long asn_VAL_25_ignore = 1;
static const long asn_VAL_26_id_DownlinkUEAssociatedNRPPaTransport = 8;
static const long asn_VAL_26_ignore = 1;
static const long asn_VAL_27_id_ErrorIndication = 9;
static const long asn_VAL_27_ignore = 1;
static const long asn_VAL_28_id_HandoverNotification = 11;
static const long asn_VAL_28_ignore = 1;
static const long asn_VAL_29_id_InitialUEMessage = 15;
static const long asn_VAL_29_ignore = 1;
static const long asn_VAL_30_id_LocationReport = 18;
static const long asn_VAL_30_ignore = 1;
static const long asn_VAL_31_id_LocationReportingControl = 16;
static const long asn_VAL_31_ignore = 1;
static const long asn_VAL_32_id_LocationReportingFailureIndication = 17;
static const long asn_VAL_32_ignore = 1;
static const long asn_VAL_33_id_NASNonDeliveryIndication = 19;
static const long asn_VAL_33_ignore = 1;
static const long asn_VAL_34_id_OverloadStart = 22;
static const long asn_VAL_34_ignore = 1;
static const long asn_VAL_35_id_OverloadStop = 23;
static const long asn_VAL_35_reject = 0;
static const long asn_VAL_36_id_Paging = 24;
static const long asn_VAL_36_ignore = 1;
static const long asn_VAL_37_id_PDUSessionResourceNotify = 30;
static const long asn_VAL_37_ignore = 1;
static const long asn_VAL_38_id_PrivateMessage = 31;
static const long asn_VAL_38_ignore = 1;
static const long asn_VAL_39_id_PWSFailureIndication = 33;
static const long asn_VAL_39_ignore = 1;
static const long asn_VAL_40_id_PWSRestartIndication = 34;
static const long asn_VAL_40_ignore = 1;
static const long asn_VAL_41_id_RerouteNASRequest = 36;
static const long asn_VAL_41_reject = 0;
static const long asn_VAL_42_id_RRCInactiveTransitionReport = 37;
static const long asn_VAL_42_ignore = 1;
static const long asn_VAL_43_id_SecondaryRATDataUsageReport = 52;
static const long asn_VAL_43_ignore = 1;
static const long asn_VAL_44_id_TraceFailureIndication = 38;
static const long asn_VAL_44_ignore = 1;
static const long asn_VAL_45_id_TraceStart = 39;
static const long asn_VAL_45_ignore = 1;
static const long asn_VAL_46_id_UEContextReleaseRequest = 42;
static const long asn_VAL_46_ignore = 1;
static const long asn_VAL_47_id_UERadioCapabilityInfoIndication = 44;
static const long asn_VAL_47_ignore = 1;
static const long asn_VAL_48_id_UETNLABindingRelease = 45;
static const long asn_VAL_48_ignore = 1;
static const long asn_VAL_49_id_UplinkNASTransport = 46;
static const long asn_VAL_49_ignore = 1;
static const long asn_VAL_50_id_UplinkNonUEAssociatedNRPPaTransport = 47;
static const long asn_VAL_50_ignore = 1;
static const long asn_VAL_51_id_UplinkRANConfigurationTransfer = 48;
static const long asn_VAL_51_ignore = 1;
static const long asn_VAL_52_id_UplinkRANStatusTransfer = 49;
static const long asn_VAL_52_ignore = 1;
static const long asn_VAL_53_id_UplinkUEAssociatedNRPPaTransport = 50;
static const long asn_VAL_53_ignore = 1;
static const asn_ioc_cell_t asn_IOS_NGAP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_AMFConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_AMFConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_AMFConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_1_id_AMFConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_1_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_HandoverCancel },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_HandoverCancelAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_2_id_HandoverCancel },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_2_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_HandoverRequired },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_HandoverCommand },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_HandoverPreparationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_3_id_HandoverPreparation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_3_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_HandoverRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_HandoverRequestAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_HandoverFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_4_id_HandoverResourceAllocation },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_4_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_InitialContextSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_InitialContextSetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_InitialContextSetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_5_id_InitialContextSetup },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_5_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGReset },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGResetAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_6_id_NGReset },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_6_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGSetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGSetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_7_id_NGSetup },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_7_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PathSwitchRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_PathSwitchRequestAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_PathSwitchRequestFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_8_id_PathSwitchRequest },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_8_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PDUSessionResourceModifyRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_PDUSessionResourceModifyResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_9_id_PDUSessionResourceModify },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_9_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PDUSessionResourceModifyIndication },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_PDUSessionResourceModifyConfirm },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_10_id_PDUSessionResourceModifyIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_10_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PDUSessionResourceReleaseCommand },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_PDUSessionResourceReleaseResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_11_id_PDUSessionResourceRelease },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_11_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PDUSessionResourceSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_PDUSessionResourceSetupResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_12_id_PDUSessionResourceSetup },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_12_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PWSCancelRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_PWSCancelResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_13_id_PWSCancel },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_13_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RANConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RANConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RANConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_14_id_RANConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_14_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UEContextModificationRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_UEContextModificationResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_UEContextModificationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_15_id_UEContextModification },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_15_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UEContextReleaseCommand },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_UEContextReleaseComplete },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_16_id_UEContextRelease },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_16_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UERadioCapabilityCheckRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_UERadioCapabilityCheckResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_17_id_UERadioCapabilityCheck },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_17_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_WriteReplaceWarningRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_WriteReplaceWarningResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_18_id_WriteReplaceWarning },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_18_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_AMFStatusIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_19_id_AMFStatusIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_19_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_CellTrafficTrace },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_20_id_CellTrafficTrace },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_20_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_DeactivateTrace },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_21_id_DeactivateTrace },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_21_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_DownlinkNASTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_22_id_DownlinkNASTransport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_22_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_DownlinkNonUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_23_id_DownlinkNonUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_23_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_DownlinkRANConfigurationTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_24_id_DownlinkRANConfigurationTransfer },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_24_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_DownlinkRANStatusTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_25_id_DownlinkRANStatusTransfer },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_25_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_DownlinkUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_26_id_DownlinkUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_26_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_27_id_ErrorIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_27_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_HandoverNotify },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_28_id_HandoverNotification },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_28_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_InitialUEMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_29_id_InitialUEMessage },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_29_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_LocationReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_30_id_LocationReport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_30_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_LocationReportingControl },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_31_id_LocationReportingControl },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_31_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_LocationReportingFailureIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_32_id_LocationReportingFailureIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_32_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NASNonDeliveryIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_33_id_NASNonDeliveryIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_33_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_OverloadStart },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_34_id_OverloadStart },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_34_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_OverloadStop },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_35_id_OverloadStop },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_35_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_Paging },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_36_id_Paging },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_36_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PDUSessionResourceNotify },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_37_id_PDUSessionResourceNotify },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_37_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_38_id_PrivateMessage },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_38_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PWSFailureIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_39_id_PWSFailureIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_39_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_PWSRestartIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_40_id_PWSRestartIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_40_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RerouteNASRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_41_id_RerouteNASRequest },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_41_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RRCInactiveTransitionReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_42_id_RRCInactiveTransitionReport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_42_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_SecondaryRATDataUsageReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_43_id_SecondaryRATDataUsageReport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_43_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_TraceFailureIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_44_id_TraceFailureIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_44_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_TraceStart },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_45_id_TraceStart },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_45_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UEContextReleaseRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_46_id_UEContextReleaseRequest },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_46_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UERadioCapabilityInfoIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_47_id_UERadioCapabilityInfoIndication },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_47_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UETNLABindingReleaseRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_48_id_UETNLABindingRelease },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_48_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UplinkNASTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_49_id_UplinkNASTransport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_49_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UplinkNonUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_50_id_UplinkNonUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_50_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UplinkRANConfigurationTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_51_id_UplinkRANConfigurationTransfer },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_51_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UplinkRANStatusTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_52_id_UplinkRANStatusTransfer },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_52_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_UplinkUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode, &asn_VAL_53_id_UplinkUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_53_ignore }
};
static const asn_ioc_set_t asn_IOS_NGAP_ELEMENTARY_PROCEDURES_1[] = {
	53, 5, asn_IOS_NGAP_ELEMENTARY_PROCEDURES_1_rows
};
static int
memb_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_NGAP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = row + 1;
	        break;
	    }
	}
	
	return result;
}

static int
memb_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_NGAP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 2; /* &UnsuccessfulOutcome */
	size_t row;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = row + 1;
	        break;
	    }
	}
	
	return result;
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_memb_procedureCode_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_criticality_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_value_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.AMFConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AMFConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"AMFConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.HandoverPreparationFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_HandoverPreparationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"HandoverPreparationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.HandoverFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_HandoverFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"HandoverFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.InitialContextSetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_InitialContextSetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"InitialContextSetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.NGSetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGSetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"NGSetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.PathSwitchRequestFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PathSwitchRequestFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"PathSwitchRequestFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.RANConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RANConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RANConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome__value, choice.UEContextModificationFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UEContextModificationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"UEContextModificationFailure"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 7 }, /* AMFConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 6 }, /* HandoverPreparationFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 5 }, /* HandoverFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 4 }, /* InitialContextSetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 3 }, /* NGSetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 2 }, /* PathSwitchRequestFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 1 }, /* RANConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 0 } /* UEContextModificationFailure */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_4 = {
	sizeof(struct UnsuccessfulOutcome__value),
	offsetof(struct UnsuccessfulOutcome__value, _asn_ctx),
	offsetof(struct UnsuccessfulOutcome__value, present),
	sizeof(((struct UnsuccessfulOutcome__value *)0)->present),
	asn_MAP_value_tag2el_4,
	8,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_value_4,
	8,	/* Elements count */
	&asn_SPC_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UnsuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcedureCode,
		0,
		{ &asn_OER_memb_procedureCode_constr_2, &asn_PER_memb_procedureCode_constr_2,  memb_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Criticality,
		select_UnsuccessfulOutcome_criticality_type,
		{ &asn_OER_memb_criticality_constr_3, &asn_PER_memb_criticality_constr_3,  memb_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct UnsuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_value_4,
		select_UnsuccessfulOutcome_value_type,
		{ &asn_OER_memb_value_constr_4, &asn_PER_memb_value_constr_4,  memb_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_UnsuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UnsuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_UnsuccessfulOutcome_specs_1 = {
	sizeof(struct UnsuccessfulOutcome),
	offsetof(struct UnsuccessfulOutcome, _asn_ctx),
	asn_MAP_UnsuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UnsuccessfulOutcome = {
	"UnsuccessfulOutcome",
	"UnsuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_UnsuccessfulOutcome_tags_1,
	sizeof(asn_DEF_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_UnsuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UnsuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_UnsuccessfulOutcome_specs_1	/* Additional specs */
};

