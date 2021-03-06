/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPurchase.h>

@class NSString, NSNumber, FCIntroductoryOffer;

@interface FCStubPurchase : FCPurchase {

	NSString* fakePurchaseID;
	NSString* fakeProductIdentifier;
	NSNumber* fakeStoreExternalVersion;
	NSNumber* fakeAppAdamID;
	NSNumber* fakePrice;
	FCIntroductoryOffer* _fakeOffer;

}

@property (nonatomic,retain) NSString * fakePurchaseID; 
@property (nonatomic,retain) NSString * fakeProductIdentifier; 
@property (nonatomic,retain) NSNumber * fakeAppAdamID; 
@property (nonatomic,retain) NSNumber * fakeStoreExternalVersion; 
@property (nonatomic,retain) NSNumber * fakePrice; 
@property (nonatomic,retain) FCIntroductoryOffer * fakeOffer;                  //@synthesize fakeOffer=_fakeOffer - In the implementation block
-(id)price;
-(id)appAdamID;
-(id)purchaseID;
-(id)offerName;
-(id)storeExternalVersion;
-(id)introductoryOffer;
-(NSString *)fakePurchaseID;
-(NSNumber *)fakeAppAdamID;
-(NSNumber *)fakeStoreExternalVersion;
-(NSString *)fakeProductIdentifier;
-(NSNumber *)fakePrice;
-(FCIntroductoryOffer *)fakeOffer;
-(void)setFakePurchaseID:(NSString *)arg1 ;
-(void)setFakeProductIdentifier:(NSString *)arg1 ;
-(void)setFakeStoreExternalVersion:(NSNumber *)arg1 ;
-(void)setFakeAppAdamID:(NSNumber *)arg1 ;
-(void)setFakePrice:(NSNumber *)arg1 ;
-(void)setFakeOffer:(FCIntroductoryOffer *)arg1 ;
-(id)payment;
@end

