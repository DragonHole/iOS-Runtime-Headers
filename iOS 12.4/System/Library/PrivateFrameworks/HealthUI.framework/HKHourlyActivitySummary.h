/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface HKHourlyActivitySummary : HKActivitySummary {

	NSDateComponents* _hourlyDateComponents;

}

@property (nonatomic,retain) NSDateComponents * hourlyDateComponents;              //@synthesize hourlyDateComponents=_hourlyDateComponents - In the implementation block
-(id)dateComponentsForCalendar:(id)arg1 ;
-(BOOL)_useHourlyGoalComparison;
-(NSDateComponents *)hourlyDateComponents;
-(void)setHourlyDateComponents:(NSDateComponents *)arg1 ;
@end
