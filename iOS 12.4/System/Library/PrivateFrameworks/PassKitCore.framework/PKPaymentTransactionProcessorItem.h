/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentTransaction, PKPaymentApplication, NSString;

@interface PKPaymentTransactionProcessorItem : NSObject {

	BOOL _foundOptimalLocation;
	PKPaymentTransaction* _paymentTransaction;
	PKPaymentApplication* _paymentApplication;
	NSString* _passUniqueIdentifier;

}

@property (nonatomic,retain) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                        //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foundOptimalLocation;                              //@synthesize foundOptimalLocation=_foundOptimalLocation - In the implementation block
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(void)setPaymentTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)paymentTransaction;
-(BOOL)foundOptimalLocation;
-(void)setFoundOptimalLocation:(BOOL)arg1 ;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(NSString *)passUniqueIdentifier;
@end

