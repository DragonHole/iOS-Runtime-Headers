/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>

@protocol SBUISpotlightInitiating;
@class SBSearchBackdropView, _UILegibilitySettings, UIViewController, _SBDashBoardSpotlightViewController, SBHomeGesturePanGestureRecognizer, SBHomeGestureParticipant, FBDisplayLayoutTransition, NSString;

@interface SBDashBoardSpotlightViewController : CSCoverSheetViewControllerBase <SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate, SBViewControllerTransitionContextDelegate> {

	SBSearchBackdropView* _backdropView;
	_UILegibilitySettings* _spotlightLegibilitySettings;
	UIViewController*<SBUISpotlightInitiating> _initiatingViewController;
	_SBDashBoardSpotlightViewController* _spotlightViewController;
	SBHomeGesturePanGestureRecognizer* _bottomEdgeRecognizer;
	SBHomeGestureParticipant* _homeGestureParticipant;
	FBDisplayLayoutTransition* _displayLayoutTransition;

}

@property (nonatomic,retain) _SBDashBoardSpotlightViewController * spotlightViewController;                    //@synthesize spotlightViewController=_spotlightViewController - In the implementation block
@property (nonatomic,retain) SBHomeGesturePanGestureRecognizer * bottomEdgeRecognizer;                         //@synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;                                //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (nonatomic,retain) FBDisplayLayoutTransition * displayLayoutTransition;                              //@synthesize displayLayoutTransition=_displayLayoutTransition - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * spotlightLegibilitySettings;                              //@synthesize spotlightLegibilitySettings=_spotlightLegibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> spotlightDelegate; 
@property (nonatomic,retain) UIViewController*<SBUISpotlightInitiating> initiatingViewController;              //@synthesize initiatingViewController=_initiatingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(void)transitionWillBegin:(id)arg1 ;
-(BOOL)_isTransitioning;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationType;
-(long long)presentationTransition;
-(void)transitionDidReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)presentationCancelsTouches;
-(id)displayLayoutElementIdentifier;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)_relinquishHomeGestureOwnership;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)_handleBottomEdgeGesture:(id)arg1 ;
-(void)_requestHomeGestureOwnership;
-(SBHomeGesturePanGestureRecognizer *)bottomEdgeRecognizer;
-(void)setBottomEdgeRecognizer:(SBHomeGesturePanGestureRecognizer *)arg1 ;
-(_SBDashBoardSpotlightViewController *)spotlightViewController;
-(FBDisplayLayoutTransition *)displayLayoutTransition;
-(void)setDisplayLayoutTransition:(FBDisplayLayoutTransition *)arg1 ;
-(void)setSpotlightViewController:(_SBDashBoardSpotlightViewController *)arg1 ;
-(void)setSpotlightDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(id<SPUIRemoteSearchViewDelegate>)spotlightDelegate;
-(_UILegibilitySettings *)spotlightLegibilitySettings;
-(UIViewController*<SBUISpotlightInitiating>)initiatingViewController;
-(id)transitionContextToShowSpotlight:(BOOL)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(BOOL)_transitioningIntoSpotlight:(id)arg1 ;
-(BOOL)_initiallyTransitioningToSpotlight:(id)arg1 ;
-(BOOL)_shouldCancelInteractiveDismissGesture:(id)arg1 ;
-(void)setSpotlightLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setInitiatingViewController:(UIViewController*<SBUISpotlightInitiating>)arg1 ;
@end
