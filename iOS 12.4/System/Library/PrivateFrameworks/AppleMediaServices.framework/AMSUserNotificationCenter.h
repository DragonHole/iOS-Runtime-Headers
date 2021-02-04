/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSUserNotificationStrategy;
@interface AMSUserNotificationCenter : NSObject {

	id<AMSUserNotificationStrategy> _strategy;

}

@property (nonatomic,readonly) id<AMSUserNotificationStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
+(Class)_determineStrategyForBundleId:(id)arg1 ;
+(id)activeNotificationsWithCenterBundleId:(id)arg1 ;
+(id)postNotification:(id)arg1 centerBundleId:(id)arg2 ;
+(id)removeNotification:(id)arg1 centerBundleId:(id)arg2 ;
+(id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 ;
-(id<AMSUserNotificationStrategy>)strategy;
@end
