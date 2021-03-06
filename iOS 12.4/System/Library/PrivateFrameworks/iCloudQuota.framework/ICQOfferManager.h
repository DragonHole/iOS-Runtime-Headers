/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ICQOffer, NSTimer, NSNumber;

@interface ICQOfferManager : NSObject {

	NSObject*<OS_dispatch_queue> _cachedOfferQueue;
	ICQOffer* _cachedOffer;
	NSTimer* _invalidationTimer;
	BOOL _isRegisteredForDarwinNotifications;

}

@property (nonatomic,readonly) BOOL isDeviceStorageAlmostFull; 
@property (assign,getter=isSimulatedDeviceStorageAlmostFull,nonatomic) BOOL simulatedDeviceStorageAlmostFull; 
@property (nonatomic,retain) NSNumber * simulatedPhotosLibrarySize; 
@property (nonatomic,readonly) NSNumber * photosLibrarySize; 
@property (assign,getter=isBuddyOfferEnabled,nonatomic) BOOL buddyOfferEnabled; 
@property (nonatomic,retain) ICQOffer * cachedOffer; 
+(id)sharedOfferManager;
+(id)ckBackupDeviceID;
+(id)defaultPlaceholderKeys;
+(id)defaultBundleIdentifier;
+(BOOL)buddyOfferMightNeedPresenting;
+(BOOL)_legacyBuddyOfferMightNeedPresenting;
+(id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2 ;
-(void)getOfferWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForDarwinNotifications;
-(BOOL)isDeviceStorageAlmostFull;
-(NSNumber *)photosLibrarySize;
-(BOOL)isSimulatedDeviceStorageAlmostFull;
-(NSNumber *)simulatedPhotosLibrarySize;
-(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
-(void)postOfferType:(id)arg1 ;
-(void)postBuddyOfferType:(id)arg1 ;
-(void)forcePostFollowup;
-(void)teardownCachedOffer;
-(void)teardownCachedBuddyOffer;
-(void)teardownCachedOffers;
-(void)setBuddyOfferEnabled:(BOOL)arg1 ;
-(void)setSimulatedPhotosLibrarySize:(NSNumber *)arg1 ;
-(void)_teardownInvalidationTimer;
-(void)_unregisterForDarwinNotifications;
-(id)currentOfferForBundleIdentifier:(id)arg1 ;
-(void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldUseOffer:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(ICQOffer *)cachedOffer;
-(void)setCachedOffer:(ICQOffer *)arg1 ;
-(id)_funnelCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_setupTimerForInvalidationDate:(id)arg1 ;
-(void)_refetchOffer;
-(void)_firedInvalidationTimer:(id)arg1 ;
-(BOOL)fetchOfferIfNeeded;
-(void)_handlePushReceivedDarwinNotification;
-(void)clearFollowups;
-(id)currentOffer;
-(void)updateOfferId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isBuddyOfferEnabled;
-(void)getOfferForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

