/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalCodingCollection, NSArray;

@interface HKMedicalCodingTask : NSObject <NSSecureCoding, NSCopying> {

	HKMedicalCodingCollection* _codings;
	NSArray* _preferredSystems;

}

@property (nonatomic,copy,readonly) HKMedicalCodingCollection * codings;              //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preferredSystems;                       //@synthesize preferredSystems=_preferredSystems - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)taskWithCodings:(id)arg1 preferredSystems:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalCodingCollection *)codings;
-(id)initWithCodings:(id)arg1 preferredSystems:(id)arg2 ;
-(NSArray *)preferredSystems;
@end

