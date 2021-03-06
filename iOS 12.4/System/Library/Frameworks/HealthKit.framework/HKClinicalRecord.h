/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKFHIRResource, HKClinicalType;

@interface HKClinicalRecord : HKSample <NSSecureCoding, NSCopying> {

	NSString* _displayName;
	HKFHIRResource* _FHIRResource;

}

@property (copy,readonly) HKClinicalType * clinicalType; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) HKFHIRResource * FHIRResource; 
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 ;
+(BOOL)supportsSecureCoding;
-(HKClinicalType *)clinicalType;
-(id)_validateConfiguration;
-(HKFHIRResource *)FHIRResource;
-(void)_setDisplayName:(id)arg1 ;
-(void)_setFHIRResource:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

