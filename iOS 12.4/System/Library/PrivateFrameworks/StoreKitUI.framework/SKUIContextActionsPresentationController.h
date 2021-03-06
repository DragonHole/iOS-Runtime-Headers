/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController {

	UIVisualEffectView* _backgroundView;
	/*^block*/id _dismissalAnimations;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) id dismissalAnimations;                             //@synthesize dismissalAnimations=_dismissalAnimations - In the implementation block
-(UIVisualEffectView *)backgroundView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)dismissalTransitionWillBegin;
-(id)dismissalAnimations;
-(void)setDismissalAnimations:(id)arg1 ;
@end

