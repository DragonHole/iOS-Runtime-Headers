/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVView.h>

@class NSArray, UIView, UIStackView, UIVisualEffectView, NSString, _UIVisualEffectBackdropView;

@interface AVBackdropView : AVView {

	NSArray* _temporaryArrangedSubviews;
	BOOL _disablesAutoLayout;
	long long _axis;
	unsigned long long _shapeStyle;
	UIView* _targetViewForSecondaryMaterialOverlay;
	UIStackView* _stackView;
	UIVisualEffectView* _visualEffectView;
	UIVisualEffectView* _secondaryMaterialOverlayView;
	NSArray* _secondaryMaterialOverlayViewConstraints;
	NSString* _groupName;
	_UIVisualEffectBackdropView* _captureView;

}

@property (nonatomic,readonly) UIStackView * stackView;                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;                        //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryMaterialOverlayView;              //@synthesize secondaryMaterialOverlayView=_secondaryMaterialOverlayView - In the implementation block
@property (nonatomic,retain) NSArray * secondaryMaterialOverlayViewConstraints;              //@synthesize secondaryMaterialOverlayViewConstraints=_secondaryMaterialOverlayViewConstraints - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                             //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic,__weak) _UIVisualEffectBackdropView * captureView;               //@synthesize captureView=_captureView - In the implementation block
@property (assign,nonatomic) BOOL disablesAutoLayout;                                        //@synthesize disablesAutoLayout=_disablesAutoLayout - In the implementation block
@property (nonatomic,readonly) long long axis;                                               //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentLayoutMargins; 
@property (assign,nonatomic) unsigned long long shapeStyle;                                  //@synthesize shapeStyle=_shapeStyle - In the implementation block
@property (nonatomic,retain) UIView * targetViewForSecondaryMaterialOverlay;                 //@synthesize targetViewForSecondaryMaterialOverlay=_targetViewForSecondaryMaterialOverlay - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
+(id)secondaryMaterialOverlayView;
+(id)baseEffects;
+(void)removeAllFiltersFromView:(id)arg1 ;
+(void)applyPrimaryGlyphTintToView:(id)arg1 ;
+(void)applySecondaryGlyphTintToView:(id)arg1 ;
+(void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3 ;
+(void)applyBaseTrackTintToView:(id)arg1 ;
+(void)applyCompletedTrackTintToView:(id)arg1 ;
+(void)applyLoadedTrackTintToView:(id)arg1 ;
+(void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3 ;
+(void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4 ;
-(id)initWithArrangedSubviews:(id)arg1 captureView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 captureView:(id)arg2 disablingAutoLayout:(BOOL)arg3 ;
-(void)setArrangedSubviews:(id)arg1 axis:(long long)arg2 ;
-(void)setCustomSpacing:(double)arg1 afterViews:(id)arg2 ;
-(void)setTargetViewForSecondaryMaterialOverlay:(UIView *)arg1 ;
-(NSDirectionalEdgeInsets)contentLayoutMargins;
-(void)setContentLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)setCaptureGroupName:(id)arg1 captureView:(id)arg2 ;
-(id)_stackViewIfLoaded;
-(void)_applyShapeStyle;
-(void)_ensureGroupNameAndCaptureView;
-(void)_updateTransparencyOfVisualEffectView;
-(UIView *)targetViewForSecondaryMaterialOverlay;
-(UIVisualEffectView *)secondaryMaterialOverlayView;
-(void)setSecondaryMaterialOverlayView:(UIVisualEffectView *)arg1 ;
-(NSArray *)secondaryMaterialOverlayViewConstraints;
-(void)setSecondaryMaterialOverlayViewConstraints:(NSArray *)arg1 ;
-(BOOL)disablesAutoLayout;
-(void)setDisablesAutoLayout:(BOOL)arg1 ;
-(unsigned long long)shapeStyle;
-(void)setShapeStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)axis;
-(UIStackView *)stackView;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)didMoveToWindow;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(_UIVisualEffectBackdropView *)captureView;
-(UIVisualEffectView *)visualEffectView;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
@end

