/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDelegate <NSObject>
@optional
-(id)nowPlayingViewControllerGetPlaybackRate:(id)arg1;
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL*)arg5;
-(BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg1;
-(BOOL)nowPlayingViewControllerIsFuseSubscriber:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowAlbumLink:(id)arg1;
-(void)nowPlayingViewControllerDidRequestAlbum:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg1;
-(void)nowPlayingViewControllerChangePlaybackRate:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg1;
-(void)nowPlayingViewControllerMore:(id)arg1;

@end
