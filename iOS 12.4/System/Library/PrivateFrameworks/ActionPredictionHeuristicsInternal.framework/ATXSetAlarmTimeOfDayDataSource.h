/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class ATXHeuristicDevice;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {

	ATXHeuristicDevice* _device;
	id<_DKKnowledgeQuerying> _duetStore;

}
+(id)medianFrom:(id)arg1 ;
+(id)timeOfDayFromDonations:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)alarmTimeOfDay:(/*^block*/id)arg1 ;
-(id)_recentIntentDonationsForBundleId:(id)arg1 limit:(unsigned long long)arg2 ;
@end

