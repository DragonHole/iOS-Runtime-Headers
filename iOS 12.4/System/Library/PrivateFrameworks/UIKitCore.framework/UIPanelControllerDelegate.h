/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPanelControllerDelegate <NSObject>
@optional
-(id)primaryViewControllerForCollapsingPanelController:(id)arg1;
-(BOOL)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;
-(void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4;
-(id)primaryViewControllerForExpandingPanelController:(id)arg1;
-(id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
-(/*^block*/id)panelControllerWillUpdate:(id)arg1;
-(void)panelController:(id)arg1 willChangeToState:(id)arg2;
-(void)panelController:(id)arg1 didChangeToState:(id)arg2;
-(void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
-(void)panelController:(id)arg1 animateTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
-(void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
-(void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3;

@end
