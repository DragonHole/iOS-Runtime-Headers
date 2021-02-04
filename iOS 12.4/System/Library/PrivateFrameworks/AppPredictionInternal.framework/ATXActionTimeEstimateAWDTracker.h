/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXDuetHelper;

@interface ATXActionTimeEstimateAWDTracker : NSObject {

	_ATXDuetHelper* _duetHelper;

}
-(id)initWithDuetHelper:(id)arg1 ;
-(void)logActionTimeEstimates;
-(void)logActionTimeEstimatesWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_getActionKeyFor:(id)arg1 ;
-(id)_effectiveStartDateFor:(id)arg1 ;
-(id)_effectiveEndDateFor:(id)arg1 ;
-(id)getTimeEstimatesFor:(id)arg1 forAppLaunches:(id)arg2 withActionType:(unsigned long long)arg3 ;
-(id)_createTimeEstimateContainers:(id)arg1 withSessionLengths:(id)arg2 withSessionIndices:(id)arg3 withParameterSet:(id)arg4 withLaunchReasons:(id)arg5 withNoMatchCount:(id)arg6 forActionType:(unsigned long long)arg7 ;
-(void)postTimeEstimates:(id)arg1 ;
-(id)_defaultActionTimeEstimateTimestampPath;
-(id)_queryStartTime;
-(id)_readTimestamp;
-(void)_writeTimestamp:(id)arg1 ;
-(id)init;
@end
