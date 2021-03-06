/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol DCProgressViewControllerDelegate;
@class NSProgress, UILabel, UIActivityIndicatorView, DCCircularProgressView;

@interface DCProgressViewController : UIViewController {

	BOOL _showsCancel;
	NSProgress* _observedProgress;
	id<DCProgressViewControllerDelegate> _progressDelegate;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	DCCircularProgressView* _circularProgressView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) DCCircularProgressView * circularProgressView;                             //@synthesize circularProgressView=_circularProgressView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;                                             //@synthesize observedProgress=_observedProgress - In the implementation block
@property (assign,nonatomic) BOOL showsCancel;                                                          //@synthesize showsCancel=_showsCancel - In the implementation block
@property (assign,nonatomic,__weak) id<DCProgressViewControllerDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
-(void)setProgressDelegate:(id<DCProgressViewControllerDelegate>)arg1 ;
-(DCCircularProgressView *)circularProgressView;
-(id<DCProgressViewControllerDelegate>)progressDelegate;
-(BOOL)showsCancel;
-(void)setShowsCancel:(BOOL)arg1 ;
-(void)setCircularProgressView:(DCCircularProgressView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithDelegate:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
@end

