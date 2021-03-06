/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleTopLevelGestureProvider.h>
#import <libobjc.A.dylib/CCUIContentModuleExpandedStateListener.h>
#import <libobjc.A.dylib/CCUIContentClipping.h>
#import <libobjc.A.dylib/CCUIGroupRendering.h>

@class NSArray, CALayer, UIImageView, CCUICAPackageView, UIView, NSTimer, UIPanGestureRecognizer, UITapGestureRecognizer, UISelectionFeedbackGenerator, _UIEdgeFeedbackGenerator, UIImage, CCUICAPackageDescription, NSString;

@interface CCUIModuleSliderView : UIControl <UIGestureRecognizerDelegate, CCUIContentModuleTopLevelGestureProvider, CCUIContentModuleExpandedStateListener, CCUIContentClipping, CCUIGroupRendering> {

	UIImageView* _glyphImageView;
	CCUICAPackageView* _glyphPackageView;
	CCUICAPackageView* _compensatingGlyphPackageView;
	NSArray* _stepBackgroundViews;
	UIView* _continuousValueClippingView;
	UIView* _continuousValueBackgroundView;
	NSArray* _separatorViews;
	double _startingHeight;
	float _startingValue;
	BOOL _gestureStartedInside;
	NSTimer* _updatesCommitTimer;
	float _previousValue;
	UIPanGestureRecognizer* _valueChangeGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	_UIEdgeFeedbackGenerator* _edgeFeedbackGenerator;
	BOOL _glyphVisible;
	BOOL _throttleUpdates;
	BOOL _firstStepIsDisabled;
	BOOL _firstStepIsOff;
	BOOL _interactiveWhenUnexpanded;
	float _value;
	UIImage* _glyphImage;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	double _continuousSliderCornerRadius;
	unsigned long long _numberOfSteps;
	unsigned long long _step;

}

@property (assign,getter=isInteractiveWhenUnexpanded,nonatomic) BOOL interactiveWhenUnexpanded;              //@synthesize interactiveWhenUnexpanded=_interactiveWhenUnexpanded - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                                           //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;                             //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,retain) NSString * glyphState;                                                          //@synthesize glyphState=_glyphState - In the implementation block
@property (assign,getter=isGlyphVisible,nonatomic) BOOL glyphVisible;                                        //@synthesize glyphVisible=_glyphVisible - In the implementation block
@property (assign,nonatomic) BOOL throttleUpdates;                                                           //@synthesize throttleUpdates=_throttleUpdates - In the implementation block
@property (assign,nonatomic) double continuousSliderCornerRadius;                                            //@synthesize continuousSliderCornerRadius=_continuousSliderCornerRadius - In the implementation block
@property (assign,nonatomic) float value;                                                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSteps;                                               //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) BOOL firstStepIsDisabled;                                                       //@synthesize firstStepIsDisabled=_firstStepIsDisabled - In the implementation block
@property (assign,nonatomic) BOOL firstStepIsOff;                                                            //@synthesize firstStepIsOff=_firstStepIsOff - In the implementation block
@property (assign,nonatomic) unsigned long long step;                                                        //@synthesize step=_step - In the implementation block
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * topLevelGestureRecognizers; 
@property (nonatomic,readonly) NSArray * topLevelBlockingGestureRecognizers; 
@property (getter=isContentClippingRequired,nonatomic,readonly) BOOL contentClippingRequired; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
-(unsigned long long)step;
-(void)setStep:(unsigned long long)arg1 ;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(void)_createStepViewsForNumberOfSteps:(unsigned long long)arg1 ;
-(void)_handleValueChangeGestureRecognizer:(id)arg1 ;
-(void)_handleValueTapGestureRecognizer:(id)arg1 ;
-(BOOL)isStepped;
-(unsigned long long)_stepFromValue:(float)arg1 ;
-(float)_valueFromStep:(unsigned long long)arg1 ;
-(void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)arg1 ;
-(id)_newGlyphPackageView;
-(void)_configureGlyphPackageView:(id)arg1 ;
-(void)_configureCompensatingGlyphPackageView:(id)arg1 ;
-(void)_layoutValueViews;
-(BOOL)isInteractiveWhenUnexpanded;
-(void)_layoutValueViewsForStepChange:(BOOL)arg1 ;
-(void)_layoutContinuousValueView;
-(double)_fullStepHeight;
-(BOOL)firstStepIsOff;
-(double)_heightForStep:(unsigned long long)arg1 ;
-(void)_layoutContinuousValueViewForValue:(float)arg1 ;
-(double)_sliderHeightForValue:(float)arg1 ;
-(id)_createBackgroundViewForStep:(unsigned long long)arg1 ;
-(void)_createContinuousSliderClippingViewWithBackgroundView:(id)arg1 ;
-(double)_sliderHeight;
-(unsigned long long)_stepFromValue:(float)arg1 avoidCurrentStep:(BOOL)arg2 ;
-(BOOL)firstStepIsDisabled;
-(float)_valueForTouchLocation:(CGPoint)arg1 ;
-(float)_valueForTouchTranslation:(CGPoint)arg1 ;
-(float)_valueForPanGestureRecognizer:(id)arg1 withAbsoluteReference:(BOOL)arg2 ;
-(void)_updateStepFromValue:(float)arg1 playHaptic:(BOOL)arg2 ;
-(void)_updateStepFromValue:(float)arg1 playHaptic:(BOOL)arg2 toggleCurrentStep:(BOOL)arg3 ;
-(void)_layoutValueViewsForStepChange;
-(void)_beginTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_continueTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_endTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_updateValueForPanGestureRecognizer:(id)arg1 withAbsolutePosition:(BOOL)arg2 forContinuedGesture:(BOOL)arg3 ;
-(void)setFirstStepIsDisabled:(BOOL)arg1 ;
-(void)setFirstStepIsOff:(BOOL)arg1 ;
-(void)setContinuousSliderCornerRadius:(double)arg1 ;
-(id)_continuousValueClippingView;
-(BOOL)isGlyphVisible;
-(void)setGlyphVisible:(BOOL)arg1 ;
-(BOOL)throttleUpdates;
-(void)setThrottleUpdates:(BOOL)arg1 ;
-(double)continuousSliderCornerRadius;
-(void)setInteractiveWhenUnexpanded:(BOOL)arg1 ;
-(void)setNumberOfSteps:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSteps;
-(NSArray *)topLevelBlockingGestureRecognizers;
-(BOOL)isContentClippingRequired;
-(BOOL)isGroupRenderingRequired;
-(CALayer *)punchOutRootLayer;
-(NSArray *)topLevelGestureRecognizers;
-(void)contentModuleWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)_createSeparatorView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)value;
-(void)setValue:(float)arg1 ;
@end

