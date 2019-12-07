/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIKeyboardAnimator.h>

@protocol SBPasscodeKeyboardAnimatorDelegate;
@class BSAnimationSettings;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator {

	BSAnimationSettings* _animationSettings;
	id<SBPasscodeKeyboardAnimatorDelegate> _delegate;

}

@property (nonatomic,retain) BSAnimationSettings * animationSettings;                             //@synthesize animationSettings=_animationSettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBPasscodeKeyboardAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBPasscodeKeyboardAnimatorDelegate>)delegate;
-(void)setDelegate:(id<SBPasscodeKeyboardAnimatorDelegate>)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)performAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)prepareForAnimationWithState:(id)arg1 ;
-(void)runAnimationWithState:(id)arg1 ;
-(void)completeAnimationWithState:(id)arg1 ;
@end
