/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, NSString, NSLayoutConstraint;

@interface HRListItemLabel : UIView {

	BOOL _centerItemViewToFirstLine;
	BOOL _boldText;
	UIView* _itemView;
	UILabel* _textLabel;
	NSString* _text;
	NSLayoutConstraint* _itemViewTextAlignmentConstraint;
	NSLayoutConstraint* _topToTextLabelFirstBaselineConstraint;
	CGSize _itemViewSize;

}

@property (assign,nonatomic) CGSize itemViewSize;                                                     //@synthesize itemViewSize=_itemViewSize - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIView * itemView;                                                       //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * itemViewTextAlignmentConstraint;                    //@synthesize itemViewTextAlignmentConstraint=_itemViewTextAlignmentConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToTextLabelFirstBaselineConstraint;              //@synthesize topToTextLabelFirstBaselineConstraint=_topToTextLabelFirstBaselineConstraint - In the implementation block
@property (assign,nonatomic) BOOL centerItemViewToFirstLine;                                          //@synthesize centerItemViewToFirstLine=_centerItemViewToFirstLine - In the implementation block
@property (assign,nonatomic) BOOL boldText;                                                           //@synthesize boldText=_boldText - In the implementation block
-(void)_setUpConstraints;
-(void)setItemView:(UIView *)arg1 ;
-(UIView *)itemView;
-(id)_textLabelFont;
-(void)_setUpUI;
-(void)_updateTextLabelFont;
-(id)_textLabelBoldFont;
-(id)_textLabelFontStyle;
-(void)setBoldText:(BOOL)arg1 ;
-(void)_updateItemViewTextAlignmentConstraint;
-(CGSize)itemViewSize;
-(double)_topToTextLabelFirstBaseline;
-(double)_textLabelLastBaselineToBottom;
-(NSLayoutConstraint *)itemViewTextAlignmentConstraint;
-(void)setItemViewTextAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)centerItemViewToFirstLine;
-(id)initWithView:(id)arg1 size:(CGSize)arg2 text:(id)arg3 ;
-(void)setCenterItemViewToFirstLine:(BOOL)arg1 ;
-(void)setItemViewSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)topToTextLabelFirstBaselineConstraint;
-(void)setTopToTextLabelFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)textLabel;
-(id)viewForLastBaselineLayout;
-(void)setTextLabel:(UILabel *)arg1 ;
-(BOOL)boldText;
-(id)viewForFirstBaselineLayout;
@end
