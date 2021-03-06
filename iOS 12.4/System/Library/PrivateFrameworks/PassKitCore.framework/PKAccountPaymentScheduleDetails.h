/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone, NSDate, NSString;

@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding> {

	NSTimeZone* _productTimeZone;
	long long _frequency;
	long long _frequencyDay;
	long long _preset;
	NSDate* _scheduledDate;
	NSString* _paymentTermsIdentifier;

}

@property (assign,nonatomic) long long frequency;                          //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long frequencyDay;                       //@synthesize frequencyDay=_frequencyDay - In the implementation block
@property (assign,nonatomic) long long preset;                             //@synthesize preset=_preset - In the implementation block
@property (nonatomic,copy) NSDate * scheduledDate;                         //@synthesize scheduledDate=_scheduledDate - In the implementation block
@property (nonatomic,copy) NSString * paymentTermsIdentifier;              //@synthesize paymentTermsIdentifier=_paymentTermsIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)jsonString;
-(id)jsonDictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(long long)preset;
-(void)setPreset:(long long)arg1 ;
-(void)setFrequencyDay:(long long)arg1 ;
-(NSDate *)scheduledDate;
-(NSString *)paymentTermsIdentifier;
-(void)setScheduleTimeZone:(id)arg1 ;
-(void)setScheduledDate:(NSDate *)arg1 ;
-(void)setPaymentTermsIdentifier:(NSString *)arg1 ;
-(long long)frequencyDay;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(id)hashString;
@end

