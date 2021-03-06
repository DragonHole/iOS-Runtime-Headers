/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXMotionManagerWrapper, _ATXLocationManagerWrapper, ATXNotificationsContentAnalyzer, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram;

@interface ATXNotificationContextManager : NSObject {

	_ATXMotionManagerWrapper* _motionmanager;
	_ATXLocationManagerWrapper* _locationmanager;
	ATXNotificationsContentAnalyzer* _contentanalyzer;
	_ATXAppLaunchCategoricalHistogram* _notificationsHistory;
	_ATXAppLaunchHistogram* _appHistory;

}
+(void)appendNotificationHistoryToMetadata:(id)arg1 history:(id)arg2 ;
+(void)appendContentFeaturesToMetadata:(id)arg1 features:(id)arg2 ;
+(void)appendLocationToMetadata:(id)arg1 locationType:(id)arg2 visits:(unsigned long long)arg3 ;
+(void)appendMotionToMetadata:(id)arg1 motion:(id)arg2 ;
+(id)sharedInstance;
-(void)appendContextToMetadata:(id)arg1 ;
-(id)getNotificationHistoryForApp:(id)arg1 ;
-(id)init;
@end

