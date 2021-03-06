/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUGridCellBackgroundDisplayOptions, HFWallpaperSlice, UIVisualEffectView, UIView;

@interface HUGridCellBackgroundView : UIView {

	BOOL _pressed;
	unsigned long long _backgroundState;
	HUGridCellBackgroundDisplayOptions* _displayOptions;
	HFWallpaperSlice* _blurredWallpaperSlice;
	double _cornerRadius;
	UIVisualEffectView* _effectView;
	UIView* _ccMaterialView;
	CGRect _normalizedWallpaperRect;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                                  //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * ccMaterialView;                                          //@synthesize ccMaterialView=_ccMaterialView - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundState;                               //@synthesize backgroundState=_backgroundState - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                    //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,retain) HUGridCellBackgroundDisplayOptions * displayOptions;              //@synthesize displayOptions=_displayOptions - In the implementation block
@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                   //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                         //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(id)_normalBackgroundColor;
-(id)_highlightedBackgroundColor;
-(void)_updateDisplay;
-(unsigned long long)backgroundState;
-(void)setDisplayOptions:(HUGridCellBackgroundDisplayOptions *)arg1 ;
-(CGRect)normalizedWallpaperRect;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(UIView *)ccMaterialView;
-(HUGridCellBackgroundDisplayOptions *)displayOptions;
-(void)setCcMaterialView:(UIView *)arg1 ;
-(void)_updateWallpaperContentsScale;
-(void)_updateCornerRadius;
-(void)_updateWallpaperContentsRect;
-(BOOL)_shouldUsePrecomputedWallpaperContents;
-(BOOL)_shouldUseCCMaterialView;
-(void)_createCCMaterialViewIfNecessary;
-(BOOL)_shouldUseVisualEffectStyle;
-(void)_createEffectViewIfNecessary;
-(BOOL)_isUsingControlCenterDisplayStyle;
-(void)setBackgroundState:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)didMoveToSuperview;
-(double)cornerRadius;
-(void)_updateBackgroundColor;
@end

