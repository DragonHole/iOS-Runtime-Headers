/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICurrentContextPresentationController.h>

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

	UIView* _counterRotatedView;
	double _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;
	long long _originalOrientation;
	BOOL _presentingViewControllerHandledCounterRotation;
	/*^block*/id finalRotationBlock;

}
-(void)dealloc;
-(long long)presentationStyle;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_setPresentedViewController:(id)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(void)_removeCounterRotation;
-(BOOL)_invokesDelegatesOnOrientationChange;
-(void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(BOOL)arg5 ;
@end
