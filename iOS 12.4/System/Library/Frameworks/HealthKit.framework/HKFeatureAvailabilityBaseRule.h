/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKFeatureAvailabilityDataSource;
@interface HKFeatureAvailabilityBaseRule : NSObject {

	id<HKFeatureAvailabilityDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKFeatureAvailabilityDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(Class)ruleClassForRawValue:(id)arg1 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
-(id<HKFeatureAvailabilityDataSource>)dataSource;
-(void)setDataSource:(id<HKFeatureAvailabilityDataSource>)arg1 ;
@end

