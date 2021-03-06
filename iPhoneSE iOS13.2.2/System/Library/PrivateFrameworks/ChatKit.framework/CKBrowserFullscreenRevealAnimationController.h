/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewPropertyAnimator, NSString;

@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	UIViewPropertyAnimator* _ascentDescentAnimator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * ascentDescentAnimator;              //@synthesize ascentDescentAnimator=_ascentDescentAnimator - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                         //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)ascentDescentAnimator;
-(id)initWithDirection:(BOOL)arg1 ;
-(void)setAscentDescentAnimator:(UIViewPropertyAnimator *)arg1 ;
@end

