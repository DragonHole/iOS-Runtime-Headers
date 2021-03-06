/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMusicPlayerController.h>

@protocol OS_dispatch_queue;
@class _MPMusicPlayerQueueTransaction, MPCPlayerPath, MPCRemotePlaybackEngine, NSObject;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {

	_MPMusicPlayerQueueTransaction* _queueTransaction;
	MPCPlayerPath* _playerPath;
	MPCRemotePlaybackEngine* _playbackEngine;
	long long _notificationsCount;
	NSObject*<OS_dispatch_queue> _queueTransactionQueue;

}

@property (nonatomic,readonly) MPCPlayerPath * playerPath;                                      //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) MPCRemotePlaybackEngine * playbackEngine;                        //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,nonatomic) long long notificationsCount;                                      //@synthesize notificationsCount=_notificationsCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queueTransactionQueue;              //@synthesize queueTransactionQueue=_queueTransactionQueue - In the implementation block
@property (nonatomic,retain) _MPMusicPlayerQueueTransaction * queueTransaction;                 //@synthesize queueTransaction=_queueTransaction - In the implementation block
+(BOOL)_isPlayerInstalled;
-(void)_queueDidChangeWithResponse:(id)arg1 ;
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(MPCPlayerPath *)playerPath;
-(void)_playerPathDidChange:(id)arg1 ;
-(void)_playbackEngineDidDisconnect:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queueTransactionQueue;
-(id)_onAccessQueue_beginQueueTransactionWithCompletionHandler:(/*^block*/id)arg1 usingSemaphore:(id)arg2 ;
-(BOOL)_onAccessQueue_isPerformingQueueTransactionWithID:(id)arg1 ;
-(void)_onAccessQueue_endQueueTransactionWithTracklist:(id)arg1 forReason:(long long)arg2 error:(id)arg3 ;
-(id)_mutableQueueFromTracklist:(id)arg1 mediaToResponseItemMap:(id*)arg2 ;
-(id)_queueModificationRequestsFromTracklist:(id)arg1 withMutatedQueue:(id)arg2 mediaToResponseItemMap:(id)arg3 ;
-(void)_onAccessQueue_transitionQueueTransactionToState:(long long)arg1 ;
-(_MPMusicPlayerQueueTransaction *)queueTransaction;
-(void)setQueueTransaction:(_MPMusicPlayerQueueTransaction *)arg1 ;
-(id)_queueFromTracklist:(id)arg1 ;
-(void)performQueueTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MPCRemotePlaybackEngine *)playbackEngine;
-(long long)notificationsCount;
-(void)setNotificationsCount:(long long)arg1 ;
-(void)prepareToPlay;
-(id)_init;
@end

