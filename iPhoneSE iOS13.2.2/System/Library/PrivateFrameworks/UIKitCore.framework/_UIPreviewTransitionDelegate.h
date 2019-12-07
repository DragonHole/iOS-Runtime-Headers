/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIForceTransitioningDelegate.h>

@class UIInteractionProgress, _UIStatesFeedbackGenerator, NSString;

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate> {

	UIInteractionProgress* interactionProgressForPresentation;
	_UIStatesFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;                          //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
@end
