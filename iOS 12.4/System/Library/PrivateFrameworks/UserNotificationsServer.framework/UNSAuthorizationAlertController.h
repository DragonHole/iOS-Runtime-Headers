/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface UNSAuthorizationAlertController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _bundleIdentifersForActiveAlerts;
	NSMutableDictionary* _bundleIdentifiersToResultBlocks;

}
-(void)_queue_addResultBlock:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_queue_isAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_queue_addAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)requestAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 ;
@end
