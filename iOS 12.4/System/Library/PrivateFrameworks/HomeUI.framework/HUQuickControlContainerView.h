/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUQuickControlContainerViewDelegate;
@class UIView, UILayoutGuide, NSString, HUPillButton, HUQuickControlSummaryView, HUControlHostView, NSArray, NSLayoutConstraint, _UIBackdropView, _UIBackdropViewSettings, HUQuickControlAuxiliaryHostView, HUQuickControlButtonRowView;

@interface HUQuickControlContainerView : UIView {

	BOOL _shouldShowActiveControl;
	BOOL _shouldShowAlternateControlButton;
	BOOL _shouldShowDetailsButton;
	BOOL _controlViewSupportsTransformTransition;
	BOOL _showAlternateControlButton;
	double _controlTransitionProgress;
	double _blurTransitionProgress;
	double _chromeTransitionProgress;
	double _initialSourceViewScale;
	unsigned long long _edgesForExtendedLayout;
	UIView* _activeControlView;
	UILayoutGuide* _controlViewPreferredFrameLayoutGuide;
	NSString* _alternateControlButtonTitle;
	HUPillButton* _alternateControlButton;
	HUQuickControlSummaryView* _summaryView;
	id<HUQuickControlContainerViewDelegate> _delegate;
	HUControlHostView* _controlHostView;
	UILayoutGuide* _controlViewLayoutGuide;
	NSArray* _contentConstraints;
	NSLayoutConstraint* _compactControlBottomConstraint;
	_UIBackdropView* _blurView;
	UIView* _blurTintView;
	_UIBackdropViewSettings* _blurSettings;
	HUQuickControlAuxiliaryHostView* _auxiliaryHostView;
	HUQuickControlButtonRowView* _buttonRowView;
	HUPillButton* _detailsButton;
	UILayoutGuide* _contentToAuxiliarySpacingLayoutGuide;
	UILayoutGuide* _topToSummarySpacingLayoutGuide;
	CGRect _sourceRect;

}

@property (nonatomic,retain) HUControlHostView * controlHostView;                                    //@synthesize controlHostView=_controlHostView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * controlViewLayoutGuide;                                 //@synthesize controlViewLayoutGuide=_controlViewLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * controlViewPreferredFrameLayoutGuide;                   //@synthesize controlViewPreferredFrameLayoutGuide=_controlViewPreferredFrameLayoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                                           //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * compactControlBottomConstraint;                    //@synthesize compactControlBottomConstraint=_compactControlBottomConstraint - In the implementation block
@property (nonatomic,retain) _UIBackdropView * blurView;                                             //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * blurTintView;                                                  //@synthesize blurTintView=_blurTintView - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * blurSettings;                                 //@synthesize blurSettings=_blurSettings - In the implementation block
@property (nonatomic,retain) HUQuickControlAuxiliaryHostView * auxiliaryHostView;                    //@synthesize auxiliaryHostView=_auxiliaryHostView - In the implementation block
@property (assign,nonatomic) BOOL showAlternateControlButton;                                        //@synthesize showAlternateControlButton=_showAlternateControlButton - In the implementation block
@property (nonatomic,retain) HUQuickControlButtonRowView * buttonRowView;                            //@synthesize buttonRowView=_buttonRowView - In the implementation block
@property (nonatomic,retain) HUPillButton * detailsButton;                                           //@synthesize detailsButton=_detailsButton - In the implementation block
@property (nonatomic,retain) HUPillButton * alternateControlButton;                                  //@synthesize alternateControlButton=_alternateControlButton - In the implementation block
@property (nonatomic,retain) HUQuickControlSummaryView * summaryView;                                //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * contentToAuxiliarySpacingLayoutGuide;                   //@synthesize contentToAuxiliarySpacingLayoutGuide=_contentToAuxiliarySpacingLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * topToSummarySpacingLayoutGuide;                         //@synthesize topToSummarySpacingLayoutGuide=_topToSummarySpacingLayoutGuide - In the implementation block
@property (assign,nonatomic) double controlTransitionProgress;                                       //@synthesize controlTransitionProgress=_controlTransitionProgress - In the implementation block
@property (assign,nonatomic) double blurTransitionProgress;                                          //@synthesize blurTransitionProgress=_blurTransitionProgress - In the implementation block
@property (assign,nonatomic) double chromeTransitionProgress;                                        //@synthesize chromeTransitionProgress=_chromeTransitionProgress - In the implementation block
@property (assign,nonatomic) double initialSourceViewScale;                                          //@synthesize initialSourceViewScale=_initialSourceViewScale - In the implementation block
@property (assign,nonatomic) BOOL shouldShowActiveControl;                                           //@synthesize shouldShowActiveControl=_shouldShowActiveControl - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAlternateControlButton;                                  //@synthesize shouldShowAlternateControlButton=_shouldShowAlternateControlButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDetailsButton;                                           //@synthesize shouldShowDetailsButton=_shouldShowDetailsButton - In the implementation block
@property (assign,nonatomic) unsigned long long edgesForExtendedLayout;                              //@synthesize edgesForExtendedLayout=_edgesForExtendedLayout - In the implementation block
@property (nonatomic,retain) UIView * activeControlView;                                             //@synthesize activeControlView=_activeControlView - In the implementation block
@property (assign,nonatomic) BOOL controlViewSupportsTransformTransition;                            //@synthesize controlViewSupportsTransformTransition=_controlViewSupportsTransformTransition - In the implementation block
@property (nonatomic,copy) NSString * alternateControlButtonTitle;                                   //@synthesize alternateControlButtonTitle=_alternateControlButtonTitle - In the implementation block
@property (nonatomic,readonly) CGRect presentedControlFrame; 
@property (nonatomic,readonly) CGRect sourceRect;                                                    //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,__weak,readonly) id<HUQuickControlContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(HUPillButton *)detailsButton;
-(void)setDetailsButton:(HUPillButton *)arg1 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentConstraints;
-(long long)_sizeSubclass;
-(void)_setupBlurView;
-(UIView *)activeControlView;
-(void)setControlHostView:(HUControlHostView *)arg1 ;
-(HUControlHostView *)controlHostView;
-(CGPoint)_controlHostCenter;
-(CGAffineTransform)_controlHostTransform;
-(void)_detailsButtonTapped:(id)arg1 ;
-(void)setButtonRowView:(HUQuickControlButtonRowView *)arg1 ;
-(HUQuickControlButtonRowView *)buttonRowView;
-(void)setAuxiliaryHostView:(HUQuickControlAuxiliaryHostView *)arg1 ;
-(HUQuickControlAuxiliaryHostView *)auxiliaryHostView;
-(void)_setupAlternateControlButtonIfNecessary;
-(void)setSummaryView:(HUQuickControlSummaryView *)arg1 ;
-(HUQuickControlSummaryView *)summaryView;
-(void)setTopToSummarySpacingLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)topToSummarySpacingLayoutGuide;
-(void)setContentToAuxiliarySpacingLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)contentToAuxiliarySpacingLayoutGuide;
-(void)setControlViewLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)controlViewLayoutGuide;
-(void)setControlViewPreferredFrameLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)controlViewPreferredFrameLayoutGuide;
-(void)_updateLayoutMargins;
-(void)_updateContentAlignment;
-(void)_updateAlternateControlButtonVisibility;
-(BOOL)shouldShowActiveControl;
-(void)setBlurSettings:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)blurSettings;
-(void)setBlurTintView:(UIView *)arg1 ;
-(UIView *)blurTintView;
-(HUPillButton *)alternateControlButton;
-(void)setAlternateControlButton:(HUPillButton *)arg1 ;
-(void)_alternateControlButtonTapped:(id)arg1 ;
-(void)_updateAlternateControlButtonTitle;
-(BOOL)showAlternateControlButton;
-(NSString *)alternateControlButtonTitle;
-(BOOL)shouldShowAlternateControlButton;
-(void)setShowAlternateControlButton:(BOOL)arg1 ;
-(BOOL)_shouldShowControlView;
-(void)_updateControlHostLayout;
-(void)_updateCompactControlBottomConstraint;
-(BOOL)_useCompactHeightLayout;
-(void)_configureCompactHeightConstraints:(id)arg1 ;
-(void)_configureRegularHeightConstraints:(id)arg1 ;
-(void)_configureControlViewLayoutGuideConstraints:(id)arg1 ;
-(double)_summaryFirstBaselineToControlTopSpacing;
-(NSLayoutConstraint *)compactControlBottomConstraint;
-(void)setCompactControlBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)_controlHostCenterForPresentationProgress:(double)arg1 ;
-(CGSize)_presentedControlHostSize;
-(BOOL)controlViewSupportsTransformTransition;
-(double)initialSourceViewScale;
-(double)controlTransitionProgress;
-(CGAffineTransform)_controlHostTransformForPresentationProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)setShouldShowActiveControl:(BOOL)arg1 ;
-(void)setShouldShowAlternateControlButton:(BOOL)arg1 ;
-(void)setAlternateControlButtonTitle:(NSString *)arg1 ;
-(void)setActiveControlView:(UIView *)arg1 ;
-(void)setInitialSourceViewScale:(double)arg1 ;
-(void)setShouldShowDetailsButton:(BOOL)arg1 ;
-(void)setControlTransitionProgress:(double)arg1 ;
-(void)setBlurTransitionProgress:(double)arg1 ;
-(void)setChromeTransitionProgress:(double)arg1 ;
-(void)showAuxiliaryView:(id)arg1 ;
-(void)hideAuxiliaryView;
-(CGRect)presentedControlFrame;
-(CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1 ;
-(double)blurTransitionProgress;
-(double)chromeTransitionProgress;
-(BOOL)shouldShowDetailsButton;
-(void)setControlViewSupportsTransformTransition:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id<HUQuickControlContainerViewDelegate>)delegate;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(CGRect)sourceRect;
-(_UIBackdropView *)blurView;
-(unsigned long long)edgesForExtendedLayout;
-(void)setEdgesForExtendedLayout:(unsigned long long)arg1 ;
-(void)setBlurView:(_UIBackdropView *)arg1 ;
@end

