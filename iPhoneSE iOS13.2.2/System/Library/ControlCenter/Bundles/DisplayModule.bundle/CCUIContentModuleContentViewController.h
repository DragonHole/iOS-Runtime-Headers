/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewPropertyAnimator;


@protocol CCUIContentModuleContentViewController <NSObject>
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@optional
-(void)willBecomeActive;
-(void)willResignActive;
-(UIViewPropertyAnimator *)customAnimator;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)displayWillTurnOff;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(double)preferredExpandedContentWidth;
-(double)preferredExpandedContinuousCornerRadius;
-(BOOL)providesOwnPlatter;

@required
-(double)preferredExpandedContentHeight;

@end

