/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKHeartRateVariabilityUtilities : NSObject
+(id)_hrvType;
+(id)_sequenceType;
+(void)deleteHRVSample:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(void)deleteHRVSamplesFromStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 healthStore:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)instantaneousBPMsForHeartbeatSequence:(id)arg1 ;
+(void)queryForParentSequenceOfHRV:(id)arg1 healthStore:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

