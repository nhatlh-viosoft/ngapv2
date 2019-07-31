//From the folder geometryASN, to convert the ASN1 to c execute the following
// asn1c -fcompound-names -gen-PER ../Geometry.asn1 ^C
#include <stdint.h>
#include <unistd.h>


#include "AdditionalQosFlowInformation.h"
#include "AllocationAndRetentionPriority.h"
#include "AllowedNSSAI.h"
#include "AllowedNSSAI-Item.h"
#include "AllowedTACs.h"
#include "AMFConfigurationUpdateAcknowledge.h"
#include "AMFConfigurationUpdateFailure.h"
#include "AMFConfigurationUpdate.h"
#include "AMFName.h"
//#include "AMFPagingTarget.h"
#include "AMFPointer.h"
#include "AMFRegionID.h"
#include "AMFSetID.h"
#include "AMFStatusIndication.h"
#include "AMF-TNLAssociationSetupItem.h"
#include "AMF-TNLAssociationSetupList.h"
#include "AMF-TNLAssociationToAddItem.h"
#include "AMF-TNLAssociationToAddList.h"
#include "AMF-TNLAssociationToRemoveItem.h"
#include "AMF-TNLAssociationToRemoveList.h"
#include "AMF-TNLAssociationToUpdateItem.h"
#include "AMF-TNLAssociationToUpdateList.h"
#include "AMF-UE-NGAP-ID.h"
#include "ANY.h"
//#include "AreaOfInterestCellItem.h"
//#include "AreaOfInterestCellList.h"
#include "AreaOfInterest.h"
#include "AreaOfInterestItem.h"
#include "AreaOfInterestList.h"
//#include "AreaOfInterestRANNodeItem.h"
//#include "AreaOfInterestRANNodeList.h"
#include "AreaOfInterestTAIItem.h"
#include "AreaOfInterestTAIList.h"
#include "asn_application.h"
#include "asn_bit_data.h"
#include "asn_codecs.h"
#include "asn_codecs_prim.h"
#include "asn_internal.h"
#include "asn_ioc.h"
#include "asn_random_fill.h"
#include "asn_SEQUENCE_OF.h"
#include "asn_SET_OF.h"
#include "asn_system.h"
#include "AssistanceDataForPaging.h"
#include "AssistanceDataForRecommendedCells.h"
#include "AssociatedQosFlowItem.h"
#include "AssociatedQosFlowList.h"
#include "AveragingWindow.h"
#include "ber_decoder.h"
#include "ber_tlv_length.h"
#include "ber_tlv_tag.h"
#include "BitRate.h"
#include "BIT_STRING.h"
#include "BroadcastCancelledAreaList.h"
#include "BroadcastCompletedAreaList.h"
#include "BroadcastPLMNItem.h"
#include "BroadcastPLMNList.h"
#include "CancelAllWarningMessages.h"
#include "CancelledCellsInEAI-EUTRA.h"
#include "CancelledCellsInEAI-EUTRA-Item.h"
#include "CancelledCellsInEAI-NR.h"
#include "CancelledCellsInEAI-NR-Item.h"
#include "CancelledCellsInTAI-EUTRA.h"
#include "CancelledCellsInTAI-EUTRA-Item.h"
#include "CancelledCellsInTAI-NR.h"
#include "CancelledCellsInTAI-NR-Item.h"
#include "Cause.h"
#include "CauseMisc.h"
#include "CauseNas.h"
#include "CauseProtocol.h"
#include "CauseRadioNetwork.h"
#include "CauseTransport.h"
#include "CellIDBroadcastEUTRA.h"
#include "CellIDBroadcastEUTRA-Item.h"
#include "CellIDBroadcastNR.h"
#include "CellIDBroadcastNR-Item.h"
#include "CellIDCancelledEUTRA.h"
#include "CellIDCancelledEUTRA-Item.h"
#include "CellIDCancelledNR.h"
#include "CellIDCancelledNR-Item.h"
#include "CellIDListForRestart.h"
//#include "CellSize.h"
#include "CellTrafficTrace.h"
//#include "CellType.h"
#include "CompletedCellsInEAI-EUTRA.h"
#include "CompletedCellsInEAI-EUTRA-Item.h"
#include "CompletedCellsInEAI-NR.h"
#include "CompletedCellsInEAI-NR-Item.h"
#include "CompletedCellsInTAI-EUTRA.h"
#include "CompletedCellsInTAI-EUTRA-Item.h"
#include "CompletedCellsInTAI-NR.h"
#include "CompletedCellsInTAI-NR-Item.h"
#include "ConcurrentWarningMessageInd.h"
#include "ConfidentialityProtectionIndication.h"
#include "ConfidentialityProtectionResult.h"
#include "constraints.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SET_OF.h"
#include "constr_TYPE.h"
//#include "CoreNetworkAssistanceInformation.h"
//#include "COUNTValueForPDCP-SN12.h"
//#include "COUNTValueForPDCP-SN18.h"
#include "CPTransportLayerInformation.h"
#include "CriticalityDiagnostics.h"
#include "CriticalityDiagnostics-IE-Item.h"
#include "CriticalityDiagnostics-IE-List.h"
#include "Criticality.h"
#include "DataCodingScheme.h"
#include "DataForwardingAccepted.h"
#include "DataForwardingNotPossible.h"
#include "DataForwardingResponseDRBItem.h"
#include "DataForwardingResponseDRBList.h"
#include "DeactivateTrace.h"
#include "DelayCritical.h"
#include "der_encoder.h"
#include "DirectForwardingPathAvailability.h"
#include "DLForwarding.h"
//#include "DL-NGU-TNLInformationReused.h"
#include "DownlinkNASTransport.h"
#include "DownlinkNonUEAssociatedNRPPaTransport.h"
#include "DownlinkRANConfigurationTransfer.h"
#include "DownlinkRANStatusTransfer.h"
#include "DownlinkUEAssociatedNRPPaTransport.h"
#include "DRB-ID.h"
//#include "DRBsSubjectToStatusTransferItem.h"
//#include "DRBsSubjectToStatusTransferList.h"
//#include "DRBStatusDL12.h"
//#include "DRBStatusDL18.h"
//#include "DRBStatusDL.h"
//#include "DRBStatusUL12.h"
//#include "DRBStatusUL18.h"
//#include "DRBStatusUL.h"
#include "DRBsToQosFlowsMappingItem.h"
#include "DRBsToQosFlowsMappingList.h"
#include "Dynamic5QIDescriptor.h"
#include "EmergencyAreaIDBroadcastEUTRA.h"
#include "EmergencyAreaIDBroadcastEUTRA-Item.h"
#include "EmergencyAreaIDBroadcastNR.h"
#include "EmergencyAreaIDBroadcastNR-Item.h"
#include "EmergencyAreaIDCancelledEUTRA.h"
#include "EmergencyAreaIDCancelledEUTRA-Item.h"
#include "EmergencyAreaIDCancelledNR.h"
#include "EmergencyAreaIDCancelledNR-Item.h"
#include "EmergencyAreaID.h"
#include "EmergencyAreaIDListForRestart.h"
#include "EmergencyAreaIDList.h"
#include "EmergencyFallbackIndicator.h"
//#include "EmergencyFallbackRequestIndicator.h"
//#include "EmergencyServiceTargetCN.h"
#include "EPS-TAC.h"
#include "EPS-TAI.h"
#include "EquivalentPLMNs.h"
#include "E-RAB-ID.h"
#include "E-RABInformationItem.h"
#include "E-RABInformationList.h"
#include "ErrorIndication.h"
#include "EUTRACellIdentity.h"
#include "EUTRA-CGI.h"
#include "EUTRA-CGIListForWarning.h"
#include "EUTRA-CGIList.h"
#include "EUTRAencryptionAlgorithms.h"
#include "EUTRAintegrityProtectionAlgorithms.h"
#include "EventType.h"
//#include "ExpectedActivityPeriod.h"
//#include "ExpectedHOInterval.h"
//#include "ExpectedIdlePeriod.h"
//#include "ExpectedUEActivityBehaviour.h"
//#include "ExpectedUEBehaviour.h"
//#include "ExpectedUEMobility.h"
//#include "ExpectedUEMovingTrajectory.h"
//#include "ExpectedUEMovingTrajectoryItem.h"
#include "FiveG-S-TMSI.h"
#include "FiveG-TMSI.h"
#include "FiveQI.h"
#include "ForbiddenAreaInformation.h"
#include "ForbiddenAreaInformation-Item.h"
#include "ForbiddenTACs.h"
#include "GBR-QosInformation.h"
#include "GlobalGNB-ID.h"
#include "GlobalN3IWF-ID.h"
#include "GlobalNgENB-ID.h"
#include "GlobalRANNodeID.h"
#include "GNB-ID.h"
#include "GTP-TEID.h"
#include "GTPTunnel.h"
#include "GUAMI.h"
#include "HandoverCancelAcknowledge.h"
#include "HandoverCancel.h"
#include "HandoverCommand.h"
#include "HandoverCommandTransfer.h"
#include "HandoverFailure.h"
#include "HandoverNotify.h"
#include "HandoverPreparationFailure.h"
//#include "HandoverPreparationUnsuccessfulTransfer.h"
#include "HandoverRequestAcknowledge.h"
#include "HandoverRequestAcknowledgeTransfer.h"
#include "HandoverRequest.h"
#include "HandoverRequired.h"
//#include "HandoverRequiredTransfer.h"
//#include "HandoverResourceAllocationUnsuccessfulTransfer.h"
#include "HandoverType.h"
#include "IMSVoiceSupportIndicator.h"
#include "IndexToRFSP.h"
#include "InfoOnRecommendedCellsAndRANNodesForPaging.h"
#include "InitialContextSetupFailure.h"
#include "InitialContextSetupRequest.h"
#include "InitialContextSetupResponse.h"
#include "InitialUEMessage.h"
#include "InitiatingMessage.h"
#include "INTEGER.h"
#include "IntegrityProtectionIndication.h"
#include "IntegrityProtectionResult.h"
#include "IntendedNumberOfPagingAttempts.h"
#include "InterfacesToTrace.h"
//#include "LastVisitedCellInformation.h"
//#include "LastVisitedCellItem.h"
//#include "LastVisitedEUTRANCellInformation.h"
//#include "LastVisitedGERANCellInformation.h"
//#include "LastVisitedNGRANCellInformation.h"
//#include "LastVisitedUTRANCellInformation.h"
#include "LocationReport.h"
#include "LocationReportingControl.h"
#include "LocationReportingFailureIndication.h"
#include "LocationReportingReferenceID.h"
#include "LocationReportingRequestType.h"
#include "MaskedIMEISV.h"
#include "MaximumDataBurstVolume.h"
//#include "MaximumIntegrityProtectedDataRate.h"
#include "MessageIdentifier.h"
#include "MICOModeIndication.h"
#include "MobilityRestrictionList.h"
#include "MultipleTNLInformation.h"
#include "N3IWF-ID.h"
#include "NASNonDeliveryIndication.h"
#include "NAS-PDU.h"
//#include "NASSecurityParametersFromNGRAN.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
//#include "NetworkInstance.h"
//#include "NewSecurityContextInd.h"
#include "NextHopChainingCount.h"
#include "NextPagingAreaScope.h"
//#include "NGAP-Message.h"
#include "NGAP-PDU.h"
#include "NgENB-ID.h"
#include "NGRAN-CGI.h"
#include "NGRANTraceID.h"
#include "NGResetAcknowledge.h"
#include "NGReset.h"
#include "NGSetupFailure.h"
#include "NGSetupRequest.h"
#include "NGSetupResponse.h"
#include "NonDynamic5QIDescriptor.h"
#include "NotAllowedTACs.h"
#include "NotificationCause.h"
#include "NotificationControl.h"
#include "NRCellIdentity.h"
#include "NR-CGI.h"
#include "NR-CGIListForWarning.h"
#include "NR-CGIList.h"
//#include "NRencryptionAlgorithms.h"
//#include "NRintegrityProtectionAlgorithms.h"
#include "NRPPa-PDU.h"
#include "NumberOfBroadcasts.h"
#include "NumberOfBroadcastsRequested.h"
#include "OBJECT_IDENTIFIER.h"
#include "OCTET_STRING.h"
#include "OPEN_TYPE.h"
//#include "OverloadAction.h"
//#include "OverloadResponse.h"
//#include "OverloadStart.h"
//#include "OverloadStartNSSAIItem.h"
//#include "OverloadStartNSSAIList.h"
//#include "OverloadStop.h"
#include "PacketDelayBudget.h"
#include "PacketErrorRate.h"
#include "PacketLossRate.h"
#include "PagingAttemptCount.h"
#include "PagingAttemptInformation.h"
#include "PagingDRX.h"
#include "Paging.h"
#include "PagingOrigin.h"
#include "PagingPriority.h"
#include "PathSwitchRequestAcknowledge.h"
#include "PathSwitchRequestAcknowledgeTransfer.h"
#include "PathSwitchRequestFailure.h"
#include "PathSwitchRequest.h"
//#include "PathSwitchRequestSetupFailedTransfer.h"
#include "PathSwitchRequestTransfer.h"
//#include "PathSwitchRequestUnsuccessfulTransfer.h"
//#include "PDUSessionAggregateMaximumBitRate.h"
#include "PDUSessionID.h"
#include "PDUSessionResourceAdmittedItem.h"
#include "PDUSessionResourceAdmittedList.h"
//#include "PDUSessionResourceFailedToModifyItemModCfm.h"
//#include "PDUSessionResourceFailedToModifyItemModRes.h"
//#include "PDUSessionResourceFailedToModifyListModCfm.h"
//#include "PDUSessionResourceFailedToModifyListModRes.h"
//#include "PDUSessionResourceFailedToSetupItemCxtFail.h"
//#include "PDUSessionResourceFailedToSetupItemCxtRes.h"
//#include "PDUSessionResourceFailedToSetupItemHOAck.h"
//#include "PDUSessionResourceFailedToSetupItemPSReq.h"
//#include "PDUSessionResourceFailedToSetupItemSURes.h"
//#include "PDUSessionResourceFailedToSetupListCxtFail.h"
//#include "PDUSessionResourceFailedToSetupListCxtRes.h"
//#include "PDUSessionResourceFailedToSetupListHOAck.h"
//#include "PDUSessionResourceFailedToSetupListPSReq.h"
//#include "PDUSessionResourceFailedToSetupListSURes.h"
//#include "PDUSessionResourceHandoverItem.h"
//#include "PDUSessionResourceHandoverList.h"
#include "PDUSessionResourceInformationItem.h"
#include "PDUSessionResourceInformationList.h"
//#include "PDUSessionResourceItemCxtRelCpl.h"
//#include "PDUSessionResourceItemCxtRelReq.h"
#include "PDUSessionResourceItemHORqd.h"
//#include "PDUSessionResourceListCxtRelCpl.h"
//#include "PDUSessionResourceListCxtRelReq.h"
#include "PDUSessionResourceListHORqd.h"
#include "PDUSessionResourceModifyConfirm.h"
#include "PDUSessionResourceModifyConfirmTransfer.h"
#include "PDUSessionResourceModifyIndication.h"
#include "PDUSessionResourceModifyIndicationTransfer.h"
//#include "PDUSessionResourceModifyIndicationUnsuccessfulTransfer.h"
#include "PDUSessionResourceModifyItemModCfm.h"
#include "PDUSessionResourceModifyItemModInd.h"
#include "PDUSessionResourceModifyItemModReq.h"
#include "PDUSessionResourceModifyItemModRes.h"
#include "PDUSessionResourceModifyListModCfm.h"
#include "PDUSessionResourceModifyListModInd.h"
#include "PDUSessionResourceModifyListModReq.h"
#include "PDUSessionResourceModifyListModRes.h"
#include "PDUSessionResourceModifyRequest.h"
#include "PDUSessionResourceModifyRequestTransfer.h"
#include "PDUSessionResourceModifyResponse.h"
#include "PDUSessionResourceModifyResponseTransfer.h"
//#include "PDUSessionResourceModifyUnsuccessfulTransfer.h"
#include "PDUSessionResourceNotify.h"
#include "PDUSessionResourceNotifyItem.h"
#include "PDUSessionResourceNotifyList.h"
//#include "PDUSessionResourceNotifyReleasedTransfer.h"
#include "PDUSessionResourceNotifyTransfer.h"
#include "PDUSessionResourceReleaseCommand.h"
//#include "PDUSessionResourceReleaseCommandTransfer.h"
//#include "PDUSessionResourceReleasedItemNot.h"
//#include "PDUSessionResourceReleasedItemPSAck.h"
//#include "PDUSessionResourceReleasedItemPSFail.h"
//#include "PDUSessionResourceReleasedItemRelRes.h"
//#include "PDUSessionResourceReleasedListNot.h"
//#include "PDUSessionResourceReleasedListPSAck.h"
//#include "PDUSessionResourceReleasedListPSFail.h"
//#include "PDUSessionResourceReleasedListRelRes.h"
#include "PDUSessionResourceReleaseResponse.h"
//#include "PDUSessionResourceReleaseResponseTransfer.h"
#include "PDUSessionResourceSetupItemCxtReq.h"
#include "PDUSessionResourceSetupItemCxtRes.h"
#include "PDUSessionResourceSetupItemHOReq.h"
#include "PDUSessionResourceSetupItemSUReq.h"
#include "PDUSessionResourceSetupItemSURes.h"
#include "PDUSessionResourceSetupListCxtReq.h"
#include "PDUSessionResourceSetupListCxtRes.h"
#include "PDUSessionResourceSetupListHOReq.h"
#include "PDUSessionResourceSetupListSUReq.h"
#include "PDUSessionResourceSetupListSURes.h"
#include "PDUSessionResourceSetupRequest.h"
#include "PDUSessionResourceSetupRequestTransfer.h"
#include "PDUSessionResourceSetupResponse.h"
#include "PDUSessionResourceSetupResponseTransfer.h"
//#include "PDUSessionResourceSetupUnsuccessfulTransfer.h"
//#include "PDUSessionResourceSwitchedItem.h"
//#include "PDUSessionResourceSwitchedList.h"
#include "PDUSessionResourceToBeSwitchedDLItem.h"
#include "PDUSessionResourceToBeSwitchedDLList.h"
//#include "PDUSessionResourceToReleaseItemHOCmd.h"
//#include "PDUSessionResourceToReleaseItemRelCmd.h"
//#include "PDUSessionResourceToReleaseListHOCmd.h"
//#include "PDUSessionResourceToReleaseListRelCmd.h"
#include "PDUSessionType.h"
#include "per_decoder.h"
#include "per_encoder.h"
#include "PeriodicRegistrationUpdateTimer.h"
#include "per_opentype.h"
#include "per_support.h"
#include "PLMNIdentity.h"
#include "PLMNSupportItem.h"
#include "PLMNSupportList.h"
#include "PortNumber.h"
#include "Pre-emptionCapability.h"
#include "Pre-emptionVulnerability.h"
#include "Presence.h"
#include "PrintableString.h"
#include "PriorityLevelARP.h"
#include "PriorityLevelQos.h"
#include "PrivateIE-Container.h"
#include "PrivateIE-Field.h"
#include "PrivateIE-ID.h"
#include "PrivateMessage.h"
#include "ProcedureCode.h"
#include "ProtocolExtensionContainer.h"
#include "ProtocolExtensionField.h"
#include "ProtocolExtensionID.h"
#include "ProtocolIE-Container.h"
#include "ProtocolIE-ContainerList.h"
#include "ProtocolIE-ContainerPair.h"
#include "ProtocolIE-ContainerPairList.h"
#include "ProtocolIE-Field.h"
#include "ProtocolIE-FieldPair.h"
#include "ProtocolIE-ID.h"
#include "ProtocolIE-SingleContainer.h"
#include "PWSCancelRequest.h"
#include "PWSCancelResponse.h"
#include "PWSFailedCellIDList.h"
#include "PWSFailureIndication.h"
#include "PWSRestartIndication.h"
#include "QosCharacteristics.h"
#include "QosFlowAcceptedItem.h"
#include "QosFlowAcceptedList.h"
#include "QosFlowAddOrModifyRequestItem.h"
#include "QosFlowAddOrModifyRequestList.h"
#include "QosFlowAddOrModifyResponseItem.h"
#include "QosFlowAddOrModifyResponseList.h"
//#include "QosFlowIdentifier.h"
#include "QosFlowInformationItem.h"
#include "QosFlowInformationList.h"
#include "QosFlowItem.h"
#include "QosFlowLevelQosParameters.h"
#include "QosFlowList.h"
#include "QosFlowModifyConfirmItem.h"
#include "QosFlowModifyConfirmList.h"
#include "QosFlowNotifyItem.h"
#include "QosFlowNotifyList.h"
//#include "QosFlowPerTNLInformation.h"
#include "QosFlowSetupRequestItem.h"
#include "QosFlowSetupRequestList.h"
#include "QosFlowSetupResponseItemHOReqAck.h"
#include "QosFlowSetupResponseItemSURes.h"
#include "QosFlowSetupResponseListHOReqAck.h"
#include "QosFlowSetupResponseListSURes.h"
#include "QosFlowToBeForwardedItem.h"
#include "QosFlowToBeForwardedList.h"
#include "RANConfigurationUpdateAcknowledge.h"
#include "RANConfigurationUpdateFailure.h"
#include "RANConfigurationUpdate.h"
#include "RANNodeName.h"
#include "RANPagingPriority.h"
#include "RANStatusTransfer-TransparentContainer.h"
#include "RAN-UE-NGAP-ID.h"
#include "RATRestrictionInformation.h"
#include "RATRestrictions.h"
#include "RATRestrictions-Item.h"
#include "RecommendedCellItem.h"
#include "RecommendedCellList.h"
#include "RecommendedCellsForPaging.h"
//#include "RecommendedRANNodeItem.h"
//#include "RecommendedRANNodeList.h"
//#include "RecommendedRANNodesForPaging.h"
#include "ReferenceID.h"
#include "ReflectiveQosAttribute.h"
#include "RelativeAMFCapacity.h"
#include "RepetitionPeriod.h"
#include "ReportArea.h"
#include "RerouteNASRequest.h"
#include "ResetAll.h"
#include "ResetType.h"
#include "RoutingID.h"
#include "RRCContainer.h"
#include "RRCEstablishmentCause.h"
//#include "RRCInactiveTransitionReport.h"
//#include "RRCInactiveTransitionReportRequest.h"
//#include "RRCState.h"
#include "SD.h"
#include "SecurityContext.h"
#include "SecurityIndication.h"
#include "SecurityKey.h"
#include "SecurityResult.h"
#include "SerialNumber.h"
#include "ServedGUAMIItem.h"
#include "ServedGUAMIList.h"
#include "ServiceAreaInformation.h"
#include "ServiceAreaInformation-Item.h"
#include "SingleTNLInformation.h"
//#include "SliceOverloadItem.h"
//#include "SliceOverloadList.h"
#include "SliceSupportItem.h"
#include "SliceSupportList.h"
#include "S-NSSAI.h"
#include "SONConfigurationTransfer.h"
#include "SONInformation.h"
#include "SONInformationReply.h"
#include "SONInformationRequest.h"
#include "SourceNGRANNode-ToTargetNGRANNode-TransparentContainer.h"
//#include "SourceOfUEActivityBehaviourInformation.h"
#include "SourceRANNodeID.h"
#include "SourceToTarget-TransparentContainer.h"
#include "SST.h"
#include "SuccessfulOutcome.h"
#include "SupportedTAItem.h"
#include "SupportedTAList.h"
#include "TAC.h"
#include "TAIBroadcastEUTRA.h"
#include "TAIBroadcastEUTRA-Item.h"
#include "TAIBroadcastNR.h"
#include "TAIBroadcastNR-Item.h"
#include "TAICancelledEUTRA.h"
#include "TAICancelledEUTRA-Item.h"
#include "TAICancelledNR.h"
#include "TAICancelledNR-Item.h"
#include "TAI.h"
//#include "TAIListForInactive.h"
//#include "TAIListForInactiveItem.h"
//#include "TAIListForPaging.h"
//#include "TAIListForPagingItem.h"
#include "TAIListForRestart.h"
#include "TAIListForWarning.h"
#include "TargeteNB-ID.h"
#include "TargetID.h"
#include "TargetNGRANNode-ToSourceNGRANNode-TransparentContainer.h"
#include "TargetRANNodeID.h"
#include "TargetToSource-TransparentContainer.h"
#include "TimerApproachForGUAMIRemoval.h"
#include "TimeStamp.h"
#include "TimeToWait.h"
//#include "TimeUEStayedInCellEnhancedGranularity.h"
//#include "TimeUEStayedInCell.h"
//#include "TNLAddressWeightFactor.h"
#include "TNLAssociationItem.h"
#include "TNLAssociationList.h"
#include "TNLAssociationUsage.h"
#include "TNLInformationItem.h"
#include "TNLInformationList.h"
//#include "TNLMappingItem.h"
//#include "TNLMappingList.h"
#include "TraceActivation.h"
#include "TraceDepth.h"
#include "TraceFailureIndication.h"
#include "TraceStart.h"
//#include "TrafficLoadReductionIndication.h"
#include "TransportLayerAddress.h"
#include "TriggeringMessage.h"
#include "TypeOfError.h"
#include "UEAggregateMaximumBitRate.h"
//#include "UE-associatedLogicalNG-connectionItem.h"
//#include "UE-associatedLogicalNG-connectionList.h"
#include "UEContextModificationFailure.h"
#include "UEContextModificationRequest.h"
#include "UEContextModificationResponse.h"
#include "UEContextReleaseCommand.h"
#include "UEContextReleaseComplete.h"
#include "UEContextReleaseRequest.h"
#include "UEContextRequest.h"
//#include "UEHistoryInformation.h"
#include "UEIdentityIndexValue.h"
#include "UE-NGAP-ID-pair.h"
#include "UE-NGAP-IDs.h"
#include "UEPagingIdentity.h"
#include "UEPresence.h"
#include "UEPresenceInAreaOfInterestItem.h"
#include "UEPresenceInAreaOfInterestList.h"
#include "UERadioCapabilityCheckRequest.h"
#include "UERadioCapabilityCheckResponse.h"
#include "UERadioCapabilityForPaging.h"
//#include "UERadioCapabilityForPagingOfEUTRA.h"
//#include "UERadioCapabilityForPagingOfNR.h"
#include "UERadioCapability.h"
//#include "UERadioCapabilityInfoIndication.h"
#include "UESecurityCapabilities.h"
#include "UETNLABindingReleaseRequest.h"
//#include "UL-NGU-UP-TNLModifyItem.h"
//#include "UL-NGU-UP-TNLModifyList.h"
#include "UnavailableGUAMIItem.h"
#include "UnavailableGUAMIList.h"
#include "UnsuccessfulOutcome.h"
#include "UplinkNASTransport.h"
#include "UplinkNonUEAssociatedNRPPaTransport.h"
#include "UplinkRANConfigurationTransfer.h"
#include "UplinkRANStatusTransfer.h"
#include "UplinkUEAssociatedNRPPaTransport.h"
#include "UP-TNLInformation.h"
#include "UPTransportLayerInformation.h"
#include "UserLocationInformationEUTRA.h"
#include "UserLocationInformation.h"
#include "UserLocationInformationN3IWF.h"
#include "UserLocationInformationNR.h"
#include "UserPlaneSecurityInformation.h"
//#include "WarningAreaCoordinates.h"
#include "WarningAreaList.h"
#include "WarningMessageContents.h"
#include "WarningSecurityInfo.h"
#include "WarningType.h"
#include "WriteReplaceWarningRequest.h"
#include "WriteReplaceWarningResponse.h"
#include "xer_decoder.h"
#include "xer_encoder.h"
#include "xer_support.h"
#include "XnExtTLA-Item.h"
#include "XnExtTLAs.h"
#include "XnGTP-TLAs.h"
#include "XnTLAs.h"
#include "XnTNLConfigurationInfo.h"
//#include "ngap_ies_defs.h"

#define maxPrivateIEs                  65535
#define maxProtocolExtensions          65535
#define maxProtocolIEs                 65535
#define maxnoofAllowedAreas            16
#define maxnoofAllowedS_NSSAIs         8
#define maxnoofBPLMNs                  12
#define maxnoofCellIDforWarning        65535
#define maxnoofCellinAoI               256
#define maxnoofCellinEAI               65535
#define maxnoofCellinTAI               65535
#define maxnoofCellsingNB              16384
#define maxnoofCellsinngeNB            256
#define maxnoofCellsinUEHistoryInfo    16
#define maxnoofCellsUEMovingTrajectory 16
#define maxnoofDRBs                    32
#define maxnoofEmergencyAreaID         65535
#define maxnoofEAIforRestart           256
#define maxnoofEPLMNs                  15
#define maxnoofEPLMNsPlusOne           16
#define maxnoofE_RABs                  256
#define maxnoofErrors                  256
#define maxnoofForbTACs                4096
#define maxnoofMultiConnectivities     4
#define maxnoofNGConnectionsToReset    65536
#define maxnoofPDUSessions             256
#define maxnoofPLMNs                   12
#define maxnoofQosFlows                64
#define maxnoofRANNodeinAoI            64
#define maxnoofRecommendedCells        16
#define maxnoofRecommendedRANNodes     16
#define maxnoofAoI                     64
#define maxnoofServedGUAMIs            256
#define maxnoofSliceItems              1024
#define maxnoofTACs                    256
#define maxnoofTAIforInactive          16
#define maxnoofTAIforPaging            16
#define maxnoofTAIforRestart           2048
#define maxnoofTAIforWarning           65535
#define maxnoofTAIinAoI                16
#define maxnoofTNLAssociations         32
#define maxnoofXnExtTLAs               2
#define maxnoofXnGTP_TLAs              16
#define maxnoofXnTLAs                  16

typedef enum _ProcedureCode_enum {
	id_AMFConfigurationUpdate					= 0,
	id_AMFStatusIndication						= 1,
	id_CellTrafficTrace							= 2,
	id_DeactivateTrace							= 3,
	id_DownlinkNASTransport						= 4,
	id_DownlinkNonUEAssociatedNRPPaTransport	= 5,
	id_DownlinkRANConfigurationTransfer			= 6,
	id_DownlinkRANStatusTransfer				= 7,
	id_DownlinkUEAssociatedNRPPaTransport		= 8,
	id_ErrorIndication							= 9,
	id_HandoverCancel							= 10,
	id_HandoverNotification						= 11,
	id_HandoverPreparation						= 12,
	id_HandoverResourceAllocation				= 13,
	id_InitialContextSetup						= 14,
	id_InitialUEMessage							= 15,
	id_LocationReportingControl					= 16,
	id_LocationReportingFailureIndication		= 17,
	id_LocationReport							= 18,
	id_NASNonDeliveryIndication					= 19,
	id_NGReset									= 20,
	id_NGSetup									= 21,
	id_Paging									= 22,
	id_PathSwitchRequest						= 23,
	id_PDUSessionResourceModify					= 24,
	id_PDUSessionResourceModifyIndication		= 25,
	id_PDUSessionResourceRelease				= 26,
	id_PDUSessionResourceSetup					= 27,
	id_PDUSessionResourceNotify					= 28,
	id_PrivateMessage							= 29,
	id_PWSCancel								= 30,
	id_PWSFailureIndication						= 31,
	id_PWSRestartIndication						= 32,
	id_RANConfigurationUpdate					= 33,
	id_RerouteNASRequest						= 34,
	id_TraceFailureIndication					= 35,
	id_TraceStart								= 36,
	id_UECapabilityInfoIndication				= 37,
	id_UEContextModification					= 38,
	id_UEContextRelease							= 39,
	id_UEContextReleaseRequest					= 40,
	id_UERadioCapabilityCheck					= 41,
	id_UETNLABindingRelease						= 42,
	id_UplinkNASTransport						= 43,
	id_UplinkNonUEAssociatedNRPPaTransport		= 44,
	id_UplinkRANConfigurationTransfer			= 45,
	id_UplinkRANStatusTransfer					= 46,
	id_UplinkUEAssociatedNRPPaTransport			= 47,
	id_WriteReplaceWarning						= 48,
} ProcedureCode_enum;

typedef enum _ProtocolIE_ID_enum {
	id_AllowedNSSAI											= 0,
	id_AMFName												= 1,
	id_AMFSetID												= 2,
	id_AMF_TNLAssociationFailedToSetupList					= 3,
	id_AMF_TNLAssociationSetupItem							= 4,
	id_AMF_TNLAssociationSetupList							= 5,
	id_AMF_TNLAssociationToAddItem							= 6,
	id_AMF_TNLAssociationToAddList							= 7,
	id_AMF_TNLAssociationToRemoveItem						= 8,
	id_AMF_TNLAssociationToRemoveList						= 9,
	id_AMF_TNLAssociationToUpdateItem						= 10,
	id_AMF_TNLAssociationToUpdateList						= 11,
	id_AMF_UE_NGAP_ID										= 12,
	id_AssistanceDataForPaging								= 13,
	id_BroadcastCancelledAreaList							= 14,
	id_BroadcastCompletedAreaList							= 15,
	id_CancelAllWarningMessages								= 16,
	id_Cause												= 17,
	id_CellIDListForRestart									= 18,
	id_ConcurrentWarningMessageInd							= 19,
	id_CriticalityDiagnostics								= 20,
	id_DataCodingScheme										= 21,
	id_DefaultPagingDRX										= 22,
	id_DirectForwardingPathAvailability						= 23,
	id_EmergencyAreaIDListForRestart						= 24,
	id_EmergencyFallbackIndicator							= 25,
	id_EUTRA_CGI											= 26,
	id_FiveG_S_TMSI											= 27,
	id_GlobalRANNodeID										= 28,
	id_GUAMI												= 29,
	id_HandoverType											= 30,
	id_IMSVoiceSupportIndicator								= 31,
	id_IndexToRFSP											= 32,
	id_InfoOnRecommendedCellsAndRANNodesForPaging			= 33,
	id_KamfChangeInd										= 34,
	id_LocationReportingRequestType							= 35,
	id_MaskedIMEISV											= 36,
	id_MessageIdentifier									= 37,
	id_MobilityRestrictionList								= 38,
	id_NASC													= 39,
	id_NAS_PDU												= 40,
	id_NewAMF_UE_NGAP_ID									= 41,
	id_NGAP_Message											= 42,
	id_NGRAN_CGI											= 43,
	id_NGRANTraceID											= 44,
	id_NR_CGI												= 45,
	id_NRPPa_PDU											= 46,
	id_NumberOfBroadcastsRequested							= 47,
	id_OldAMF												= 48,
	id_PagingDRX											= 49,
	id_PagingOrigin											= 50,
	id_PagingPriority										= 51,
	id_PDUSessionResourceAdmittedItem						= 52,
	id_PDUSessionResourceAdmittedList						= 53,
	id_PDUSessionResourceFailedToModifyListModRes			= 54,
	id_PDUSessionResourceFailedToSetupList					= 55,
	id_PDUSessionResourceItemHORqd							= 56,
	id_PDUSessionResourceListHORqd							= 57,
	id_PDUSessionResourceModifyItemModCfm					= 58,
	id_PDUSessionResourceModifyItemModInd					= 59,
	id_PDUSessionResourceModifyItemModReq					= 60,
	id_PDUSessionResourceModifyItemModRes					= 61,
	id_PDUSessionResourceModifyListModCfm					= 62,
	id_PDUSessionResourceModifyListModInd					= 63,
	id_PDUSessionResourceModifyListModReq					= 64,
	id_PDUSessionResourceModifyListModRes					= 65,
	id_PDUSessionResourceNotifyItem							= 66,
	id_PDUSessionResourceNotifyList							= 67,
	id_PDUSessionResourceReleasedList						= 68,
	id_PDUSessionResourceSetupItemCxtReq					= 69,
	id_PDUSessionResourceSetupItemCxtRes					= 70,
	id_PDUSessionResourceSetupItemHOReq						= 71,
	id_PDUSessionResourceSetupItemSUReq						= 72,
	id_PDUSessionResourceSetupItemSURes						= 73,
	id_PDUSessionResourceSetupListCxtReq					= 74,
	id_PDUSessionResourceSetupListCxtRes					= 75,
	id_PDUSessionResourceSetupListHOReq						= 76,
	id_PDUSessionResourceSetupListSUReq						= 77,
	id_PDUSessionResourceSetupListSURes						= 78,
	id_PDUSessionResourceSubjectToForwardingItem			= 79,
	id_PDUSessionResourceSubjectToForwardingList			= 80,
	id_PDUSessionResourceToBeSwitchedDLItem					= 81,
	id_PDUSessionResourceToBeSwitchedDLList					= 82,
	id_PDUSessionResourceToBeSwitchedULItem					= 83,
	id_PDUSessionResourceToBeSwitchedULList					= 84,
	id_PDUSessionResourceToReleaseList						= 85,
	id_PLMNSupportList										= 86,
	id_PWSFailedCellIDList									= 87,
	id_RANNodeName											= 88,
	id_RANPagingPriority									= 89,
	id_RANStatusTransfer_TransparentContainer				= 90,
	id_RAN_UE_NGAP_ID										= 91,
	id_RelativeAMFCapacity									= 92,
	id_RepetitionPeriod										= 93,
	id_ResetType											= 94,
	id_RoutingID											= 95,
	id_RRCEstablishmentCause								= 96,
	id_RRCInactiveAssistanceInformation						= 97,
	id_SecurityContext										= 98,
	id_SecurityKey											= 99,
	id_SerialNumber											= 100,
	id_ServedGUAMIList										= 101,
	id_SliceSupportList										= 102,
	id_SONConfigurationTransferDL							= 103,
	id_SONConfigurationTransferUL							= 104,
	id_SourceAMF_UE_NGAP_ID									= 105,
	id_SourceToTarget_TransparentContainer					= 106,
	id_SupportedTAList										= 107,
	id_TAI													= 108,
	id_TAIItem												= 109,
	id_TAIList												= 110,
	id_TAIListForRestart									= 111,
	id_TargetID												= 112,
	id_TargetToSource_TransparentContainer					= 113,
	id_TimeStamp											= 114,
	id_TimeToWait											= 115,
	id_TraceActivation										= 116,
	id_TraceCollectionEntityIPAddress						= 117,
	id_UEAggregateMaximumBitRate							= 118,
	id_UE_associatedLogicalNG_ConnectionItem				= 119,
	id_UE_associatedLogicalNG_ConnectionListResAck			= 120,
	id_UEContextRequest										= 121,
	id_UEIdentityIndexValue									= 122,
	id_UE_NGAP_IDs											= 123,
	id_UEPagingIdentity										= 124,
	id_UEPresenceInAreaOfInterestList						= 125,
	id_UERadioCapability									= 126,
	id_UERadioCapabilityForPaging							= 127,
	id_UESecurityCapabilities								= 128,
	id_UnavailableGUAMIList									= 129,
	id_UserLocationInformation								= 130,
	id_WarningAreaList										= 131,
	id_WarningMessageContents								= 132,
	id_WarningSecurityInfo									= 133,
	id_WarningType											= 134,
} ProtocolIE_ID_enum;



#define MACRO_ID_TO_CELL_IDENTITY(mACRO, cELL_iD, bITsTRING) \
do {                                                    \
    (bITsTRING)->buf = calloc(5, sizeof(uint8_t));      \
    (bITsTRING)->buf[0] = ((mACRO) >> 12);              \
    (bITsTRING)->buf[1] = (mACRO) >> 4;                 \
    (bITsTRING)->buf[2] = (((mACRO) & 0x0f) << 4) | ((cELL_iD) >> 4);        \
    (bITsTRING)->buf[3] = ((cELL_iD) & 0x0f) << 4;        \
    (bITsTRING)->size = 5;                              \
    (bITsTRING)->bits_unused = 4;                       \
} while(0)

#define MACRO_ENB_ID_TO_BIT_STRING(mACRO, bITsTRING)    \
do {                                                    \
    (bITsTRING)->buf = calloc(3, sizeof(uint8_t));      \
    (bITsTRING)->buf[0] = ((mACRO) >> 12);              \
    (bITsTRING)->buf[1] = (mACRO) >> 4;                 \
    (bITsTRING)->buf[2] = ((mACRO) & 0x0f) << 4;        \
    (bITsTRING)->size = 3;                              \
    (bITsTRING)->bits_unused = 4;                       \
} while(0)

#define MCC_HUNDREDS(vALUE) \
    ((vALUE) / 100)
/* When MNC is only composed of 2 digits, set the hundreds unit to 0xf */
#define MNC_HUNDREDS(vALUE, mNCdIGITlENGTH) \
    ( mNCdIGITlENGTH == 2 ? 15 : (vALUE) / 100)
#define MCC_MNC_DECIMAL(vALUE) \
    (((vALUE) / 10) % 10)
#define MCC_MNC_DIGIT(vALUE) \
    ((vALUE) % 10)

#define MCC_MNC_TO_PLMNID(mCC, mNC, mNCdIGITlENGTH, oCTETsTRING)               \
do {                                                                           \
    (oCTETsTRING)->buf = calloc(3, sizeof(uint8_t));                           \
    (oCTETsTRING)->buf[0] = (MCC_MNC_DECIMAL(mCC) << 4) | MCC_HUNDREDS(mCC);   \
    (oCTETsTRING)->buf[1] = (MNC_HUNDREDS(mNC,mNCdIGITlENGTH) << 4) | MCC_MNC_DIGIT(mCC);     \
    (oCTETsTRING)->buf[2] = (MCC_MNC_DIGIT(mNC) << 4) | MCC_MNC_DECIMAL(mNC);  \
    (oCTETsTRING)->size = 3;                                                   \
} while(0)

/* Convert an integer on 16 bits to the given bUFFER */
#define INT16_TO_BUFFER(x, buf) \
do {                            \
    (buf)[0] = (x) >> 8;        \
    (buf)[1] = (x);             \
} while(0)


#define INT16_TO_OCTET_STRING(x, aSN)           \
do {                                            \
    (aSN)->buf = calloc(2, sizeof(uint8_t));    \
    (aSN)->size = 2;              \
    INT16_TO_BUFFER(x, (aSN)->buf);             \
} while(0)

#define TAC_TO_OCTET_STRING(x, aSN)           \
do {                                            \
    (aSN)->buf = calloc(3, sizeof(uint8_t));    \
    (aSN)->size = 3;              \
    (aSN)->buf[0] = (x) >> 16;        \
    (aSN)->buf[1] = (x) >> 8;             \
    (aSN)->buf[2] = (x);             \
} while(0)

int ngap_encode_pdu(NGAP_PDU_t *pdu, uint8_t **buffer, uint32_t *len) {
	ssize_t encoded;
	printf("------------pdu in---------------------\n");
	xer_fprint(stdout, &asn_DEF_NGAP_PDU, (void *) pdu);

	encoded = aper_encode_to_new_buffer(&asn_DEF_NGAP_PDU, 0, pdu,
			(void **) buffer);

	if (encoded < 0) {
		return -1;
	}

	*len = encoded;

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_NGAP_PDU, pdu);
	return encoded;
}
int ngap_decode_pdu(NGAP_PDU_t *pdu, uint8_t *data, uint32_t data_len)
{

	asn_dec_rval_t dec_ret;
	dec_ret = aper_decode(NULL, &asn_DEF_NGAP_PDU, (void **) &pdu, data,
			data_len, 0, 0);

	if (dec_ret.code != RC_OK) {
		printf("dec_ret.code = %d != RC_OK\n",dec_ret.code);
		return -1;
	}
	printf("------------pdu out---------------------\n");
	xer_fprint(stdout, &asn_DEF_NGAP_PDU, pdu);
	return 0;
}
int test_initialue_msg (void)
{

	NGAP_PDU_t pdu = {0};
	NGAP_PDU_t pdu_out = {0};
	InitialUEMessage_IEs_t *ie;
	InitialUEMessage_t *out;
	int mcc = 208;
	int mnc = 93;
	int tac = 2;
	int ngenb_id = 0xe00;
	int encoded;
	void *buffer;
//	memset(&pdu, 0, sizeof(pdu));
	pdu.present = NGAP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = id_InitialUEMessage;
	pdu.choice.initiatingMessage.criticality = Criticality_ignore;
	pdu.choice.initiatingMessage.value.present =
			InitiatingMessage__value_PR_InitialUEMessage;
	out = &pdu.choice.initiatingMessage.value.choice.InitialUEMessage;

	/*add RAN_UE_NGAP_ID - mandatory */
	ie = (InitialUEMessage_IEs_t *) calloc(1, sizeof(InitialUEMessage_IEs_t));
	memset(ie,0,sizeof(InitialUEMessage_IEs_t));
	ie->id = id_RAN_UE_NGAP_ID;
	ie->criticality = Criticality_reject;
	ie->value.present = InitialUEMessage_IEs__value_PR_RAN_UE_NGAP_ID;
	ie->value.choice.RAN_UE_NGAP_ID = ngenb_id; // fake
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	/*add NAS PDU - mandatory */
	ie = (InitialUEMessage_IEs_t *) calloc(1, sizeof(InitialUEMessage_IEs_t));
	memset(ie,0,sizeof(InitialUEMessage_IEs_t));
	ie->id = id_NAS_PDU;
	ie->criticality = Criticality_reject;
	ie->value.present = InitialUEMessage_IEs__value_PR_NAS_PDU;
	INT16_TO_OCTET_STRING(1,
				&ie->value.choice.NAS_PDU);
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	/*add UserLocationInformation - mandatory */

	ie = (InitialUEMessage_IEs_t *) calloc(1, sizeof(InitialUEMessage_IEs_t));
	memset(ie,0,sizeof(InitialUEMessage_IEs_t));
	ie->id = id_UserLocationInformation;
	ie->criticality = Criticality_reject;
	ie->value.present = InitialUEMessage_IEs__value_PR_UserLocationInformation;

	UserLocationInformation_t location;
    memset(&location, 0, sizeof(UserLocationInformation_t));
    location.present = UserLocationInformation_PR_userLocationInformationNR;

	MACRO_ID_TO_CELL_IDENTITY(1, 0,
			&location.choice.userLocationInformationNR.nR_CGI.nRCellIdentity);

	MCC_MNC_TO_PLMNID(mcc, mnc, 2,
			&location.choice.userLocationInformationNR.tAI.pLMNIdentity);
	MCC_MNC_TO_PLMNID(mcc, mnc, 2,
			&location.choice.userLocationInformationNR.nR_CGI.pLMNIdentity);

	TAC_TO_OCTET_STRING(tac,
			&location.choice.userLocationInformationNR.tAI.tAC);
    memcpy(&ie->value.choice.UserLocationInformation, &location,sizeof(UserLocationInformation_t));

	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	if( (ngap_encode_pdu(&pdu,&buffer,&encoded)) < 0)
	{
		printf("Failed to encode pdu\n");
	}

	if( (ngap_decode_pdu(&pdu_out, buffer, encoded)) < 0)
	{
		printf("Failed to decode pdu\n");
	}
    return 0;
}
int test_UplinkNASTransport_msg (void)
{
	NGAP_PDU_t pdu = { 0 };
	NGAP_PDU_t pdu_out = { 0 };
	UplinkNASTransport_IEs_t *ie;
	UplinkNASTransport_t *out;
	int mcc = 208;
	int mnc = 93;
	int tac = 2;
	int ngenb_id = 0xe00;
	int encoded;
	void *buffer;

	memset(&pdu, 0, sizeof(pdu));
	pdu.present = NGAP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = id_UplinkNASTransport;
	pdu.choice.initiatingMessage.criticality = Criticality_ignore;
	pdu.choice.initiatingMessage.value.present =
			InitiatingMessage__value_PR_UplinkNASTransport;
	out = &pdu.choice.initiatingMessage.value.choice.UplinkNASTransport;

	AMF_UE_NGAP_ID_t AMF_UE_NGAP_ID = 1;
	RAN_UE_NGAP_ID_t RAN_UE_NGAP_ID = 1;
	UserLocationInformation_t location = { 0 };
	location.present = UserLocationInformation_PR_userLocationInformationNR;

	MACRO_ID_TO_CELL_IDENTITY(1, 0,
			&location.choice.userLocationInformationNR.nR_CGI.nRCellIdentity);

	MCC_MNC_TO_PLMNID(mcc, mnc, 2,
			&location.choice.userLocationInformationNR.tAI.pLMNIdentity);
	MCC_MNC_TO_PLMNID(mcc, mnc, 2,
			&location.choice.userLocationInformationNR.nR_CGI.pLMNIdentity);

	TAC_TO_OCTET_STRING(tac,
			&location.choice.userLocationInformationNR.tAI.tAC);

	ie = (UplinkNASTransport_IEs_t *) calloc(1,
			sizeof(UplinkNASTransport_IEs_t));
	memset(ie, 0, sizeof(UplinkNASTransport_IEs_t));
	ie->id = id_AMF_UE_NGAP_ID;
	ie->criticality = Criticality_reject;
	ie->value.present = UplinkNASTransport_IEs__value_PR_AMF_UE_NGAP_ID;
	ie->value.choice.AMF_UE_NGAP_ID = AMF_UE_NGAP_ID;
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	ie = (UplinkNASTransport_IEs_t *) calloc(1,
			sizeof(UplinkNASTransport_IEs_t));
	memset(ie, 0, sizeof(UplinkNASTransport_IEs_t));
	ie->id = id_RAN_UE_NGAP_ID;
	ie->criticality = Criticality_reject;
	ie->value.present = UplinkNASTransport_IEs__value_PR_RAN_UE_NGAP_ID;
	ie->value.choice.RAN_UE_NGAP_ID = RAN_UE_NGAP_ID; // fake
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	/*add NAS PDU - mandatory */
	ie = (UplinkNASTransport_IEs_t *) calloc(1, sizeof(UplinkNASTransport_IEs_t));
	memset(ie,0,sizeof(UplinkNASTransport_IEs_t));
	ie->id = id_NAS_PDU;
	ie->criticality = Criticality_reject;
	ie->value.present = UplinkNASTransport_IEs__value_PR_NAS_PDU;
	ie->value.choice.NAS_PDU.buf = strdup("12345678");
	ie->value.choice.NAS_PDU.size = 9;
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	ie = (UplinkNASTransport_IEs_t *) calloc(1,
			sizeof(UplinkNASTransport_IEs_t));
	memset(ie, 0, sizeof(UplinkNASTransport_IEs_t));
	ie->id = id_UserLocationInformation;
	ie->criticality = Criticality_ignore;
	ie->value.present = UplinkNASTransport_IEs__value_PR_UserLocationInformation;
	memcpy(&ie->value.choice.UserLocationInformation, &location,
			sizeof(UserLocationInformation_t));
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	if ((ngap_encode_pdu(&pdu, &buffer, &encoded)) < 0) {
		printf("Failed to encode pdu\n");
	}

	if ((ngap_decode_pdu(&pdu_out, buffer, encoded)) < 0) {
		printf("Failed to decode pdu\n");
	}

	return 0;
}
int test_LocationReport_msg (void)
{
	NGAP_PDU_t pdu = { 0 };
	NGAP_PDU_t pdu_out = { 0 };
	LocationReportIEs_t *ie;
	LocationReport_t *out;

	int mcc = 208;
	int mnc = 93;
	int tac = 2;
	int ngenb_id = 0xe00;
	int encoded;
	void *buffer;

	pdu.present = NGAP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = id_LocationReport;
	pdu.choice.initiatingMessage.criticality = Criticality_ignore;
	pdu.choice.initiatingMessage.value.present =
			InitiatingMessage__value_PR_LocationReport;
	out = &pdu.choice.initiatingMessage.value.choice.LocationReport;
	/*add AMF_UE_NGAP_ID - mandatory */
	ie = (LocationReportIEs_t *) calloc(1,
			sizeof(LocationReportIEs_t));
	memset(ie, 0, sizeof(LocationReportIEs_t));
	ie->id = id_AMF_UE_NGAP_ID;
	ie->criticality = Criticality_reject;
	ie->value.present = LocationReportIEs__value_PR_AMF_UE_NGAP_ID;
	ie->value.choice.AMF_UE_NGAP_ID = 1;
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);
	/*add RAN_UE_NGAP_ID - mandatory */
	ie = (UplinkNASTransport_IEs_t *) calloc(1,
			sizeof(UplinkNASTransport_IEs_t));
	memset(ie, 0, sizeof(UplinkNASTransport_IEs_t));
	ie->id = id_RAN_UE_NGAP_ID;
	ie->criticality = Criticality_reject;
	ie->value.present = LocationReportIEs__value_PR_RAN_UE_NGAP_ID;
	ie->value.choice.RAN_UE_NGAP_ID = 1; // fake
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	UserLocationInformation_t location = { 0 };
	location.present = UserLocationInformation_PR_userLocationInformationNR;

	MACRO_ID_TO_CELL_IDENTITY(1,0,
			&location.choice.userLocationInformationNR.nR_CGI.nRCellIdentity);

	MCC_MNC_TO_PLMNID(mcc, mnc, 2,
			&location.choice.userLocationInformationNR.tAI.pLMNIdentity);
	MCC_MNC_TO_PLMNID(mcc, mnc, 2,
			&location.choice.userLocationInformationNR.nR_CGI.pLMNIdentity);

	TAC_TO_OCTET_STRING(tac,
			&location.choice.userLocationInformationNR.tAI.tAC);

	ie = (LocationReportIEs_t *) calloc(1, sizeof(LocationReportIEs_t));
	memset(ie, 0, sizeof(LocationReportIEs_t));
	ie->id = id_UserLocationInformation;
	ie->criticality = Criticality_ignore;
	ie->value.present =
			LocationReportIEs__value_PR_UserLocationInformation;
	memcpy(&ie->value.choice.UserLocationInformation, &location,
			sizeof(UserLocationInformation_t));
		ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);


	ie = (LocationReportIEs_t *) calloc(1, sizeof(LocationReportIEs_t));
	memset(ie, 0, sizeof(LocationReportIEs_t));
	ie->id = id_LocationReportingRequestType;
	ie->criticality = Criticality_ignore;
	ie->value.present = LocationReportIEs__value_PR_LocationReportingRequestType;
	ie->value.choice.LocationReportingRequestType.eventType = 0;
	ie->value.choice.LocationReportingRequestType.reportArea = 0;
	ASN_SEQUENCE_ADD(&out->protocolIEs.list, ie);

	if ((ngap_encode_pdu(&pdu, &buffer, &encoded)) < 0) {
		printf("Failed to encode pdu\n");
	}

	if ((ngap_decode_pdu(&pdu_out, buffer, encoded)) < 0) {
		printf("Failed to decode pdu\n");
	}
	return 0;
}



int main ()
{
	printf("----------------------------test_initialue_msg-----------------------------------\n\n");
	sleep(1);
	test_initialue_msg();
	printf("----------------------------test_UplinkNASTransport_msg-----------------------------------\n\n");
	sleep(1);
	test_UplinkNASTransport_msg ();
	printf("----------------------------test_LocationReport_msg-----------------------------------\n\n");
	sleep(1);
	test_LocationReport_msg();
	return 0;
}

