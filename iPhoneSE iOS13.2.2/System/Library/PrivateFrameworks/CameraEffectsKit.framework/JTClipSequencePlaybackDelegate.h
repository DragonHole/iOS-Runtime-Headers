/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JTClipSequencePlaybackDelegate <NSObject>
@optional
-(void)playbackDidStart:(id)arg1;
-(void)playbackReadyForDisplayChanged:(id)arg1 isReady:(BOOL)arg2;
-(void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
-(void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2;
-(void)playerWillBeDestroyed:(id)arg1;
-(void)playbackDidReachEnd:(id)arg1;

@required
-(void)mediaserverdCrashed;

@end

