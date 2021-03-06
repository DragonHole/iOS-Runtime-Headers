/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentApplication, PKWrappedPayment, NSData, NSString;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;
	PKWrappedPayment* _wrappedPayment;
	NSData* _applicationData;

}

@property (nonatomic,readonly) NSString * endpointName; 
@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;                      //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                                 //@synthesize applicationData=_applicationData - In the implementation block
-(PKWrappedPayment *)wrappedPayment;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)endpointName;
-(id)bodyDictionary;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
@end

