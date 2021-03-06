/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoPlayerViewControllerDelegate <NSObject>
@optional
-(void)videoPlayerViewController:(id)arg1 initiatedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 pausedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
-(BOOL)videoPlayerViewControllerShouldStartPlayback:(id)arg1;

@required
-(void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;

@end

