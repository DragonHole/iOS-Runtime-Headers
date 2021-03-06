/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableDictionary, PKPaymentWebService;

@interface PKPassUpgradeControllerBase : NSObject {

	/*^block*/id _addPaymentPassToLibrary;
	os_unfair_lock_s _pass_upgrade_lock;
	NSMutableDictionary* _pendingPassUpgrades;
	PKPaymentWebService* _paymentWebService;

}

@property (nonatomic,retain) PKPaymentWebService * paymentWebService;              //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(void)requestPassUpgrade:(id)arg1 pass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPaymentWebService *)paymentWebService;
-(id)initWithWebService:(id)arg1 addPaymentPassToLibrary:(/*^block*/id)arg2 ;
-(void)appletsDidUpdate;
-(void)downloadUpgradedPassForPassUniqueID:(id)arg1 atURL:(id)arg2 ;
-(void)completePassUpgradeForPassUniqueID:(id)arg1 withError:(id)arg2 ;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
@end

