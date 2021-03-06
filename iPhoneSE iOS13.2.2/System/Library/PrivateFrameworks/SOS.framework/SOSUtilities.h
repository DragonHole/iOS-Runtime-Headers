/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SOSUtilities : NSObject
+(long long)SOSTriggerClickCount;
+(BOOL)canTriggerSOSWithVolumeLockHold;
+(BOOL)isAutomaticCallCountdownEnabled;
+(BOOL)deviceHasHomeButton;
+(BOOL)isAllowedToMessageSOSContacts;
+(id)_userFriendsDefaults;
+(id)_userSOSDefaults;
+(id)newtonTriggersEmergencySOSNumber;
+(void)setNewtonTriggersEmergencySOSNumber:(id)arg1 ;
+(BOOL)isIndiaSKU;
+(BOOL)isD2xDevice;
+(long long)currentSOSTriggerMechanism;
+(BOOL)mustAllowThreeClickTrigger;
+(long long)SOSTriggerMechanismForClickCount:(long long)arg1 ;
+(long long)defaultSOSTriggerMechanism;
+(BOOL)autoCallRequiresSIM;
+(BOOL)hasActiveSIMForClient:(id)arg1 ;
+(void)setAutomaticCallCountdownEnabled:(BOOL)arg1 ;
+(BOOL)longPressTriggersEmergencySOS;
+(void)setLongPressTriggersEmergencySOS:(BOOL)arg1 ;
+(BOOL)newtonTriggersEmergencySOS;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg1 ;
+(BOOL)canTriggerSOSWithClicks;
+(long long)SOSSelectableTriggerMechanismCapability;
+(BOOL)shouldForceDisableAutoCallForClient:(id)arg1 ;
+(BOOL)shouldPlayAudioDuringCountdown;
+(void)setPlayAudioDuringCountdown:(BOOL)arg1 ;
+(void)setAllowedToMessageSOSContacts:(BOOL)arg1 ;
@end

