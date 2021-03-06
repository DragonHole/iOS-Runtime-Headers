/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JTCompositionClipsDataSource <NSObject>
@required
-(CGSize*)naturalSize;
-(BOOL)fullScreenPlaybackOnExternalDisplay;
-(id)clipAtIndex:(long long)arg1;
-(int)frameRate;
-(BOOL)use2160Pcontent:(BOOL)arg1;
-(BOOL)screenCanShow2160P;
-(long long)indexOfClip:(id)arg1;
-(BOOL)isExporting;
-(int)timeScale;
-(BOOL)isFullScreen;
-(long long)clipCount;
-(BOOL)duckAllAudioClips;
-(id)backgroundAudioClip;
-(BOOL)dontRenderLiveTitles;
-(id)currentClip;
-(BOOL)supportsDeepColor;
-(int)duration;
-(double)imageScale;

@end

