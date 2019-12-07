/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, PMRoundProgressView, UIButton, UIScreenEdgePanGestureRecognizer, NSString;

@interface PMRoundProgressViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _didFadeOut;
	UILabel* _label;
	PMRoundProgressView* _progressView;
	UIButton* _leftCancelButton;
	UIButton* _rightCancelButton;
	UIScreenEdgePanGestureRecognizer* _screenEdgePanLeftGestureRecognizer;

}

@property (assign,nonatomic) BOOL didFadeOut;                                                                    //@synthesize didFadeOut=_didFadeOut - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) PMRoundProgressView * progressView;                                                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIButton * leftCancelButton;                                                        //@synthesize leftCancelButton=_leftCancelButton - In the implementation block
@property (nonatomic,retain) UIButton * rightCancelButton;                                                       //@synthesize rightCancelButton=_rightCancelButton - In the implementation block
@property (nonatomic,retain) UIScreenEdgePanGestureRecognizer * screenEdgePanLeftGestureRecognizer;              //@synthesize screenEdgePanLeftGestureRecognizer=_screenEdgePanLeftGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) BOOL showCancelButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)progress;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setProgress:(float)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)cancelButton;
-(id)nibBundle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)showCancelButton;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(PMRoundProgressView *)progressView;
-(void)setProgressView:(PMRoundProgressView *)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)configureView;
-(UIButton *)rightCancelButton;
-(UIButton *)leftCancelButton;
-(void)handlePanFromEdge:(id)arg1 ;
-(void)setScreenEdgePanLeftGestureRecognizer:(UIScreenEdgePanGestureRecognizer *)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanLeftGestureRecognizer;
-(BOOL)didFadeOut;
-(void)setDidFadeOut:(BOOL)arg1 ;
-(void)setCancelTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setLeftCancelButton:(UIButton *)arg1 ;
-(void)setRightCancelButton:(UIButton *)arg1 ;
@end
