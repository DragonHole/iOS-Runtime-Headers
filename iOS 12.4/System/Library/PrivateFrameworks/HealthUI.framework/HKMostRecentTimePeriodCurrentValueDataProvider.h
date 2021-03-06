/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKValueDataProvider.h>

@interface HKMostRecentTimePeriodCurrentValueDataProvider : HKValueDataProvider
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(id)_mostRecentValueQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queryDateRangeFromSampleDate:(id)arg1 ;
-(void)_totalDurationFromDate:(id)arg1 toDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)currentValue;
@end

