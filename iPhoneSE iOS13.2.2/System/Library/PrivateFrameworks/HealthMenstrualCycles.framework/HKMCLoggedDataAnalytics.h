/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKMCLoggedDataAnalytics : NSObject
+(BOOL)_isMetricEnabled;
+(BOOL)_isAllowed;
+(BOOL)shouldSubmit;
+(void)submitMetricForMethod:(id)arg1 loggedDayIndex:(long long)arg2 currentDayIndex:(long long)arg3 ;
@end
