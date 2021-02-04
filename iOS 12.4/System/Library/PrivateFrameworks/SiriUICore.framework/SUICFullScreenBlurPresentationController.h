/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPresentationController.h>

@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {

	_UIBackdropView* _fullScreenBlurView;

}

@property (assign,nonatomic) unsigned long long blurStyle; 
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3 ;
-(void)_stageViewsForFadeIn;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(unsigned long long)blurStyle;
-(void)setBlurStyle:(unsigned long long)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
@end
