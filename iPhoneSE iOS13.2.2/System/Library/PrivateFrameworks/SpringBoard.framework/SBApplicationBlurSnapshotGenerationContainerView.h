/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SBApplicationBlurSnapshotGenerationContainerView : UIView {

	UIView* _wallpaperView;
	UIView* _realSnapshotView;
	UIView* _liveBlurView;

}

@property (nonatomic,retain) UIView * wallpaperView;                 //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) UIView * realSnapshotView;              //@synthesize realSnapshotView=_realSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * liveBlurView;                  //@synthesize liveBlurView=_liveBlurView - In the implementation block
-(void)layoutSubviews;
-(void)setWallpaperView:(UIView *)arg1 ;
-(UIView *)wallpaperView;
-(void)setLiveBlurView:(UIView *)arg1 ;
-(void)setRealSnapshotView:(UIView *)arg1 ;
-(UIView *)realSnapshotView;
-(UIView *)liveBlurView;
@end

