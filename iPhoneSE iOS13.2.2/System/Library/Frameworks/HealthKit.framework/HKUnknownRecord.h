/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKUnknownRecordType;

@interface HKUnknownRecord : HKMedicalRecord <NSSecureCoding, NSCopying> {

	NSString* _displayName;

}

@property (copy,readonly) HKUnknownRecordType * unknownRecordType; 
@property (copy,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)defaultDisplayString;
+(id)_newUnknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 displayName:(id)arg11 config:(/*^block*/id)arg12 ;
+(id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 displayName:(id)arg11 ;
+(id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 displayName:(id)arg10 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)_setDisplayName:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)fallbackDisplayString;
-(HKUnknownRecordType *)unknownRecordType;
@end

