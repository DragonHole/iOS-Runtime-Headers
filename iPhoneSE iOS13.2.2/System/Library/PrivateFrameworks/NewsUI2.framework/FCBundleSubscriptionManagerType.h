/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCBundleSubscription;


@protocol FCBundleSubscriptionManagerType <FCBundleSubscriptionProviderType>
@property (nonatomic,readonly) FCBundleSubscription * cachedSubscription; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)setEntitlementsOverrideProvider:(id)arg1;
-(FCBundleSubscription *)cachedSubscription;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(id)bundleSubscriptionLookupEntry;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
-(void)clearBundleSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;

@end
