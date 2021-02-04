/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, SKPayment, NSArray, NSDate, NSData;

@interface SKPaymentTransaction : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,readonly) NSString * _transactionIdentifier; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) SKPaymentTransaction * originalTransaction; 
@property (nonatomic,readonly) SKPayment * payment; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (nonatomic,readonly) NSDate * transactionDate; 
@property (nonatomic,readonly) NSString * transactionIdentifier; 
@property (nonatomic,readonly) NSData * transactionReceipt; 
@property (nonatomic,readonly) long long transactionState; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setError:(id)arg1 ;
-(id)initWithPayment:(id)arg1 ;
-(NSString *)matchingIdentifier;
-(NSString *)_transactionIdentifier;
-(BOOL)canMergeWithTransaction:(id)arg1 ;
-(BOOL)mergeWithServerTransaction:(id)arg1 ;
-(id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1 ;
-(SKPaymentTransaction *)originalTransaction;
-(NSData *)transactionReceipt;
-(void)_setOriginalTransaction:(id)arg1 ;
-(void)_setTemporaryIdentifier:(id)arg1 ;
-(void)_setTransactionDate:(id)arg1 ;
-(void)_setTransactionIdentifier:(id)arg1 ;
-(void)_setTransactionReceipt:(id)arg1 ;
-(void)_setTransactionState:(long long)arg1 ;
-(id)initWithServerTransaction:(id)arg1 ;
-(void)_setDownloads:(id)arg1 ;
-(NSArray *)downloads;
-(long long)transactionState;
-(SKPayment *)payment;
-(NSDate *)transactionDate;
-(NSString *)transactionIdentifier;
-(BOOL)mergeWithTransaction:(id)arg1 ;
-(id)init;
-(id)UUID;
-(NSError *)error;
@end
