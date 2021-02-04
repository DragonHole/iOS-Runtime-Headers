/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, HDAWDHealthKitHeartDailyAnalytics;

@interface HDHeartDailyAnalytics : NSObject {

	NSMutableDictionary* _payload;
	HDAWDHealthKitHeartDailyAnalytics* _awdPayload;

}
-(void)updateIsImproveHealthAndActivityAllowed:(BOOL)arg1 ;
-(void)updateElectrocardiogramClassificationCount:(long long)arg1 ;
-(void)updateIrregularRhythmNotificationClassificationCount:(long long)arg1 ;
-(void)updateIsEcgOnboarded:(BOOL)arg1 ;
-(void)updateWeeksSinceElectrocardiogramOnboardedWithFirstOnboardingCompletedDate:(id)arg1 ;
-(void)updateWithElectrocardiogramClassifications:(id)arg1 ;
-(void)submit;
-(id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_ecgClassificationWithin24HoursPostIRNKeyFromClassification:(unsigned long long)arg1 ;
-(id)init;
@end
