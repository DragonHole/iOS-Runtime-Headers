/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, PETScalarEventTracker, NCNotificationListSection;

@interface NCNotificationListStalenessEventTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _lastDisplayedDateByNotificationMetadata;
	PETScalarEventTracker* _stalenessEventTracker;
	NCNotificationListSection* _notificationList;

}

@property (assign,nonatomic,__weak) NCNotificationListSection * notificationList;              //@synthesize notificationList=_notificationList - In the implementation block
+(id)_allMetricsSafeBundleIdentifiers;
+(id)_metricsSafeBundleIdentifierForBundleIdentifier:(id)arg1 ;
+(id)_metricsSafeBundleIdentifierByBundleIdentifier;
+(id)eventTrackerWithAutomaticCollation;
-(void)_startAutocollation;
-(void)_stopAutocollation;
-(void)_handleListPresentedEvent;
-(NCNotificationListSection *)notificationList;
-(void)_queue_processRequests:(id)arg1 timestamp:(id)arg2 ;
-(void)_queue_collateAndRecordMetrics;
-(void)collateAndRecordMetrics;
-(void)setNotificationList:(NCNotificationListSection *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)handleEvent:(unsigned long long)arg1 ;
@end

