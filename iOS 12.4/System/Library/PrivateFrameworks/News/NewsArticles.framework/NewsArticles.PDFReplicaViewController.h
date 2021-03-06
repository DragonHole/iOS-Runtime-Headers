/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PDFViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface NewsArticles.PDFReplicaViewController : UIViewController <PDFViewDelegate, UIGestureRecognizerDelegate> {

	 identifier;
	 delegate;
	 styler;
	 eventHandler;
	 pdfView;
	 coverViewManager;
	 doubleTapRecognizer;
	 pinchRecognizer;
	 loadingStateMachine;

}
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(void)handleDoubleTapGestureWithDoubleTapRecognizer:(id)arg1 ;
-(void)handlePinchGesture;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

