/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIMovieScrubberTrackViewDelegate <NSObject>
@optional
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
-(void)movieScrubberTrackViewDidExpand:(id)arg1;
-(void)movieScrubberTrackViewDidCollapse:(id)arg1;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;

@end

