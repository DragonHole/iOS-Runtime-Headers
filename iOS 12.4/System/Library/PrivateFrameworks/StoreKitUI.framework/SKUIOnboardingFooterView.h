/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, SKUIOnboardingProgressView;

@interface SKUIOnboardingFooterView : UIView {

	UIButton* _leftButton;
	SKUIOnboardingProgressView* _progressView;
	UIButton* _rightButton;

}

@property (nonatomic,readonly) UIButton * leftButton; 
@property (nonatomic,readonly) UIButton * rightButton; 
@property (nonatomic,retain) SKUIOnboardingProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(SKUIOnboardingProgressView *)progressView;
-(void)setProgressView:(SKUIOnboardingProgressView *)arg1 ;
-(void)hideLeftButtonWithAnimation:(long long)arg1 ;
-(void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)hideRightButtonWithAnimation:(long long)arg1 ;
-(void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)_hideButton:(id)arg1 withAnimation:(long long)arg2 ;
-(void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_newButton;
@end

