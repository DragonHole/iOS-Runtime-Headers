/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class WFGradient, CAGradientLayer, UITraitCollection;

@interface WFFloatingLayer : CALayer {

	BOOL _pressed;
	BOOL _colorizesShadow;
	BOOL _usePillCornerRadius;
	WFGradient* _gradient;
	double _scalingFactor;
	CAGradientLayer* _gradientLayer;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) BOOL colorizesShadow;                                //@synthesize colorizesShadow=_colorizesShadow - In the implementation block
@property (assign,nonatomic) BOOL usePillCornerRadius;                            //@synthesize usePillCornerRadius=_usePillCornerRadius - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic,__weak) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,copy) WFGradient * gradient;                                 //@synthesize gradient=_gradient - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                       //@synthesize pressed=_pressed - In the implementation block
-(id)init;
-(UITraitCollection *)traitCollection;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)setGradient:(WFGradient *)arg1 ;
-(WFGradient *)gradient;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)layoutSublayers;
-(void)updateBackgroundColor;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)applyConfiguration:(id)arg1 ;
-(double)scalingFactor;
-(void)setScalingFactor:(double)arg1 ;
-(void)updateShadowColor;
-(BOOL)colorizesShadow;
-(void)setColorizesShadow:(BOOL)arg1 ;
-(BOOL)usePillCornerRadius;
-(void)setUsePillCornerRadius:(BOOL)arg1 ;
@end
