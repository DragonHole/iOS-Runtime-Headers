/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUNowPlayingDelegate <NSObject>
@optional
-(void)nowPlayingControllerDidBeginListeningForNotifications:(id)arg1;
-(void)nowPlayingControllerDidStopListeningForNotifications:(id)arg1;
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
-(void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;

@end
