/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface FCSubscriptionEntitlement : NSObject {

	BOOL _newsAppPurchase;
	BOOL _isTrialPeriod;
	BOOL _isPurchaser;
	NSNumber* _appAdamID;
	NSString* _chargeCurrencyCode;
	NSNumber* _inAppAdamID;

}

@property (nonatomic,readonly) NSNumber * appAdamID;                                       //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,readonly) NSString * chargeCurrencyCode;                              //@synthesize chargeCurrencyCode=_chargeCurrencyCode - In the implementation block
@property (nonatomic,readonly) NSNumber * inAppAdamID;                                     //@synthesize inAppAdamID=_inAppAdamID - In the implementation block
@property (getter=isNewsAppPurchase,nonatomic,readonly) BOOL newsAppPurchase;              //@synthesize newsAppPurchase=_newsAppPurchase - In the implementation block
@property (nonatomic,readonly) BOOL isTrialPeriod;                                         //@synthesize isTrialPeriod=_isTrialPeriod - In the implementation block
@property (nonatomic,readonly) BOOL isPurchaser;                                           //@synthesize isPurchaser=_isPurchaser - In the implementation block
-(BOOL)isNewsAppPurchase;
-(NSNumber *)appAdamID;
-(NSNumber *)inAppAdamID;
-(NSString *)chargeCurrencyCode;
-(id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(BOOL)arg4 ;
-(BOOL)isPurchaser;
-(id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(BOOL)arg4 isTrailPeriod:(BOOL)arg5 isPurchaser:(BOOL)arg6 ;
-(BOOL)isTrialPeriod;
-(id)description;
@end

