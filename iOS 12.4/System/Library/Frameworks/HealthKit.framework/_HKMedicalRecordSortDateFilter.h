/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSDate;

@interface _HKMedicalRecordSortDateFilter : _HKFilter {

	NSDate* _comparisonDate;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) NSDate * comparisonDate;                      //@synthesize comparisonDate=_comparisonDate - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 comparisonDate:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(unsigned long long)operatorType;
-(NSDate *)comparisonDate;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

