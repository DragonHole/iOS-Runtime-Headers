/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKProductsRequestDelegate.h>
#import <libobjc.A.dylib/FCProductLookup.h>

@protocol FCProductLookup
@required
-(id)productLookupWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3;

@end


@protocol OS_dispatch_group;
@class NSObject, SKProduct, NSString;

@interface FCProductLookup : NSObject <SKProductsRequestDelegate, FCProductLookup> {

	NSObject*<OS_dispatch_group> _productRequestGroup;
	SKProduct* _product;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> productRequestGroup;              //@synthesize productRequestGroup=_productRequestGroup - In the implementation block
@property (nonatomic,retain) SKProduct * product;                                           //@synthesize product=_product - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setProduct:(SKProduct *)arg1 ;
-(SKProduct *)product;
-(id)productLookupWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3 ;
-(void)setProductRequestGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)productRequestGroup;
@end

