/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;
@class NSObject, PKPaymentWebService;

@interface PKSecureElementConsistencyChecker : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;
	id<PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
	id<PKSecureElementConsistencyCheckerDelegate> _delegate;
	PKPaymentWebService* _paymentWebService;

}

@property (assign,nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                             //@synthesize paymentWebService=_paymentWebService - In the implementation block
+(BOOL)isCheckingConsistencyForSecureElementID:(id)arg1 ;
-(PKPaymentWebService *)paymentWebService;
-(void)queue_startWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_downloadPasses;
-(void)_rescheduleWithBackoff;
-(void)queue_checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 registeredRegions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 ;
-(void)checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 ;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<PKSecureElementConsistencyCheckerDelegate>)arg1 ;
-(id<PKSecureElementConsistencyCheckerDelegate>)delegate;
@end

