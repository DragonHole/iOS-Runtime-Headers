/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLClickPresentationInteractionManagerDelegate <NSObject>
@optional
-(id)containerViewForClickPresentationInteractionManager:(id)arg1;
-(id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1;
-(BOOL)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2;
-(void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
-(void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
-(BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1;

@required
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;

@end

