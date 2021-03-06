/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _HKSummary : NSObject <NSSecureCoding> {

	long long _typeCode;
	id _value;
	NSDate* _latestSampleDate;
	NSDate* _summaryStartDate;
	NSDate* _summaryEndDate;

}

@property (assign,nonatomic) long long typeCode;                     //@synthesize typeCode=_typeCode - In the implementation block
@property (nonatomic,retain) id value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSDate * latestSampleDate;              //@synthesize latestSampleDate=_latestSampleDate - In the implementation block
@property (nonatomic,retain) NSDate * summaryStartDate;              //@synthesize summaryStartDate=_summaryStartDate - In the implementation block
@property (nonatomic,retain) NSDate * summaryEndDate;                //@synthesize summaryEndDate=_summaryEndDate - In the implementation block
+(id)valuesByTypeFromSummaries:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setSummaryStartDate:(NSDate *)arg1 ;
-(void)setSummaryEndDate:(NSDate *)arg1 ;
-(void)setTypeCode:(long long)arg1 ;
-(long long)typeCode;
-(NSDate *)summaryStartDate;
-(NSDate *)summaryEndDate;
-(id)initWithTypeCode:(long long)arg1 value:(id)arg2 sampleDate:(id)arg3 usingCalendar:(id)arg4 ;
-(id)initWithTypeCode:(long long)arg1 ;
-(NSDate *)latestSampleDate;
-(void)setLatestSampleDate:(NSDate *)arg1 ;
-(void)setSummaryDatesUsingCalendar:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

