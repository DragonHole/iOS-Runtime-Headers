/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXSpringBoardServerSideAppManagerDelegate.h>
#import <AXSpringBoardServerInstance/AXSiriShortcutsViewControllerDelegate.h>
#import <AXSpringBoardServerInstance/AXSpringBoardServerInstanceDelegate.h>

@protocol BSInvalidatable;
@class NSMutableArray, AXSpringBoardServerAlertManager, UIWindow, AXAssertion, AXSpringBoardServerSideAppManager, NSString;

@interface AXSpringBoardServerHelper : NSObject <AXSpringBoardServerSideAppManagerDelegate, AXSiriShortcutsViewControllerDelegate, AXSpringBoardServerInstanceDelegate> {

	/*^block*/id _alertHandler;
	NSMutableArray* _visibleTripleClickItems;
	BOOL _shouldOverrideInterfaceOrientation;
	NSMutableArray* _notificationObservers;
	AXSpringBoardServerAlertManager* _alertManager;
	UIWindow* _presentationWindow;
	id<BSInvalidatable> _dimTimerAssertion;
	AXAssertion* _disableSystemGesturesAssertionForAlert;

}

@property (nonatomic,readonly) AXSpringBoardServerSideAppManager * sideAppManager; 
@property (nonatomic,retain) AXSpringBoardServerAlertManager * alertManager;                    //@synthesize alertManager=_alertManager - In the implementation block
@property (nonatomic,retain) UIWindow * presentationWindow;                                     //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> dimTimerAssertion;                             //@synthesize dimTimerAssertion=_dimTimerAssertion - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertionForAlert;              //@synthesize disableSystemGesturesAssertionForAlert=_disableSystemGesturesAssertionForAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_iconController;
+(id)_applicationController;
+(id)sharedServerHelper;
+(id)_globalIdleTimeCoordinator;
+(id)_assistantController;
+(id)_lockScreenManager;
+(id)_uiController;
+(id)_backlightController;
+(id)_awayController;
+(id)_syncController;
+(id)_wallpaperController;
-(id)init;
-(void)dealloc;
-(void)setPresentationWindow:(UIWindow *)arg1 ;
-(UIWindow *)presentationWindow;
-(void)setReachabilityActive:(BOOL)arg1 ;
-(void)serverInstance:(id)arg1 setReachabilityEnabled:(BOOL)arg2 ;
-(void)serverInstance:(id)arg1 performVoiceShortcutWithIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(BOOL)isScreenLockedWithServerInstance:(id)arg1 ;
-(BOOL)isPasscodeRequiredOnLockWithServerInstance:(id)arg1 ;
-(BOOL)isSystemSleepingWithServerInstance:(id)arg1 ;
-(BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1 ;
-(BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1 ;
-(BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1 ;
-(id)installedAppsWithServerInstance:(id)arg1 ;
-(void)wakeUpDeviceIfNecessaryWithServerInstance:(id)arg1 ;
-(void)unlockDeviceWithServerInstance:(id)arg1 ;
-(void)rebootDeviceWithServerInstance:(id)arg1 ;
-(BOOL)isMediaPlayingWithServerInstance:(id)arg1 forBundleId:(id)arg2 ;
-(void)serverInstance:(id)arg1 pauseMedia:(BOOL)arg2 forBundleId:(id)arg3 ;
-(BOOL)hasActiveCallWithServerInstance:(id)arg1 ;
-(BOOL)hasActiveEndpointCallWithServerInstance:(id)arg1 ;
-(BOOL)hasActiveOrPendingCallWithServerInstance:(id)arg1 ;
-(BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg1 ;
-(BOOL)isMakingEmergencyCallWithServerInstance:(id)arg1 ;
-(BOOL)isNotificationCenterVisibleWithServerInstance:(id)arg1 ;
-(BOOL)isScreenshotWindowVisibleWithServerInstance:(id)arg1 ;
-(BOOL)isNotificationVisibleWithServerInstance:(id)arg1 ;
-(void)toggleNotificationCenterWithServerInstance:(id)arg1 ;
-(BOOL)isControlCenterVisibleWithServerInstance:(id)arg1 ;
-(BOOL)serverInstance:(id)arg1 showNotificationCenter:(BOOL)arg2 ;
-(BOOL)serverInstance:(id)arg1 showControlCenter:(BOOL)arg2 ;
-(void)armApplePayWithServerInstance:(id)arg1 ;
-(void)toggleDockWithServerInstance:(id)arg1 ;
-(BOOL)isDockVisibleWithServerInstance:(id)arg1 ;
-(BOOL)isStatusBarNativeFocusableWithServerInstance:(id)arg1 ;
-(BOOL)isShowingNonSystemAppWithServerInstance:(id)arg1 ;
-(BOOL)isShowingHomescreenWithServerInstance:(id)arg1 ;
-(BOOL)isAppSwitcherVisibleWithServerInstance:(id)arg1 ;
-(void)openAppSwitcherWithServerInstance:(id)arg1 ;
-(void)dismissAppSwitcherWithServerInstance:(id)arg1 ;
-(void)simulateEdgePressHaptics:(id)arg1 ;
-(void)toggleSpotlightWithServerInstance:(id)arg1 ;
-(void)revealSpotlightWithServerInstance:(id)arg1 ;
-(BOOL)isDarkModeActiveWithServiceInstance:(id)arg1 ;
-(BOOL)toggleDarkModeWithServerInstance:(id)arg1 ;
-(BOOL)isGuidedAccessActiveWithServerInstance:(id)arg1 ;
-(BOOL)isSpotlightVisibleWithServerInstance:(id)arg1 ;
-(BOOL)dismissSiriWithServerInstance:(id)arg1 ;
-(BOOL)isSiriVisibleWithServerInstance:(id)arg1 ;
-(BOOL)isPasscodeLockVisibleWithServerInstance:(id)arg1 ;
-(void)openVoiceControlWithServerInstance:(id)arg1 ;
-(BOOL)isVoiceControlRunningWithServerInstance:(id)arg1 ;
-(BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg1 ;
-(id)allowedMedusaGesturesWithServerInstance:(id)arg1 ;
-(BOOL)serverInstance:(id)arg1 performMedusaGesture:(unsigned long long)arg2 ;
-(id)medusaAppsWithServerInstance:(id)arg1 ;
-(void)serverInstance:(id)arg1 setDockIconActivationMode:(unsigned long long)arg2 ;
-(BOOL)canSetDockIconActivationModeForServerInstance:(id)arg1 ;
-(id)serverInstance:(id)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2 ;
-(BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)arg1 ;
-(id)focusedAppPIDWithServerInstance:(id)arg1 ;
-(int)purpleBuddyPIDWithServerInstance:(id)arg1 ;
-(id)runningAppPIDsWithServerInstance:(id)arg1 ;
-(BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg1 withServerInstance:(id)arg2 ;
-(BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg1 ;
-(BOOL)isSettingsAppFrontmostWithServerInstance:(id)arg1 ;
-(BOOL)isMultiTaskingActive;
-(id)focusedAppsWithServerInstance:(id)arg1 ;
-(void)forceLoadGAXBundleWithServerInstance:(id)arg1 ;
-(void)reactivateInCallServiceWithServerInstance:(id)arg1 ;
-(void)launchMagnifierAppWithServerInstance:(id)arg1 ;
-(BOOL)isMagnifierVisibleWithServerInstance:(id)arg1 ;
-(void)userEventOccurredWithServerInstance:(id)arg1 ;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg1 withServerInstance:(id)arg2 ;
-(void)updateFrontMostApplicationWithServerInstance:(id)arg1 ;
-(id)serverInstance:(id)arg1 appWithIdentifier:(id)arg2 ;
-(id)focusedAppProcessWithServerInstance:(id)arg1 ;
-(id)runningAppProcessesWithServerInstance:(id)arg1 ;
-(BOOL)isPasscodeLockVisible;
-(id)_accessibilityNotificationSummary:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityNotificationCount;
-(BOOL)isBuddyRunning;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)_performValidation;
-(id)coverSheetViewController;
-(BOOL)_isDarkModeActive;
-(void)_createAlertWindowSubclass;
-(AXSpringBoardServerSideAppManager *)sideAppManager;
-(void)setAlertManager:(AXSpringBoardServerAlertManager *)arg1 ;
-(void)dismissAlertWithCancel;
-(void)_handleTripleClickAskAlert;
-(void)_handleZoomInBuddyAlert;
-(void)handleBrokenHomeButtonAlert;
-(void)_handleVoiceOverUsageConfirmation;
-(void)_handleZoomConflictAlert:(id)arg1 ;
-(void)_handleSwitchUsageConfirmed;
-(void)_handleTouchAccommodationsUsageConfirmed;
-(void)_handleZoomTripleClickAfterConflict;
-(void)_handleDisableBrightnessFiltersAlert:(id)arg1 ;
-(void)_handleDisableSwitchControlConfirmation;
-(void)_handleDisableFKAConfirmation;
-(void)_handleConfirmRebootDevice;
-(void)_handleVONoHomeButtonGestureAlert;
-(void)_handleDisallowUSBRestrictedModeVOInformativeOnly:(BOOL)arg1 ;
-(void)_handleDisallowUSBRestrictedModeSCInformativeOnly:(BOOL)arg1 ;
-(void)_dismissAlertController;
-(id)_serviceForRemoteViewType:(long long)arg1 ;
-(AXSpringBoardServerAlertManager *)alertManager;
-(BOOL)accessibilityIsNotificationVisible;
-(BOOL)_accessibilityShowNotificationCenter:(BOOL)arg1 serverInstance:(id)arg2 ;
-(BOOL)isCoverSheetVisibleWithServerInstance:(id)arg1 ;
-(id)_accessibilityCoverSheetPresentationManagerSharedInstance;
-(BOOL)accessibilityShowControlCenter:(BOOL)arg1 ;
-(id)_axFloatingDockController;
-(BOOL)isSystemGestureActiveWithServerInstance:(id)arg1 ;
-(void)_unlockWithIntent:(int)arg1 ;
-(BOOL)isReachabilityActive;
-(id<BSInvalidatable>)dimTimerAssertion;
-(void)setDimTimerAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_displayViewController:(id)arg1 ;
-(BOOL)_isDisplayingAlertController;
-(void)_cleanupPresentationWindow;
-(void)launchApplication:(id)arg1 ;
-(void)launchApplicationWithFullConfiguration:(id)arg1 ;
-(void)launchPinnedApplication:(id)arg1 onLeadingSide:(BOOL)arg2 ;
-(void)launchFloatingApplication:(id)arg1 ;
-(BOOL)canLaunchAsPinnedApplicationForIconView:(id)arg1 ;
-(BOOL)canLaunchAsFloatingApplicationForIconView:(id)arg1 ;
-(id)sceneLayoutState;
-(id)appForLayoutRole:(long long)arg1 ;
-(BOOL)_accessibilityShowCoverSheet:(BOOL)arg1 serverInstance:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg1 ;
-(BOOL)_accessibilityIsUILocked;
-(BOOL)isPreferencesFrontmost;
-(void)_cleanupAlertController;
-(BOOL)_shouldShowTCOption:(int)arg1 ;
-(void)_sortVisibleItems;
-(void)_handleAlertActionPress:(id)arg1 ;
-(void)_displayAlertController:(id)arg1 ;
-(void)_displayViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDisableSystemGesturesAssertionForAlert:(AXAssertion *)arg1 ;
-(void)_dismissAlertControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_toggleTripleClickDisplay;
-(id)_handleUsageConfirmationDialogWithMessage:(id)arg1 ;
-(void)didFailToPinAppForSideAppManager:(id)arg1 ;
-(void)didFailToFloatAppForSideAppManager:(id)arg1 ;
-(void)shortLookViewControllerDidDismiss:(id)arg1 ;
-(void)serverInstance:(id)arg1 showAlertType:(int)arg2 withHandler:(/*^block*/id)arg3 withData:(id)arg4 ;
-(void)serverInstance:(id)arg1 showRemoteViewType:(long long)arg2 withData:(id)arg3 ;
-(void)serverInstance:(id)arg1 hideRemoteViewType:(long long)arg2 ;
-(BOOL)serverInstance:(id)arg1 isShowingRemoteViewType:(long long)arg2 ;
-(void)hideAlertWithServerInstance:(id)arg1 ;
-(BOOL)handleToggleIncomingCallWithServerInstance:(id)arg1 ;
-(double)volumeLevelWithServerInstance:(id)arg1 ;
-(BOOL)isSideSwitchUsedForOrientationWithServerInstance:(id)arg1 ;
-(BOOL)isRingerMutedWithServerInstance:(id)arg1 ;
-(BOOL)isOrientationLockedWithServerInstance:(id)arg1 ;
-(void)serverInstance:(id)arg1 setOrientationLocked:(BOOL)arg2 ;
-(void)openCustomGestureCreationForASTWithServerInstance:(id)arg1 ;
-(void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1 ;
-(void)openCommandAndControlSettingsWithServerInstance:(id)arg1 ;
-(void)openCommandAndControlCommandsWithServerInstance:(id)arg1 ;
-(void)openCommandAndControlVocabularyWithServerInstance:(id)arg1 ;
-(void)resetDimTimerWithServerInstance:(id)arg1 ;
-(void)serverInstance:(id)arg1 showSpeechPlaybackControls:(BOOL)arg2 ;
-(double)reachabilityOffsetWithServerInstance:(id)arg1 ;
-(void)setDashBoardSystemGesturesEnabled:(BOOL)arg1 withServerInstance:(id)arg2 ;
-(void)activateSOSModeWithServerInstance:(id)arg1 ;
-(id)serverInstance:(id)arg1 splashImageForAppWithBundleIdentifier:(id)arg2 ;
-(id)medusaBundleIDsToLayoutRoles;
-(BOOL)_accessibilityAllowShowNotificationGestureOverride;
-(id)frontmostAppProcessWithServerInstance:(id)arg1 ;
-(id)_visibleTripleClickItems;
-(BOOL)shouldOverrideInterfaceOrientation;
-(BOOL)_accessibilityHandleHomeOrLockButtonPress;
-(AXAssertion *)disableSystemGesturesAssertionForAlert;
@end
