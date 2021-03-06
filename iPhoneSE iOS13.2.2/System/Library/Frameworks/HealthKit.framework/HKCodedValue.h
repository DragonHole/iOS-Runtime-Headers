/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKInspectableValue;

@interface HKCodedValue : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _codings;
	HKInspectableValue* _value;
	NSArray* _referenceRanges;

}

@property (nonatomic,copy,readonly) NSArray * codings;                       //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) HKInspectableValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSArray * referenceRanges;               //@synthesize referenceRanges=_referenceRanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)codedValueWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKInspectableValue *)value;
-(id)initWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3 ;
-(id)chartableCodedQuantityWithError:(id*)arg1 ;
-(NSArray *)codings;
-(NSArray *)referenceRanges;
-(id)chartableCodedQuantitySetWithDate:(id)arg1 error:(id*)arg2 ;
@end

