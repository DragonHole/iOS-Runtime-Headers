/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, UIButton, NSLayoutConstraint;

@interface HRParagraphTableViewCell : UITableViewCell {

	NSString* _titleText;
	NSString* _paragraphText;
	NSString* _buttonText;
	UILabel* _titleLabel;
	UILabel* _paragraphLabel;
	UIButton* _button;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	NSLayoutConstraint* _paragraphLabelBaselineConstraint;
	NSLayoutConstraint* _buttonBaselineConstraint;
	NSLayoutConstraint* _contentViewParagraphBottomConstraint;
	NSLayoutConstraint* _contentViewButtonBottomConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * paragraphLabel;                                               //@synthesize paragraphLabel=_paragraphLabel - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                      //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelBaselineConstraint;                      //@synthesize titleLabelBaselineConstraint=_titleLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paragraphLabelBaselineConstraint;                  //@synthesize paragraphLabelBaselineConstraint=_paragraphLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonBaselineConstraint;                          //@synthesize buttonBaselineConstraint=_buttonBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewParagraphBottomConstraint;              //@synthesize contentViewParagraphBottomConstraint=_contentViewParagraphBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewButtonBottomConstraint;                 //@synthesize contentViewButtonBottomConstraint=_contentViewButtonBottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * paragraphText;                                                 //@synthesize paragraphText=_paragraphText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                    //@synthesize buttonText=_buttonText - In the implementation block
+(id)reuseIdentifier;
-(void)setButtonText:(NSString *)arg1 ;
-(NSString *)buttonText;
-(NSString *)titleText;
-(void)_setUpConstraints;
-(id)_titleLabelFont;
-(void)_setUpUI;
-(void)_updateBottomConstraint;
-(id)_paragraphLabelFont;
-(long long)_buttonHorizontalAlignment;
-(double)_titleLabelTopToBaseline;
-(double)_titleLabelBaselineToParagraphBaseline;
-(double)_subtitleLabelBaselineToButton;
-(void)setParagraphText:(NSString *)arg1 ;
-(NSString *)paragraphText;
-(id)_titleLabelFontTextStyle;
-(UILabel *)paragraphLabel;
-(void)setParagraphLabel:(UILabel *)arg1 ;
-(void)setTitleLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelBaselineConstraint;
-(void)setParagraphLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)paragraphLabelBaselineConstraint;
-(void)setButtonBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonBaselineConstraint;
-(double)_lastViewToBottom;
-(void)setContentViewParagraphBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_paragraphLabelFontTextStyle;
-(id)_buttonFontTextStyle;
-(NSLayoutConstraint *)contentViewParagraphBottomConstraint;
-(NSLayoutConstraint *)contentViewButtonBottomConstraint;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(id)_buttonFont;
@end

