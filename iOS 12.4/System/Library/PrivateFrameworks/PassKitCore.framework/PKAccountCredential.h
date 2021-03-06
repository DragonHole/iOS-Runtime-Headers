/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKAccount, PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString;

@interface PKAccountCredential : PKPaymentCredential {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	PKAccountWebServicePassDetailsResponse* _passDetailsResponse;

}

@property (nonatomic,readonly) PKAccount * account;                                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                               //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKAccountWebServicePassDetailsResponse * passDetailsResponse;              //@synthesize passDetailsResponse=_passDetailsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier; 
-(id)initWithAccount:(id)arg1 ;
-(void)setPassDetailsResponse:(PKAccountWebServicePassDetailsResponse *)arg1 ;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(id)longDescription;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKAccountWebServicePassDetailsResponse *)passDetailsResponse;
-(PKAccount *)account;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

