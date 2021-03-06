/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject {

	FCBundleSubscriptionLookUpEntry* _bundleSubscriptionLookUpEntry;
	FCKeyValueStore* _localStore;

}

@property (nonatomic,retain) FCBundleSubscriptionLookUpEntry * bundleSubscriptionLookUpEntry;              //@synthesize bundleSubscriptionLookUpEntry=_bundleSubscriptionLookUpEntry - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                 //@synthesize localStore=_localStore - In the implementation block
-(FCKeyValueStore *)localStore;
-(void)loadLocalCachesFromStore;
-(id)initWithLocalStore:(id)arg1 ;
-(void)updateEntry:(id)arg1 ;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookUpEntry;
-(void)cleanupStaleExpiredEntry;
-(void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 ;
-(void)setBundleSubscriptionLookUpEntry:(FCBundleSubscriptionLookUpEntry *)arg1 ;
-(id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1 ;
@end

