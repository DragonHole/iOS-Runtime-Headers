/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBViewControllerTransitionContext;


@protocol SBUISpotlightInitiating <NSObject>
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext; 
@required
-(SBViewControllerTransitionContext *)transitionContext;
-(void)setTransitionContext:(id)arg1;
-(void)setDisplayLayoutElementActive:(BOOL)arg1;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1;
-(void)cleanupAfterSpotlightDismissal;
-(id)spotlightHeaderAcquiringViewController;

@end
