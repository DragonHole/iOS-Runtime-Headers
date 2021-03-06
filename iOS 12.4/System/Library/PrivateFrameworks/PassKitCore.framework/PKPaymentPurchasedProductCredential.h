/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKPaymentSetupProduct, NSString, PKServiceProviderPurchase, NSArray;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential {

	PKPaymentSetupProduct* _product;
	NSString* _productIdentifier;
	PKServiceProviderPurchase* _purchase;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                           //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                                //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) PKServiceProviderPurchase * purchase;                    //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
@property (nonatomic,copy,readonly) NSString * statusDescription; 
@property (nonatomic,copy,readonly) NSString * summaryMetadataDescription; 
-(id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 ;
-(NSString *)statusDescription;
-(void)setRequirementsResponse:(id)arg1 ;
-(PKPaymentSetupProduct *)product;
-(PKServiceProviderPurchase *)purchase;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(NSString *)productIdentifier;
-(NSString *)summaryMetadataDescription;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSArray *)metadata;
@end

