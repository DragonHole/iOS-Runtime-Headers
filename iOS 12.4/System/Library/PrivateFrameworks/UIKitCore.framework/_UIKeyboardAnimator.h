/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject {

	_UIKeyboardAnimatorAnimationStyle* _style;

}
-(id)init;
-(void)applyToKeyboardOperations:(/*^block*/id)arg1 ;
-(void)performAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)prepareForAnimationWithState:(id)arg1 ;
-(void)runAnimationWithState:(id)arg1 ;
-(void)completeAnimationWithState:(id)arg1 ;
@end
