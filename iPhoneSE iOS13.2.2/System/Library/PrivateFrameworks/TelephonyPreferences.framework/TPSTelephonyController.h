/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSController.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSOrderedSet, CTXPCServiceSubscriptionInfo, NSDictionary, CoreTelephonyClient, NSObject, NSString;

@interface TPSTelephonyController : TPSController <CoreTelephonyClientDelegate> {

	os_unfair_lock_s _accessorLock;
	NSOrderedSet* _activeSubscriptions;
	CTXPCServiceSubscriptionInfo* _subscriptionInfo;
	NSOrderedSet* _subscriptions;
	NSDictionary* _systemCapabilities;
	CoreTelephonyClient* _telephonyClient;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;

}

@property (assign,nonatomic) os_unfair_lock_s accessorLock;                                   //@synthesize accessorLock=_accessorLock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,copy) NSOrderedSet * activeSubscriptions;                                //@synthesize activeSubscriptions=_activeSubscriptions - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionInfo * subscriptionInfo;                 //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,copy) NSOrderedSet * subscriptions;                                      //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,copy) NSDictionary * systemCapabilities;                                 //@synthesize systemCapabilities=_systemCapabilities - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * telephonyClient;                         //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSOrderedSet *)subscriptions;
-(void)subscriptionInfoDidChange;
-(void)context:(id)arg1 capabilitiesChanged:(id)arg2 ;
-(void)setSubscriptions:(NSOrderedSet *)arg1 ;
-(CTXPCServiceSubscriptionInfo *)subscriptionInfo;
-(void)setSubscriptionInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(NSOrderedSet *)activeSubscriptions;
-(void)setActiveSubscriptions:(NSOrderedSet *)arg1 ;
-(CoreTelephonyClient *)telephonyClient;
-(void)performAtomicAccessorBlock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)accessorLock;
-(id)fetchSubscriptionInfo;
-(id)fetchSystemCapabilitiesForSubscriptions:(id)arg1 ;
-(id)systemCapabilitiesForSubscriptionContext:(id)arg1 ;
-(NSDictionary *)systemCapabilities;
-(BOOL)supportsSystemCapabilityWithName:(id)arg1 subscriptionContext:(id)arg2 ;
-(id)systemCapabilitiesForSubscriptionContext:(id)arg1 error:(id*)arg2 ;
-(void)setSystemCapabilities:(NSDictionary *)arg1 ;
-(BOOL)supportsCellularNetworkSelectionForSubscriptionContext:(id)arg1 ;
-(BOOL)supportsSystemCapabilityCallerIDForSubscriptionContext:(id)arg1 ;
-(BOOL)supportsSystemCapabilityCallForwardingForSubscriptionContext:(id)arg1 ;
-(BOOL)supportsSystemCapabilityCallWaitingForSubscriptionContext:(id)arg1 ;
-(void)setAccessorLock:(os_unfair_lock_s)arg1 ;
@end

