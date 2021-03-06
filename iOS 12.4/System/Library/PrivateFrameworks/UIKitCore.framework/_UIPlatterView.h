/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _DUIPreview, UIView, NSValue, _UIPlatterShadowView, _UIShapeView, _UIPortalView;

@interface _UIPlatterView : UIView {

	BOOL _constrainSize;
	BOOL _lifted;
	BOOL _backgroundVisible;
	BOOL _shadowVisible;
	BOOL _appliesOriginalRotation;
	BOOL _constrainSizeWhenNotLifted;
	BOOL _flipped;
	BOOL _precisionMode;
	_DUIPreview* _preview;
	double _orientationRotation;
	double _rotation;
	UIView* _componentView;
	double _stackRotation;
	NSValue* _anchorPointValueToAdjustToOnMoveToWindow;
	UIView* _backgroundView;
	_UIPlatterShadowView* _diffuseShadowView;
	_UIShapeView* _platterMaskView;
	_UIShapeView* _portalMaskView;
	_UIPortalView* _portalView;
	UIView* _portalWrapperView;
	_UIPlatterShadowView* _rimShadowView;
	CGPoint _offset;
	CGSize _overrideSize;
	CGSize _contentSize;
	UIEdgeInsets _contentInsets;
	CGAffineTransform _additionalTransform;
	CGAffineTransform _containerCounterScaleTransform;
	CGAffineTransform _containerCounterRotationTransform;

}

@property (nonatomic,readonly) UIView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) _UIPlatterShadowView * diffuseShadowView;                       //@synthesize diffuseShadowView=_diffuseShadowView - In the implementation block
@property (nonatomic,readonly) _UIShapeView * platterMaskView;                                 //@synthesize platterMaskView=_platterMaskView - In the implementation block
@property (nonatomic,readonly) _UIShapeView * portalMaskView;                                  //@synthesize portalMaskView=_portalMaskView - In the implementation block
@property (nonatomic,retain) _UIPortalView * portalView;                                       //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,readonly) UIView * portalWrapperView;                                     //@synthesize portalWrapperView=_portalWrapperView - In the implementation block
@property (nonatomic,readonly) _UIPlatterShadowView * rimShadowView;                           //@synthesize rimShadowView=_rimShadowView - In the implementation block
@property (assign,nonatomic) CGAffineTransform containerCounterScaleTransform;                 //@synthesize containerCounterScaleTransform=_containerCounterScaleTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform containerCounterRotationTransform;              //@synthesize containerCounterRotationTransform=_containerCounterRotationTransform - In the implementation block
@property (nonatomic,copy,readonly) _DUIPreview * preview;                                     //@synthesize preview=_preview - In the implementation block
@property (nonatomic,readonly) CGPoint badgeLocation; 
@property (assign,nonatomic) BOOL constrainSize;                                               //@synthesize constrainSize=_constrainSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (assign,getter=isLifted,nonatomic) BOOL lifted;                                      //@synthesize lifted=_lifted - In the implementation block
@property (assign,getter=isBackgroundVisible,nonatomic) BOOL backgroundVisible;                //@synthesize backgroundVisible=_backgroundVisible - In the implementation block
@property (assign,getter=isShadowVisible,nonatomic) BOOL shadowVisible;                        //@synthesize shadowVisible=_shadowVisible - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double orientationRotation;                                       //@synthesize orientationRotation=_orientationRotation - In the implementation block
@property (assign,nonatomic) CGSize overrideSize;                                              //@synthesize overrideSize=_overrideSize - In the implementation block
@property (assign,nonatomic) BOOL appliesOriginalRotation;                                     //@synthesize appliesOriginalRotation=_appliesOriginalRotation - In the implementation block
@property (assign,nonatomic) double rotation;                                                  //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView; 
@property (nonatomic,retain) UIView * componentView;                                           //@synthesize componentView=_componentView - In the implementation block
@property (assign,nonatomic) double stackRotation;                                             //@synthesize stackRotation=_stackRotation - In the implementation block
@property (nonatomic,retain) NSValue * anchorPointValueToAdjustToOnMoveToWindow;               //@synthesize anchorPointValueToAdjustToOnMoveToWindow=_anchorPointValueToAdjustToOnMoveToWindow - In the implementation block
@property (assign,nonatomic) BOOL constrainSizeWhenNotLifted;                                  //@synthesize constrainSizeWhenNotLifted=_constrainSizeWhenNotLifted - In the implementation block
@property (assign,nonatomic) CGAffineTransform additionalTransform;                            //@synthesize additionalTransform=_additionalTransform - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,getter=isFlipped,nonatomic) BOOL flipped;                                    //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) BOOL precisionMode;                                               //@synthesize precisionMode=_precisionMode - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)contentSize;
-(UIView *)backgroundView;
-(UIView *)sourceView;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(double)scaleFactor;
-(CGPoint)contentOffset;
-(void)setOverrideSize:(CGSize)arg1 ;
-(CGSize)overrideSize;
-(UIEdgeInsets)contentInsets;
-(CGPoint)offset;
-(void)setSourceView:(UIView *)arg1 ;
-(CATransform3D)targetTransform;
-(id)initWithDUIPreview:(id)arg1 ;
-(void)setAppliesOriginalRotation:(BOOL)arg1 ;
-(void)takeCounterTransformsToAddToContainer:(id)arg1 ;
-(void)setLifted:(BOOL)arg1 ;
-(_UIPlatterShadowView *)diffuseShadowView;
-(_UIPlatterShadowView *)rimShadowView;
-(BOOL)constrainSize;
-(_DUIPreview *)preview;
-(void)updateTransform;
-(UIView *)portalWrapperView;
-(void)setComponentView:(UIView *)arg1 ;
-(void)setShadowVisible:(BOOL)arg1 ;
-(void)setBackgroundVisible:(BOOL)arg1 ;
-(BOOL)isLifted;
-(BOOL)constrainSizeWhenNotLifted;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(CATransform3D)scaleTransform;
-(double)orientationRotation;
-(double)stackRotation;
-(CGPoint)badgeLocation;
-(void)setConstrainSize:(BOOL)arg1 ;
-(void)setComponentViews:(id)arg1 ;
-(void)setOrientationRotation:(double)arg1 ;
-(void)setStackRotation:(double)arg1 ;
-(void)_unmaskPlatterView;
-(BOOL)isBackgroundVisible;
-(BOOL)isShadowVisible;
-(void)setOffset:(CGPoint)arg1 ;
-(BOOL)appliesOriginalRotation;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(UIView *)componentView;
-(NSValue *)anchorPointValueToAdjustToOnMoveToWindow;
-(void)setAnchorPointValueToAdjustToOnMoveToWindow:(NSValue *)arg1 ;
-(void)setConstrainSizeWhenNotLifted:(BOOL)arg1 ;
-(CGAffineTransform)additionalTransform;
-(void)setAdditionalTransform:(CGAffineTransform)arg1 ;
-(BOOL)isFlipped;
-(void)setFlipped:(BOOL)arg1 ;
-(BOOL)precisionMode;
-(void)setPrecisionMode:(BOOL)arg1 ;
-(_UIShapeView *)platterMaskView;
-(_UIShapeView *)portalMaskView;
-(CGAffineTransform)containerCounterScaleTransform;
-(void)setContainerCounterScaleTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)containerCounterRotationTransform;
-(void)setContainerCounterRotationTransform:(CGAffineTransform)arg1 ;
@end

