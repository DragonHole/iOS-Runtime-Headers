/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKAccountFlowController.h>

@interface PKCreditAccountController : PKAccountFlowController
+(BOOL)_shouldDisplayBalanceForAccount:(id)arg1 ;
+(BOOL)_shouldDisplayBalanceAndTransactionsForPaymentPass:(id)arg1 ;
+(BOOL)_shouldDisplayTransactionsForAccount:(id)arg1 ;
+(id)relevantScheduledPaymentFromScheduledPayments:(id)arg1 account:(id)arg2 ;
+(void)resolutionToReceiveCashbackForAccount:(id)arg1 withPeerPaymentAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldDisplayAccountInformationForPaymentPass:(id)arg1 withAccount:(id)arg2 ;
+(BOOL)shouldDisplayTransactionsForPaymentPass:(id)arg1 withAccount:(id)arg2 ;
+(unsigned long long)paymentEducationStateForAccount:(id)arg1 mostRecentTransactions:(id)arg2 upcomingScheduledPayments:(id)arg3 ;
@end

