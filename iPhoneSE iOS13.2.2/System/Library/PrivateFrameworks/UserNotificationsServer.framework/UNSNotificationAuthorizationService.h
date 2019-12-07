/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSDefaultDataProviderFactory, UNSCriticalAlertAuthorizationAlertController, UNSNotificationAuthorizationAlertController, NSObject, CRCarPlayAppPolicyEvaluator;

@interface UNSNotificationAuthorizationService : NSObject {

	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSCriticalAlertAuthorizationAlertController* _criticalAlertAuthorizationAlertController;
	UNSNotificationAuthorizationAlertController* _notificationAuthorizationAlertController;
	NSObject*<OS_dispatch_queue> _queue;
	CRCarPlayAppPolicyEvaluator* _policyEvaluator;

}
-(void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 ;
-(BOOL)_queue_isCarPlayAvailableForApplication:(id)arg1 ;
-(BOOL)_queue_isSpokenAvailableForApplication:(id)arg1 ;
-(id)initWithDataProviderFactory:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
