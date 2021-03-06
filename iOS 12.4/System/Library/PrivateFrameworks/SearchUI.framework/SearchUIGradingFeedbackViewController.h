/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@protocol SFFeedbackListener;
@class SFSearchResult, UIViewController, NSString;

@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate> {

	SFSearchResult* _result;
	UIViewController* _viewControllerForPresenting;
	id<SFFeedbackListener> _feedbackDelegate;

}

@property (retain) SFSearchResult * result;                                     //@synthesize result=_result - In the implementation block
@property (retain) UIViewController * viewControllerForPresenting;              //@synthesize viewControllerForPresenting=_viewControllerForPresenting - In the implementation block
@property (__weak) id<SFFeedbackListener> feedbackDelegate;                     //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SFFeedbackListener>)feedbackDelegate;
-(void)setFeedbackDelegate:(id<SFFeedbackListener>)arg1 ;
-(void)addActionForGrade:(unsigned long long)arg1 title:(id)arg2 ;
-(void)setViewControllerForPresenting:(UIViewController *)arg1 ;
-(id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)setResult:(SFSearchResult *)arg1 ;
-(UIViewController *)viewControllerForPresenting;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SFSearchResult *)result;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end

