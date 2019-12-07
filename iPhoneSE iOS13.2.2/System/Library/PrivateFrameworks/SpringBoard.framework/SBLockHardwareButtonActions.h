/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>
#import <libobjc.A.dylib/SBSTARManagerObserver.h>

@protocol SBHardwareButtonInteractionSBHardwareButtonGestureParametersProvider;
@class SBApplication, SBProximitySensorManager, SBHardwareButtonService, SBWalletPreArmController, SOSManager, SBSTARManager, SBHardwareButtonGestureParameters, SBSiriHardwareButtonInteraction, SBAccessibilityHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, NSString;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver, SBSTARManagerObserver> {

	long long _homeButtonType;
	SBApplication* _lastLockButtonEventRecipient;
	SBProximitySensorManager* _proximitySensorManager;
	SBHardwareButtonService* _hardwareButtonService;
	SBWalletPreArmController* _walletPreArmController;
	SOSManager* _sosManager;
	SBSTARManager* _STARManager;
	SBHardwareButtonGestureParameters* _accessibilityGestureParameters;
	SBHardwareButtonGestureParameters* _siriGestureParameters;
	SBHardwareButtonGestureParameters* _proximitySensorGestureParameters;
	long long _sosTriggerMechanism;
	BOOL _isButtonDown;
	SBSiriHardwareButtonInteraction* _siriButtonInteraction;
	SBAccessibilityHardwareButtonInteraction* _accessibilityButtonInteraction;
	SBSleepWakeHardwareButtonInteraction* _sleepWakeButtonInteraction;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;

}

@property (nonatomic,retain) SBSiriHardwareButtonInteraction * siriButtonInteraction;                                                                  //@synthesize siriButtonInteraction=_siriButtonInteraction - In the implementation block
@property (nonatomic,retain) SBAccessibilityHardwareButtonInteraction * accessibilityButtonInteraction;                                                //@synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction - In the implementation block
@property (nonatomic,retain) SBSleepWakeHardwareButtonInteraction * sleepWakeButtonInteraction;                                                        //@synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction - In the implementation block
@property (nonatomic,retain) id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction;              //@synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction - In the implementation block
@property (nonatomic,readonly) BOOL isButtonDown;                                                                                                      //@synthesize isButtonDown=_isButtonDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performSinglePressAction;
-(void)performInitialButtonDownActions;
-(BOOL)performButtonUpPreActions;
-(void)performFinalButtonUpActions;
-(id)hardwareButtonGestureParameters;
-(void)_registeredLockButtonAppsDidChange:(id)arg1 ;
-(BOOL)_sendButtonDownToRegisteredApp;
-(BOOL)isButtonDown;
-(void)_showPowerDownTransientOverlayOnForceReset;
-(BOOL)_sendButtonUpToRegisteredApp;
-(BOOL)_isSOSActive;
-(void)_performSOSDidTriggerActions;
-(BOOL)disallowsSinglePressForReason:(id*)arg1 ;
-(BOOL)disallowsDoublePressForReason:(id*)arg1 ;
-(BOOL)_shouldWaitForDoublePress;
-(BOOL)disallowsTriplePressForReason:(id*)arg1 ;
-(BOOL)disallowsLongPressForReason:(id*)arg1 ;
-(id)_foregroundAppRegisteredForLockButtonEvents;
-(void)_sendButtonEventToApp:(id)arg1 down:(BOOL)arg2 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(void)didEnterSTARMode:(id)arg1 ;
-(void)didExitSTARMode:(id)arg1 ;
-(id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2 ;
-(BOOL)reverseFadeOutIfNeeded;
-(void)performSOSGestureBeganActions;
-(void)performSOSGestureEndedActions;
-(void)performInitialButtonUpActions;
-(void)performSecondButtonDownActions;
-(void)performLongPressActions;
-(void)performForceResetSequenceBeganActions;
-(void)performSinglePressDidFailActions;
-(void)performDoublePressActions;
-(void)performTriplePressActions;
-(void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)performLongPressCancelledActions;
-(BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
-(SBSiriHardwareButtonInteraction *)siriButtonInteraction;
-(void)setSiriButtonInteraction:(SBSiriHardwareButtonInteraction *)arg1 ;
-(SBAccessibilityHardwareButtonInteraction *)accessibilityButtonInteraction;
-(void)setAccessibilityButtonInteraction:(SBAccessibilityHardwareButtonInteraction *)arg1 ;
-(SBSleepWakeHardwareButtonInteraction *)sleepWakeButtonInteraction;
-(void)setSleepWakeButtonInteraction:(SBSleepWakeHardwareButtonInteraction *)arg1 ;
-(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)proximitySensorButtonInteraction;
-(void)setProximitySensorButtonInteraction:(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)arg1 ;
@end
