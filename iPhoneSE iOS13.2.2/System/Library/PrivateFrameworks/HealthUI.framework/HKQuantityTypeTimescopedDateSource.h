/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKQuantityTypeTimescopedDateSource : HKQuantityTypeDataSource
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_quantityValueFromStatistics:(id)arg1 statisticsInterval:(id)arg2 date:(id)arg3 ;
-(unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)_componentsToEnumerateFromInterval:(id)arg1 ;
-(BOOL)_interval:(id)arg1 isEqualToIntervalFromCalendarUnit:(unsigned long long)arg2 ;
-(id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2 ;
@end

