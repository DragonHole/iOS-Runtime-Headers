/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKUnit.h>

@class _HKFactorization, _HKDimension;

@interface _HKCompoundUnit : HKUnit {

	_HKFactorization* _baseUnits;
	_HKDimension* _dimension;
	os_unfair_lock_s _dimensionLock;

}
+(BOOL)supportsSecureCoding;
+(id)unitWithBaseUnits:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dimension;
-(id)unitString;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(id)_initWithBaseUnits:(id)arg1 ;
@end

