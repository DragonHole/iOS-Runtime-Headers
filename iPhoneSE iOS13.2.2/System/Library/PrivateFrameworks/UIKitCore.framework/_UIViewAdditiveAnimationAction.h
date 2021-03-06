/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAction.h>

@class CAAnimation, UIViewPropertyAnimator, UIView;

@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {

	CAAnimation* _pendingAnimation;
	UIViewPropertyAnimator* _animationObject;
	UIView* _view;

}

@property (nonatomic,retain,readonly) CAAnimation * pendingAnimation;                        //@synthesize pendingAnimation=_pendingAnimation - In the implementation block
@property (nonatomic,retain,readonly) UIViewPropertyAnimator * animationObject;              //@synthesize animationObject=_animationObject - In the implementation block
@property (nonatomic,retain,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(UIViewPropertyAnimator *)animationObject;
-(CAAnimation *)pendingAnimation;
-(id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3 ;
@end

