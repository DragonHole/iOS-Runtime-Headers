/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol HLPHelpLoadingViewDelegate;
@class UIImageView, UIActivityIndicatorView, UILabel;

@interface HLPHelpLoadingView : UIView {

	UIImageView* _errorImageView;
	UIActivityIndicatorView* _activityIndicatorView;
	id<HLPHelpLoadingViewDelegate> _delegate;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (assign,nonatomic,__weak) id<HLPHelpLoadingViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * errorTitleLabel;                                    //@synthesize errorTitleLabel=_errorTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * errorMessageLabel;                                  //@synthesize errorMessageLabel=_errorMessageLabel - In the implementation block
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)showHelpBookInfo;
-(void)showNoConnectionErrorMessage;
-(void)showDefaultErrorMessage;
-(void)removeErrorView;
-(void)showErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(UILabel *)errorTitleLabel;
-(void)setErrorTitleLabel:(UILabel *)arg1 ;
-(UILabel *)errorMessageLabel;
-(void)setErrorMessageLabel:(UILabel *)arg1 ;
-(id)init;
-(void)setDelegate:(id<HLPHelpLoadingViewDelegate>)arg1 ;
-(id<HLPHelpLoadingViewDelegate>)delegate;
@end
