/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIIntervalDefinition, NSDate, HKQuantityType, HKQuantity;

@interface FIQuantityInterval : NSObject {

	FIIntervalDefinition* _definition;
	NSDate* _startDate;
	HKQuantityType* _trackedQuantityType;
	HKQuantity* _threshold;

}

@property (nonatomic,readonly) FIIntervalDefinition * definition;                 //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) HKQuantityType * trackedQuantityType;              //@synthesize trackedQuantityType=_trackedQuantityType - In the implementation block
@property (nonatomic,readonly) HKQuantity * threshold;                            //@synthesize threshold=_threshold - In the implementation block
-(NSDate *)startDate;
-(HKQuantity *)threshold;
-(id)initWithIntervalDefinition:(id)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 ;
-(HKQuantityType *)trackedQuantityType;
-(FIIntervalDefinition *)definition;
@end

