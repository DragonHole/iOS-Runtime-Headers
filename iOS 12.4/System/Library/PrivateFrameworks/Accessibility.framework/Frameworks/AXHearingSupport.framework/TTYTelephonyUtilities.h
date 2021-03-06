/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSObject, NSString;

@interface TTYTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	BOOL _headphoneJackSupportsTTY;
	CTXPCServiceSubscriptionContext* _defaultVoiceContext;
	unsigned long long _activeContextCount;
	CoreTelephonyClient* _telephonyClient;
	NSObject*<OS_dispatch_queue> _telephonyUpdateQueue;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;                                      //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * telephonyClient;                              //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> telephonyUpdateQueue;                  //@synthesize telephonyUpdateQueue=_telephonyUpdateQueue - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * defaultVoiceContext;              //@synthesize defaultVoiceContext=_defaultVoiceContext - In the implementation block
@property (assign,nonatomic) unsigned long long activeContextCount;                              //@synthesize activeContextCount=_activeContextCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)softwareTTYIsSupported;
+(BOOL)hardwareTTYIsSupported;
+(id)sharedUtilityProvider;
+(BOOL)isRTTSupportedForContext:(id)arg1 ;
+(BOOL)isTTYSupportedForContext:(id)arg1 ;
+(BOOL)isTTYSupported;
+(BOOL)hardwareTTYIsSupportedForContext:(id)arg1 ;
+(BOOL)softwareTTYIsSupportedForContext:(id)arg1 ;
+(BOOL)TTYSoftwareEnabledForAnyActiveContext;
+(BOOL)isOnlyRTTSupported;
+(BOOL)shouldUseRTT;
+(BOOL)relayIsSupported;
+(id)relayPhoneNumber;
+(BOOL)isAppleInternalBuild;
+(BOOL)isOnlyRTTSupportedForContext:(id)arg1 ;
+(BOOL)shouldUseRTTForContext:(id)arg1 ;
+(id)relayPhoneNumberForContext:(id)arg1 ;
+(BOOL)TTYHardwareEnabledForAnyActiveContext;
+(BOOL)relayIsSupportedForContext:(id)arg1 ;
+(BOOL)isRTTSupported;
-(id)subscriptionContexts;
-(BOOL)isTTYSupportedForContext:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethodForContext:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethod;
-(void)registerNotifications;
-(CTXPCServiceSubscriptionContext *)defaultVoiceContext;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)mediaServerDied;
-(BOOL)relayIsSupported;
-(id)myPhoneNumber;
-(id)phoneNumberFromUUID:(id)arg1 ;
-(BOOL)headphoneJackSupportsTTY;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
-(BOOL)isTTYOverIMSSupportedForContext:(id)arg1 ;
-(id)relayNumberForContext:(id)arg1 ;
-(void)setTelephonyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reloadDefaultVoiceContext;
-(void)updateHeadphoneState;
-(NSObject*<OS_dispatch_queue>)telephonyUpdateQueue;
-(void)headphoneStateChangedNotification:(id)arg1 ;
-(id)phoneNumberForContext:(id)arg1 ;
-(void)reloadRelayPhoneNumbers;
-(void)carrierSettingsDidChange;
-(void)setDefaultVoiceContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setActiveContextCount:(unsigned long long)arg1 ;
-(id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2 ;
-(id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2 ;
-(BOOL)contactPathIsMe:(id)arg1 ;
-(unsigned long long)activeContextCount;
-(CoreTelephonyClient *)telephonyClient;
-(void)subscriptionInfoDidChange;
-(void)activeSubscriptionsDidChange;
-(void)simLessSubscriptionsDidChange;
-(void)setTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)init;
-(void)dealloc;
@end

