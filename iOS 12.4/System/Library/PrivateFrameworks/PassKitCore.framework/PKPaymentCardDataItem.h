/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKCurrencyAmount, PKPaymentPass, PKPaymentApplication, CNContact;

@interface PKPaymentCardDataItem : PKPaymentDataItem {

	BOOL _showPeerPaymentBalance;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (assign,nonatomic) BOOL showPeerPaymentBalance;                              //@synthesize showPeerPaymentBalance=_showPeerPaymentBalance - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;                    //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) BOOL requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
@property (nonatomic,readonly) BOOL shouldShowCardArt; 
+(long long)dataType;
-(id)errors;
-(void)setShowPeerPaymentBalance:(BOOL)arg1 ;
-(PKPaymentPass *)pass;
-(PKCurrencyAmount *)peerPaymentBalance;
-(PKPaymentApplication *)paymentApplication;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)requiresBillingAddress;
-(BOOL)shouldShowCardArt;
-(BOOL)showPeerPaymentBalance;
-(CNContact *)billingAddress;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(long long)status;
@end
