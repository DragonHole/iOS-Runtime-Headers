/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface FCPurchaseLookupFetchOperationResult : NSObject {

	NSDictionary* _channelIDsByPurchaseID;
	NSDictionary* _bundleChannelIDsByPurchaseID;

}

@property (nonatomic,copy) NSDictionary * channelIDsByPurchaseID;                    //@synthesize channelIDsByPurchaseID=_channelIDsByPurchaseID - In the implementation block
@property (nonatomic,copy) NSDictionary * bundleChannelIDsByPurchaseID;              //@synthesize bundleChannelIDsByPurchaseID=_bundleChannelIDsByPurchaseID - In the implementation block
-(id)initWithChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsByPurchaseID:(id)arg2 ;
-(NSDictionary *)channelIDsByPurchaseID;
-(void)setChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
-(NSDictionary *)bundleChannelIDsByPurchaseID;
-(void)setBundleChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
@end

