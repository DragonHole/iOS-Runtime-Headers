/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSDecimalNumber, NSString, NSDate;

@interface PKAccountPaymentReminder : NSObject <NSSecureCoding, PKRecordObject> {

	NSDecimalNumber* _minimumDue;
	NSString* _currencyCode;
	NSDate* _paymentDueDate;

}

@property (nonatomic,copy) NSDecimalNumber * minimumDue;              //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                   //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSDate * paymentDueDate;                   //@synthesize paymentDueDate=_paymentDueDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordNamePrefix;
+(id)recordType;
+(BOOL)supportsSecureCoding;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)currencyCode;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDecimalNumber *)minimumDue;
-(void)setMinimumDue:(NSDecimalNumber *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSDate *)paymentDueDate;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
@end
