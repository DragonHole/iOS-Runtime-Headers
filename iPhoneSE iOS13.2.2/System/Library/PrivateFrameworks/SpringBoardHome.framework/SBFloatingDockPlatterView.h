/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, _SBFloatingDockPlatterMetrics, NSString;

@interface SBFloatingDockPlatterView : UIView {

	BOOL _hasShadow;
	double _referenceHeight;
	double _maximumContinuousCornerRadius;
	UIView* _backgroundView;
	UIImageView* _shadowView;
	_SBFloatingDockPlatterMetrics* _metrics;

}

@property (nonatomic,retain) UIImageView * shadowView;                             //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) _SBFloatingDockPlatterMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) double referenceHeight;                               //@synthesize referenceHeight=_referenceHeight - In the implementation block
@property (assign,nonatomic) double maximumContinuousCornerRadius;                 //@synthesize maximumContinuousCornerRadius=_maximumContinuousCornerRadius - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (assign,nonatomic) BOOL hasShadow;                                       //@synthesize hasShadow=_hasShadow - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets shadowOutsets; 
@property (nonatomic,retain) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)borderColorForUserInterfaceStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_SBFloatingDockPlatterMetrics *)metrics;
-(void)setMetrics:(_SBFloatingDockPlatterMetrics *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(BOOL)hasShadow;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIImageView *)shadowView;
-(void)setShadowView:(UIImageView *)arg1 ;
-(void)setHasShadow:(BOOL)arg1 ;
-(void)setReferenceHeight:(double)arg1 ;
-(double)referenceHeight;
-(void)setMaximumContinuousCornerRadius:(double)arg1 ;
-(UIEdgeInsets)shadowOutsets;
-(UIEdgeInsets)shadowOutsetsForBounds:(CGRect)arg1 ;
-(void)updateBorderVisualStyling;
-(double)_maxShadowViewAlpha;
-(UIEdgeInsets)_shadowOutsetsForMetrics:(id)arg1 ;
-(id)_metricsForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)_shadowInsetsForMetrics:(id)arg1 ;
-(id)_shadowImageViewForMetrics:(id)arg1 ;
-(double)maximumContinuousCornerRadius;
-(id)_shadowImageForMetrics:(id)arg1 ;
@end

