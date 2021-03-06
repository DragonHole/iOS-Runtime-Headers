/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, NSDate, PKAccountPaymentFundingSource, PKAccountPaymentScheduleDetails;

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _identifier;
	NSString* _referenceIdentifier;
	NSString* _clientReferenceIdentifier;
	PKCurrencyAmount* _currencyAmount;
	NSDate* _paymentDate;
	NSDate* _paymentStatusDate;
	long long _state;
	long long _statusCode;
	PKAccountPaymentFundingSource* _fundingSource;
	PKAccountPaymentScheduleDetails* _scheduleDetails;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * referenceIdentifier;                                   //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientReferenceIdentifier;                             //@synthesize clientReferenceIdentifier=_clientReferenceIdentifier - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSDate * paymentDate;                                             //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,copy) NSDate * paymentStatusDate;                                       //@synthesize paymentStatusDate=_paymentStatusDate - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long statusCode;                                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) PKAccountPaymentFundingSource * fundingSource;                  //@synthesize fundingSource=_fundingSource - In the implementation block
@property (nonatomic,retain) PKAccountPaymentScheduleDetails * scheduleDetails;              //@synthesize scheduleDetails=_scheduleDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordNamePrefix;
+(id)recordType;
+(BOOL)supportsSecureCoding;
-(void)setStatusCode:(long long)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(NSString *)clientReferenceIdentifier;
-(void)setPaymentStatusDate:(NSDate *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(BOOL)isOnHoldForAccount:(id)arg1 ;
-(PKAccountPaymentScheduleDetails *)scheduleDetails;
-(NSString *)referenceIdentifier;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(PKAccountPaymentFundingSource *)fundingSource;
-(void)setScheduleDetails:(PKAccountPaymentScheduleDetails *)arg1 ;
-(NSDate *)paymentDate;
-(BOOL)isRecurring;
-(NSDate *)paymentStatusDate;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(void)setClientReferenceIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)state;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)statusCode;
@end

