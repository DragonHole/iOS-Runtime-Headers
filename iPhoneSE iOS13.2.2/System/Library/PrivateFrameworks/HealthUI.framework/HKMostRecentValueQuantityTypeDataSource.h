/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_interval:(id)arg1 isEqualToIntervalFromCalendarUnit:(unsigned long long)arg2 ;
-(id)initWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(id)_dataSourceValueFromMostRecentQuantity:(id)arg1 quantityDateInterval:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)_middleDateFromInterval:(id)arg1 endDate:(id)arg2 ;
-(id)_dataSourceValueFromStatisticsCollection:(id)arg1 statisticsInterval:(id)arg2 ;
@end

