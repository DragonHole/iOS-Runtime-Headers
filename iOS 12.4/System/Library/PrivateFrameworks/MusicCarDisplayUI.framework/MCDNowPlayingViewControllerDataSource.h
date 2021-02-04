/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDataSource <NSObject>
@optional
-(long long)shuffleTypeForNowPlayingViewController:(id)arg1;
-(long long)repeatTypeForNowPlayingViewController:(id)arg1;
-(BOOL)likedForNowPlayingViewController:(id)arg1;

@required
-(id)artistTextForNowPlayingController:(id)arg1;
-(id)albumTextForNowPlayingController:(id)arg1;
-(id)titleForNowPlayingController:(id)arg1;
-(id)backgroundArtForNowPlayingController:(id)arg1;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
-(SCD_Struct_MC0*)durationSnapshotForNowPlayingViewController:(id)arg1;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;

@end
