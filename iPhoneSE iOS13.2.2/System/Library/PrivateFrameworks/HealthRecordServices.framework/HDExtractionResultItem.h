/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKFHIRIdentifier, HKMedicalRecord, HKClinicalRecord;

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding> {

	HKFHIRIdentifier* _resourceIdentifier;
	HKMedicalRecord* _medicalRecord;
	HKClinicalRecord* _clinicalRecord;

}

@property (nonatomic,copy,readonly) HKFHIRIdentifier * resourceIdentifier;              //@synthesize resourceIdentifier=_resourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalRecord * medicalRecord;                    //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalRecord * clinicalRecord;                  //@synthesize clinicalRecord=_clinicalRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKFHIRIdentifier *)resourceIdentifier;
-(HKMedicalRecord *)medicalRecord;
-(id)initWithResourceIdentifier:(id)arg1 medicalRecord:(id)arg2 clinicalRecord:(id)arg3 ;
-(HKClinicalRecord *)clinicalRecord;
@end
