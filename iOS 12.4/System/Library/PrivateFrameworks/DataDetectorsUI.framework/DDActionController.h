/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/DDActionDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol DDDetectionControllerInteractionDelegate;
@class UIViewController, UIView, DDAction, UIWindow, NSString, UIAlertController;

@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;
	UIView* _baseView;
	UIViewController* _currentBaseViewController;
	DDAction* _currentAction;
	id<DDDetectionControllerInteractionDelegate> _interactionDelegate;
	UIWindow* _originalWindow;
	NSString* _idsListenerID;
	UIAlertController* _alertController;

}

@property (retain) DDAction * currentAction;                                                                //@synthesize currentAction=_currentAction - In the implementation block
@property (nonatomic,retain) id<DDDetectionControllerInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) UIView * baseView;                                                             //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                           //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performAction:(id)arg1 ;
-(BOOL)actionIsCancellable;
-(id)actionsForURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(BOOL)isPresentingInPopover;
-(BOOL)facetimeAvailable;
-(id)actionsForURL:(id)arg1 result:(DDResultRef)arg2 enclosingResult:(DDResultRef)arg3 context:(id)arg4 ;
-(void)_willPresentViewController;
-(void)_presentCurrentViewControllerOurselves;
-(void)_didDismissActionViewController;
-(void)tellDelegateActionDidFinish;
-(void)_dismissCurrentViewControllerOurselves;
-(void)viewControllerRequiresModalInPopover:(BOOL)arg1 ;
-(void)_presentController:(id)arg1 ;
-(void)dismissCurrentController;
-(id)defaultActionForURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(void)action:(id)arg1 viewControllerReady:(id)arg2 ;
-(void)action:(id)arg1 becameCancellable:(BOOL)arg2 ;
-(void)failedToPrepareViewControllerForAction:(id)arg1 ;
-(BOOL)isPerformingAction;
-(void)setBaseView:(UIView *)arg1 ;
-(UIView *)baseView;
-(id)init;
-(void)dealloc;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(void)cancelAction;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)_cleanup;
-(DDAction *)currentAction;
-(void)setCurrentAction:(DDAction *)arg1 ;
-(void)actionDidFinish:(id)arg1 ;
-(void)setInteractionDelegate:(id<DDDetectionControllerInteractionDelegate>)arg1 ;
-(id<DDDetectionControllerInteractionDelegate>)interactionDelegate;
@end

