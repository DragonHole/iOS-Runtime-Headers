/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIView, UIImageView, UIImage, UILabel, NSString, UIColor;

@interface BFFPaneHeaderView : UIView {

	CGSize _iconSize;
	UIButton* _linkButton;
	/*^block*/id _linkHandler;
	UIView* _bottomLine;
	BOOL _iconInheritsTint;
	BOOL _useMinimumTopPadding;
	BOOL _textLabelAlignedByLastBaseline;
	UIImageView* _iconView;
	UIImage* _icon;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UILabel* _subLabel;
	double _flexibleHeight;
	double _customTopPadding;

}

@property (nonatomic,retain) UIImageView * iconView;                                                                   //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                           //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) CGSize iconSize; 
@property (nonatomic,retain) NSString * iconAccessibilityLabel; 
@property (nonatomic,readonly) UILabel * textLabel;                                                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;                                                              //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subLabel;                                                                     //@synthesize subLabel=_subLabel - In the implementation block
@property (assign,nonatomic) double flexibleHeight;                                                                    //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (nonatomic,retain) UIColor * bottomLineColor; 
@property (assign,nonatomic) BOOL iconInheritsTint;                                                                    //@synthesize iconInheritsTint=_iconInheritsTint - In the implementation block
@property (assign,nonatomic) BOOL useMinimumTopPadding;                                                                //@synthesize useMinimumTopPadding=_useMinimumTopPadding - In the implementation block
@property (assign,nonatomic) double customTopPadding;                                                                  //@synthesize customTopPadding=_customTopPadding - In the implementation block
@property (assign,getter=isTextLabelAlignedByLastBaseline,nonatomic) BOOL textLabelAlignedByLastBaseline;              //@synthesize textLabelAlignedByLastBaseline=_textLabelAlignedByLastBaseline - In the implementation block
-(void)setLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setCustomTopPadding:(double)arg1 ;
-(BOOL)iconInheritsTint;
-(void)_linkButtonPressed;
-(double)_labelsAndLinksBaselineOffsetForView:(id)arg1 ;
-(BOOL)useMinimumTopPadding;
-(double)customTopPadding;
-(BOOL)isTextLabelAlignedByLastBaseline;
-(UIColor *)bottomLineColor;
-(void)setIconAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)iconAccessibilityLabel;
-(void)setIconInheritsTint:(BOOL)arg1 ;
-(void)setBottomLineColor:(UIColor *)arg1 ;
-(double)flexibleHeight;
-(void)setFlexibleHeight:(double)arg1 ;
-(void)setUseMinimumTopPadding:(BOOL)arg1 ;
-(void)setTextLabelAlignedByLastBaseline:(BOOL)arg1 ;
-(UILabel *)subLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setTitleText:(id)arg1 ;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
-(double)heightForWidth:(double)arg1 inView:(id)arg2 ;
@end
