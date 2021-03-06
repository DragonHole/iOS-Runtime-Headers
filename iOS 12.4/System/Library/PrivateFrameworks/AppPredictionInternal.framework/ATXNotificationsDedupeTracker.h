/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ATXNotificationsDedupeTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _recordsTable;

}
+(id)sharedInstance;
-(BOOL)addNotificationId:(id)arg1 ;
-(void)insertEvent:(long long)arg1 notificationID:(id)arg2 ;
-(id)init;
@end

