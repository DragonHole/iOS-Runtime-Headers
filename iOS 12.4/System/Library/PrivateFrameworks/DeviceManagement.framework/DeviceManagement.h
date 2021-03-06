#import <DeviceManagement/DMFActivityTransactionRequest.h>
#import <DeviceManagement/DMFApp.h>
#import <DeviceManagement/DMFAppManagementInformation.h>
#import <DeviceManagement/DMFApplication.h>
#import <DeviceManagement/DMFApplicationInstallProgress.h>
#import <DeviceManagement/DMFApplicationPolicyMonitor.h>
#import <DeviceManagement/DMFAppRequest.h>
#import <DeviceManagement/DMFAssignUserRequest.h>
#import <DeviceManagement/DMFBatchRequestOperation.h>
#import <DeviceManagement/DMFBeginTransactionRequest.h>
#import <DeviceManagement/DMFBeginTransactionResultObject.h>
#import <DeviceManagement/DMFBook.h>
#import <DeviceManagement/DMFBookmark.h>
#import <DeviceManagement/DMFCertificate.h>
#import <DeviceManagement/DMFClearActivationLockBypassCodeRequest.h>
#import <DeviceManagement/DMFClearDevicePasscodeRequest.h>
#import <DeviceManagement/DMFClearRestrictionsPasswordRequest.h>
#import <DeviceManagement/DMFConfigurationOrganization.h>
#import <DeviceManagement/DMFConfigurationSource.h>
#import <DeviceManagement/DMFConfigurationSourceClient.h>
#import <DeviceManagement/DMFConnection.h>
#import <DeviceManagement/DMFControlGroupIdentifier.h>
#import <DeviceManagement/DMFControlSessionIdentifier.h>
#import <DeviceManagement/DMFCreateConfigurationOrganizationRequest.h>
#import <DeviceManagement/DMFDeactivateConfigurationOrganizationRequest.h>
#import <DeviceManagement/DMFDeleteUserRequest.h>
#import <DeviceManagement/DMFDevice.h>
#import <DeviceManagement/DMFDevicePropertyNotificationSubscriptionRequest.h>
#import <DeviceManagement/DMFDisableLostModeRequest.h>
#import <DeviceManagement/DMFEchoRequest.h>
#import <DeviceManagement/DMFEchoResultObject.h>
#import <DeviceManagement/DMFEffectivePolicy.h>
#import <DeviceManagement/DMFPrioritizedPolicy.h>
#import <DeviceManagement/DMFEnableLostModeRequest.h>
#import <DeviceManagement/DMFEndTransactionRequest.h>
#import <DeviceManagement/DMFEraseDeviceRequest.h>
#import <DeviceManagement/DMFFetchActivationLockBypassCodeRequest.h>
#import <DeviceManagement/DMFFetchActivationLockBypassCodeResultObject.h>
#import <DeviceManagement/DMFFetchApplicationsRequest.h>
#import <DeviceManagement/DMFFetchApplicationsResultObject.h>
#import <DeviceManagement/DMFFetchAppsRequest.h>
#import <DeviceManagement/DMFFetchAppsResultObject.h>
#import <DeviceManagement/DMFFetchAvailableOSUpdatesRequest.h>
#import <DeviceManagement/DMFFetchAvailableOSUpdatesResultObject.h>
#import <DeviceManagement/DMFFetchCertificatesRequest.h>
#import <DeviceManagement/DMFFetchCertificatesResultObject.h>
#import <DeviceManagement/DMFFetchClassroomInstructorEndpointRequest.h>
#import <DeviceManagement/DMFFetchClassroomInstructorEndpointResultObject.h>
#import <DeviceManagement/DMFFetchConfigurationOrganizationsRequest.h>
#import <DeviceManagement/DMFFetchConfigurationOrganizationsResultObject.h>
#import <DeviceManagement/DMFFetchConfigurationSourceSyncTokenRequest.h>
#import <DeviceManagement/DMFFetchConfigurationSourceSyncTokenResultObject.h>
#import <DeviceManagement/DMFFetchControlGroupIdentifiersRequest.h>
#import <DeviceManagement/DMFFetchControlGroupIdentifiersResultObject.h>
#import <DeviceManagement/DMFFetchDeclarationCapabilitiesRequest.h>
#import <DeviceManagement/DMFFetchDeclarationCapabilitiesResultObject.h>
#import <DeviceManagement/DMFFetchDeclarationsRequest.h>
#import <DeviceManagement/DMFFetchDeclarationsResultObject.h>
#import <DeviceManagement/DMFFetchDevicePropertiesRequest.h>
#import <DeviceManagement/DMFFetchDevicePropertiesResultObject.h>
#import <DeviceManagement/DMFDevicePropertiesResultObject.h>
#import <DeviceManagement/DMFFetchDeviceUnlockTokenRequest.h>
#import <DeviceManagement/DMFFetchDeviceUnlockTokenResultObject.h>
#import <DeviceManagement/DMFFetchDMDStateRequest.h>
#import <DeviceManagement/DMFFetchDMDStateResultObject.h>
#import <DeviceManagement/DMFFetchGlobalRestrictionsRequest.h>
#import <DeviceManagement/DMFFetchGlobalRestrictionsResultObject.h>
#import <DeviceManagement/DMFFetchInstalledApplicationsRequest.h>
#import <DeviceManagement/DMFFetchInstalledApplicationsResultObject.h>
#import <DeviceManagement/DMFFetchInstalledCertificatesRequest.h>
#import <DeviceManagement/DMFFetchInstalledCertificatesResultObject.h>
#import <DeviceManagement/DMFFetchInstalledProfilesRequest.h>
#import <DeviceManagement/DMFFetchInstalledProfilesResultObject.h>
#import <DeviceManagement/DMFFetchInstalledProvisioningProfilesRequest.h>
#import <DeviceManagement/DMFFetchInstalledProvisioningProfilesResultObject.h>
#import <DeviceManagement/DMFFetchLastLoginDateRequest.h>
#import <DeviceManagement/DMFFetchLastLoginDateResultObject.h>
#import <DeviceManagement/DMFFetchLocationRequest.h>
#import <DeviceManagement/DMFFetchLocationResultObject.h>
#import <DeviceManagement/DMFFetchManagedBooksRequest.h>
#import <DeviceManagement/DMFFetchManagedBooksResultObject.h>
#import <DeviceManagement/DMFFetchOSUpdateStatusRequest.h>
#import <DeviceManagement/DMFFetchOSUpdateStatusResultObject.h>
#import <DeviceManagement/DMFFetchProfilesRequest.h>
#import <DeviceManagement/DMFFetchProfilesResultObject.h>
#import <DeviceManagement/DMFFetchProvisioningProfilesRequest.h>
#import <DeviceManagement/DMFFetchProvisioningProfilesResultObject.h>
#import <DeviceManagement/DMFFetchRestrictionsRequest.h>
#import <DeviceManagement/DMFFetchRestrictionsResultObject.h>
#import <DeviceManagement/DMFFetchSafariBookmarksRequest.h>
#import <DeviceManagement/DMFFetchSafariBookmarksResultObject.h>
#import <DeviceManagement/DMFFetchScreenshotRequest.h>
#import <DeviceManagement/DMFFetchScreenshotResultObject.h>
#import <DeviceManagement/DMFFetchSecurityInformationRequest.h>
#import <DeviceManagement/DMFFetchSecurityInformationResultObject.h>
#import <DeviceManagement/DMFFetchStreamEventsRequest.h>
#import <DeviceManagement/DMFFetchStreamEventsResultObject.h>
#import <DeviceManagement/DMFFetchUsersRequest.h>
#import <DeviceManagement/DMFFetchUsersResultObject.h>
#import <DeviceManagement/DMFiCloudPolicyMonitor.h>
#import <DeviceManagement/DMFInstallAppRequest.h>
#import <DeviceManagement/DMFInstallConfigurationRequest.h>
#import <DeviceManagement/DMFInstalledApplication.h>
#import <DeviceManagement/DMFInstalledApplicationInstallProgress.h>
#import <DeviceManagement/DMFInstalledCertificate.h>
#import <DeviceManagement/DMFInstalledProfile.h>
#import <DeviceManagement/DMFInstalledPayload.h>
#import <DeviceManagement/DMFInstalledProvisioningProfile.h>
#import <DeviceManagement/DMFInstallManagedBookRequest.h>
#import <DeviceManagement/DMFInstallManagedBookResultObject.h>
#import <DeviceManagement/DMFInstallProfileRequest.h>
#import <DeviceManagement/DMFInstallProvisioningProfileRequest.h>
#import <DeviceManagement/DMFInviteUserToVPPRequest.h>
#import <DeviceManagement/DMFJoinControlGroupRequest.h>
#import <DeviceManagement/DMFLeaveControlGroupRequest.h>
#import <DeviceManagement/DMFLockDeviceRequest.h>
#import <DeviceManagement/DMFLogOutUserRequest.h>
#import <DeviceManagement/DMFLogoutUserRequest.h>
#import <DeviceManagement/DMFManagementLockRequest.h>
#import <DeviceManagement/DMFManagementUnlockRequest.h>
#import <DeviceManagement/DMFMDMv1InstallAppRequest.h>
#import <DeviceManagement/DMFMDMv1InstallAppResultObject.h>
#import <DeviceManagement/DMFMDMv1StartManagingAppRequest.h>
#import <DeviceManagement/DMFMDMv1UpdateAppRequest.h>
#import <DeviceManagement/DMFOpenAppRequest.h>
#import <DeviceManagement/DMFOpenURLRequest.h>
#import <DeviceManagement/DMFOSStateHandler.h>
#import <DeviceManagement/DMFOSUpdate.h>
#import <DeviceManagement/DMFPlayLostModeSoundRequest.h>
#import <DeviceManagement/DMFPolicyMonitor.h>
#import <DeviceManagement/DMFPolicyRegistration.h>
#import <DeviceManagement/DMFProcessDeclarationsRequest.h>
#import <DeviceManagement/DMFProcessStatusRequest.h>
#import <DeviceManagement/DMFProfile.h>
#import <DeviceManagement/DMFProfilePayload.h>
#import <DeviceManagement/DMFProvisioningProfile.h>
#import <DeviceManagement/DMFRefreshCellularPlansRequest.h>
#import <DeviceManagement/DMFRefreshStatusRequest.h>
#import <DeviceManagement/DMFRefreshStatusResultObject.h>
#import <DeviceManagement/DMFRegisterConfigurationSourceRequest.h>
#import <DeviceManagement/DMFRegisterUserAgentRequest.h>
#import <DeviceManagement/DMFRemoveAppRequest.h>
#import <DeviceManagement/DMFRemoveConfigurationRequest.h>
#import <DeviceManagement/DMFRemoveManagedBookRequest.h>
#import <DeviceManagement/DMFRemoveOSUpdateRequest.h>
#import <DeviceManagement/DMFRemoveProfileRequest.h>
#import <DeviceManagement/DMFRemoveProtectedProfileRequest.h>
#import <DeviceManagement/DMFRemoveProvisioningProfileRequest.h>
#import <DeviceManagement/DMFReportingRequirements.h>
#import <DeviceManagement/DMFRequestAirPlayMirroringRequest.h>
#import <DeviceManagement/DMFRequestAirPlayMirroringResultObject.h>
#import <DeviceManagement/DMFRestartDeviceRequest.h>
#import <DeviceManagement/DMFScheduleOSUpdateRequest.h>
#import <DeviceManagement/DMFScheduleOSUpdateResultObject.h>
#import <DeviceManagement/DMFScreenTimePolicyMonitor.h>
#import <DeviceManagement/DMFSecurityInformation.h>
#import <DeviceManagement/DMFSendEventRequest.h>
#import <DeviceManagement/DMFSetAirPlayRouteRequest.h>
#import <DeviceManagement/DMFSetAppAnalyticsEnabledRequest.h>
#import <DeviceManagement/DMFSetAppConfigurationRequest.h>
#import <DeviceManagement/DMFSetAppVPNUUIDRequest.h>
#import <DeviceManagement/DMFSetBluetoothEnabledRequest.h>
#import <DeviceManagement/DMFSetDataRoamingEnabledRequest.h>
#import <DeviceManagement/DMFSetDeclarationsRequest.h>
#import <DeviceManagement/DMFSetDeviceNameRequest.h>
#import <DeviceManagement/DMFSetDiagnosticSubmissionEnabledRequest.h>
#import <DeviceManagement/DMFSetInterfaceOrientationRequest.h>
#import <DeviceManagement/DMFSetMaximumResidentUsersRequest.h>
#import <DeviceManagement/DMFSetPasscodeLockGracePeriodRequest.h>
#import <DeviceManagement/DMFSetPersonalHotspotEnabledRequest.h>
#import <DeviceManagement/DMFSetVoiceRoamingEnabledRequest.h>
#import <DeviceManagement/DMFSetVolumeRequest.h>
#import <DeviceManagement/DMFSetWallpaperRequest.h>
#import <DeviceManagement/DMFShutDownDeviceRequest.h>
#import <DeviceManagement/DMFStartAppLockRequest.h>
#import <DeviceManagement/DMFStopAirPlayMirroringRequest.h>
#import <DeviceManagement/DMFStopAppLockRequest.h>
#import <DeviceManagement/DMFStopManagingAppRequest.h>
#import <DeviceManagement/DMFStopManagingBooksRequest.h>
#import <DeviceManagement/DMFTaskRequest.h>
#import <DeviceManagement/DMFTriggerDiagnosticsRequest.h>
#import <DeviceManagement/DMFUnregisterUserAgentRequest.h>
#import <DeviceManagement/DMFUpdateAppRequest.h>
#import <DeviceManagement/DMFUpdateDeclarationsRequest.h>
#import <DeviceManagement/DMFUpdateEnqueuedCommandsRequest.h>
#import <DeviceManagement/DMFUpdatePickableAirPlayRoutesRequest.h>
#import <DeviceManagement/DMFUser.h>
#import <DeviceManagement/DMFValidateApplicationsRequest.h>
#import <DeviceManagement/DMFWebsitePolicyMonitor.h>
