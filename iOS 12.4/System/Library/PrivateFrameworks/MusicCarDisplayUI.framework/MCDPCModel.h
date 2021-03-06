/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
@class NSString, MCDPCItem, NSIndexPath, NSMutableDictionary, MPWeakTimer, NSObject;

@interface MCDPCModel : NSObject {

	BOOL _initiatedActivityInSession;
	BOOL _didFinishInitialLoad;
	BOOL _shouldReloadAgain;
	unsigned _supportedAPIMask;
	NSString* _bundleID;
	MCDPCItem* _rootItem;
	/*^block*/id _playbackCompletion;
	/*^block*/id _containerCompletion;
	NSIndexPath* _selectedIndexPath;
	NSMutableDictionary* _items;
	NSMutableDictionary* _beginLoadingBlocks;
	MPWeakTimer* _beginLoadingTimeoutTimer;
	MPWeakTimer* _playbackProgressTimeoutTimer;
	MPWeakTimer* _modelSourceInvalidatedTimer;
	NSObject*<OS_dispatch_queue> _mediaRemoteNotificationQueue;
	NSObject*<OS_dispatch_queue> _mediaRemoteItemQueue;
	CGSize _imageSize;

}

@property (nonatomic,copy) id playbackCompletion;                                                    //@synthesize playbackCompletion=_playbackCompletion - In the implementation block
@property (nonatomic,copy) id containerCompletion;                                                   //@synthesize containerCompletion=_containerCompletion - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                        //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * items;                                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialLoad;                                              //@synthesize didFinishInitialLoad=_didFinishInitialLoad - In the implementation block
@property (assign,nonatomic) unsigned supportedAPIMask;                                              //@synthesize supportedAPIMask=_supportedAPIMask - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * beginLoadingBlocks;                               //@synthesize beginLoadingBlocks=_beginLoadingBlocks - In the implementation block
@property (nonatomic,retain) MPWeakTimer * beginLoadingTimeoutTimer;                                 //@synthesize beginLoadingTimeoutTimer=_beginLoadingTimeoutTimer - In the implementation block
@property (nonatomic,retain) MPWeakTimer * playbackProgressTimeoutTimer;                             //@synthesize playbackProgressTimeoutTimer=_playbackProgressTimeoutTimer - In the implementation block
@property (nonatomic,retain) MPWeakTimer * modelSourceInvalidatedTimer;                              //@synthesize modelSourceInvalidatedTimer=_modelSourceInvalidatedTimer - In the implementation block
@property (assign,nonatomic) BOOL shouldReloadAgain;                                                 //@synthesize shouldReloadAgain=_shouldReloadAgain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaRemoteNotificationQueue;              //@synthesize mediaRemoteNotificationQueue=_mediaRemoteNotificationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaRemoteItemQueue;                      //@synthesize mediaRemoteItemQueue=_mediaRemoteItemQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) MCDPCItem * rootItem;                                                 //@synthesize rootItem=_rootItem - In the implementation block
@property (nonatomic,readonly) NSString * appTitle; 
@property (assign,nonatomic) CGSize imageSize;                                                       //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL initiatedActivityInSession;                                        //@synthesize initiatedActivityInSession=_initiatedActivityInSession - In the implementation block
-(MCDPCItem *)rootItem;
-(NSIndexPath *)selectedIndexPath;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)appTitle;
-(void)setInitiatedActivityInSession:(BOOL)arg1 ;
-(void)initiatePlaybackAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)didFinishInitialLoad;
-(void)getRemoteAppIsPlaying:(/*^block*/id)arg1 ;
-(void)setDidFinishInitialLoad:(BOOL)arg1 ;
-(id)containerForRoot;
-(void)reloadAgainIfInvalidationCalled;
-(void)_registerForClientContent;
-(void)setSupportedAPIMask:(unsigned)arg1 ;
-(void)_browsableContentDidRegisterNotification:(id)arg1 ;
-(void)_dataSourceInvalidated:(id)arg1 ;
-(void)_contentItemsUpdated:(id)arg1 ;
-(void)_nowPlayingDidChangeNotification:(id)arg1 ;
-(void)setShouldReloadAgain:(BOOL)arg1 ;
-(BOOL)initiatedActivityInSession;
-(MPWeakTimer *)modelSourceInvalidatedTimer;
-(NSObject*<OS_dispatch_queue>)mediaRemoteNotificationQueue;
-(void)setModelSourceInvalidatedTimer:(MPWeakTimer *)arg1 ;
-(BOOL)shouldReloadAgain;
-(id)itemsFromMRContentItems:(id)arg1 ;
-(unsigned)supportedAPIMask;
-(void)_finishBeginLoadingNotification:(id)arg1 ;
-(NSMutableDictionary *)beginLoadingBlocks;
-(void)_setupBeginLoadingTimeoutTimerWithCompletion:(/*^block*/id)arg1 ;
-(id)_errorForNotification:(id)arg1 ;
-(void)_invalidateBeginLoadingTimeoutTimer;
-(void)_invalidatePlaybackProgressTimeoutTimer;
-(void)_setupPlaybackProgressTimeoutTimerWithCompletion:(/*^block*/id)arg1 ;
-(void)setPlaybackCompletion:(id)arg1 ;
-(void)_finishPlaybackNotification:(id)arg1 ;
-(id)playbackCompletion;
-(void)setBeginLoadingTimeoutTimer:(MPWeakTimer *)arg1 ;
-(MPWeakTimer *)beginLoadingTimeoutTimer;
-(void)setPlaybackProgressTimeoutTimer:(MPWeakTimer *)arg1 ;
-(MPWeakTimer *)playbackProgressTimeoutTimer;
-(void)beginLoadingItemAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getNowPlayingIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getChildrenAtIndexPath:(id)arg1 inRange:(NSRange)arg2 completion:(/*^block*/id)arg3 ;
-(id)containerCompletion;
-(void)setContainerCompletion:(id)arg1 ;
-(void)setBeginLoadingBlocks:(NSMutableDictionary *)arg1 ;
-(void)setMediaRemoteNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)mediaRemoteItemQueue;
-(void)setMediaRemoteItemQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)_registerNotifications;
-(NSMutableDictionary *)items;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(CGSize)imageSize;
-(NSString *)bundleID;
@end

