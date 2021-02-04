/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@class NSString;

@interface NULoggingVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoDidAppearWithVideoItem:(id)arg1 ;
-(void)videoDidDisappearWithVideoItem:(id)arg1 ;
-(void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)muteStateChanged:(BOOL)arg1 withVideoItem:(id)arg2 metadata:(id)arg3 ;
-(void)videoPlaybackPassedFirstQuartileWithVideoItem:(id)arg1 ;
-(void)videoPlaybackPassedSecondQuartileWithVideoItem:(id)arg1 ;
-(void)videoPlaybackPassedThirdQuartileWithVideoItem:(id)arg1 ;
-(void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1 ;
-(void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1 ;
-(void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1 ;
-(void)userEngagedWithReplayButtonWithVideoItem:(id)arg1 ;
-(void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1 ;
-(id)init;
@end
