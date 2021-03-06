/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, NSUUID;

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration {

	HKDevice* _device;
	NSUUID* _workoutBuilderID;

}

@property (nonatomic,copy,readonly) HKDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * workoutBuilderID;              //@synthesize workoutBuilderID=_workoutBuilderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2 ;
-(HKDevice *)device;
-(NSUUID *)workoutBuilderID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

