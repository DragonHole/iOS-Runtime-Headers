/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject {

	SKUIURLConnectionRequest* _request;

}
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)purchaseWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDonation:(id)arg1 configuration:(id)arg2 ;
-(id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2 ;
@end

