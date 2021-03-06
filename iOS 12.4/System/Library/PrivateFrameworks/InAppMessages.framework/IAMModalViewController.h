/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol IAMViewControllerMetricsDelegate;
@class NSArray, UIViewController, UIView, NSString;

@interface IAMModalViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	NSArray* _defaultLayoutConstraints;
	NSArray* _fullscreenLayoutConstraints;
	NSArray* _padLayoutConstraints;
	BOOL _shouldPresentFullscreen;
	UIViewController* _contentViewController;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	/*^block*/id _viewControllerWillDismissBlock;
	UIView* _backgroundView;
	UIView* _modalView;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * backgroundView;                                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * modalView;                                                       //@synthesize modalView=_modalView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                     //@synthesize contentView=_contentView - In the implementation block
@property (readonly) BOOL shouldUsePadLayout; 
@property (nonatomic,retain) UIViewController * contentViewController;                                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (nonatomic,copy) id viewControllerWillDismissBlock;                                          //@synthesize viewControllerWillDismissBlock=_viewControllerWillDismissBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentFullscreen;                                             //@synthesize shouldPresentFullscreen=_shouldPresentFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(void)setShouldPresentFullscreen:(BOOL)arg1 ;
-(void)_handleBackgroundTapGesture:(id)arg1 ;
-(void)setModalView:(UIView *)arg1 ;
-(UIView *)modalView;
-(BOOL)shouldUsePadLayout;
-(BOOL)shouldPresentFullscreen;
-(id)viewControllerWillDismissBlock;
-(void)setViewControllerWillDismissBlock:(id)arg1 ;
-(id)init;
-(UIView *)contentView;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)backgroundView;
-(void)viewDidLoad;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UIViewController *)contentViewController;
-(BOOL)shouldAutorotate;
-(void)setContentView:(UIView *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(long long)preferredStatusBarStyle;
@end

