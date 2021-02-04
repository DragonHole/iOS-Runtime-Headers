/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SKProductSubscriptionPeriod * subscriptionPeriod; 
@property (nonatomic,readonly) unsigned long long numberOfPeriods; 
@property (nonatomic,readonly) unsigned long long paymentMode; 
@property (nonatomic,readonly) unsigned long long type; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDecimalNumber *)price;
-(unsigned long long)paymentMode;
-(void)_setIdentifier:(id)arg1 ;
-(NSLocale *)priceLocale;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
-(unsigned long long)numberOfPeriods;
-(void)_setNumberOfPeriods:(unsigned long long)arg1 ;
-(void)_setPaymentMode:(unsigned long long)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setSubscriptionPeriod:(id)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(void)_setType:(unsigned long long)arg1 ;
@end
