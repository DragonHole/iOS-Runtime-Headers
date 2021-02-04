/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIButton, PKTableHeaderView;

@interface PKCameraCaptureInstructionView : UIView {

	long long _context;
	UIScrollView* _scrollView;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	PKTableHeaderView* _headerView;

}

@property (nonatomic,retain) UIButton * primaryButton;                    //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryButton;                  //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) PKTableHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
-(BOOL)isBuddyiPad;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PKTableHeaderView *)headerView;
-(void)setHeaderView:(PKTableHeaderView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
@end
