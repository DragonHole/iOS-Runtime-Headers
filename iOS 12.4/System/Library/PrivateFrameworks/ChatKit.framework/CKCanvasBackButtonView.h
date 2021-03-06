/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, UIView, UIColor;

@interface CKCanvasBackButtonView : UIControl {

	BOOL _shouldShowTitlePaddingView;
	UIImageView* _backButtonView;
	UILabel* _titleLabel;
	UIView* _titlePaddingView;
	UIColor* _titleLabelColor;

}

@property (nonatomic,retain) UIImageView * backButtonView;                 //@synthesize backButtonView=_backButtonView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * titlePaddingView;                    //@synthesize titlePaddingView=_titlePaddingView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTitlePaddingView;              //@synthesize shouldShowTitlePaddingView=_shouldShowTitlePaddingView - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelColor;                    //@synthesize titleLabelColor=_titleLabelColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 showPaddingTitleView:(BOOL)arg2 ;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(void)setBackButtonView:(UIImageView *)arg1 ;
-(void)setShouldShowTitlePaddingView:(BOOL)arg1 ;
-(void)_setVisuallyHighlighted:(BOOL)arg1 ;
-(UIView *)titlePaddingView;
-(void)setTitlePaddingView:(UIView *)arg1 ;
-(BOOL)shouldShowTitlePaddingView;
-(CGSize)_titlePaddingViewSizeForTitle;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)sizeToFit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(UIColor *)titleLabelColor;
-(UIImageView *)backButtonView;
-(void)setBackButtonTitle:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

