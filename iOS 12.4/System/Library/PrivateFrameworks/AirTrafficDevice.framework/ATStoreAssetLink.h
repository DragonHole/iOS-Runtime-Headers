/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol OS_dispatch_queue, ATAssetLinkDelegate;
@class SSDownloadManager, NSMutableDictionary, NSMapTable, NSObject, NSString;

@interface ATStoreAssetLink : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate, ATAssetLink> {

	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _assetsByStoreID;
	NSMapTable* _downloadsByAsset;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                               //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(unsigned long long)maximumBatchSize;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)linkIsReady;
-(id)_assetForDownload:(id)arg1 ;
-(void)_enqueueAssets:(id)arg1 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(void)_updateInstallProgress:(double)arg1 forAsset:(id)arg2 ;
-(id)_downloadForAsset:(id)arg1 error:(id*)arg2 ;
-(id)_storeKindForAssetType:(id)arg1 ;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(id)_assetTypeForStoreKind:(id)arg1 ;
-(BOOL)isOpen;
-(id)downloadManager;
-(id)init;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned long long)priority;
-(BOOL)open;
-(void)close;
@end
