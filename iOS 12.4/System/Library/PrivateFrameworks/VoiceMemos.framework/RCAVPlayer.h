/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@protocol RCAVPlayerDelegate;
@class AVPlayerItem;

@interface RCAVPlayer : AVPlayer {

	BOOL _valid;
	BOOL _scrubbing;
	id _periodicTimeObserverToken;
	AVPlayerItem* _AVPlayerItemBeingObserved;
	double _updateRate;
	id<RCAVPlayerDelegate> _delegate;

}

@property (assign,nonatomic) double updateRate;                                   //@synthesize updateRate=_updateRate - In the implementation block
@property (nonatomic,readonly) BOOL isReadyToPlay; 
@property (assign,nonatomic,__weak) id<RCAVPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_beginScrubbing;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)_endScrubbing;
-(BOOL)isReadyToPlay;
-(void)setUpdateRate:(double)arg1 ;
-(void)_AVAudioSessionMediaServicesWereLostNotification:(id)arg1 ;
-(void)_AVAudioSessionMediaServicesWereResetNotification:(id)arg1 ;
-(void)_endObservingObservedPlayerItem;
-(void)_beginObservingPlayerItem:(id)arg1 ;
-(void)_currentItemBecameReadyToPlay;
-(void)_rateDidChange;
-(void)_periodicTimeUpdate;
-(double)updateRate;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<RCAVPlayerDelegate>)arg1 ;
-(id<RCAVPlayerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_invalidate;
@end

