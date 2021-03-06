/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@protocol SearchUITableHeaderViewDelegate, SFFeedbackListener;
@class SFResultSection, UILabel, UIButton, TLKStackView, NSString;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerStackViewDelegate> {

	BOOL _usesInsetRoundedSections;
	id<SearchUITableHeaderViewDelegate> _delegate;
	id<SFFeedbackListener> _feedbackListener;
	unsigned long long _headerType;
	SFResultSection* _section;
	UILabel* _titleLabel;
	UIButton* _headerOptionButton;
	TLKStackView* _stackView;

}

@property (retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UIButton * headerOptionButton;                             //@synthesize headerOptionButton=_headerOptionButton - In the implementation block
@property (retain) SFResultSection * section;                                 //@synthesize section=_section - In the implementation block
@property (retain) TLKStackView * stackView;                                  //@synthesize stackView=_stackView - In the implementation block
@property (assign) unsigned long long headerType;                             //@synthesize headerType=_headerType - In the implementation block
@property (assign) BOOL usesInsetRoundedSections;                             //@synthesize usesInsetRoundedSections=_usesInsetRoundedSections - In the implementation block
@property (__weak) id<SearchUITableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<SFFeedbackListener> feedbackListener;                   //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)headerOptionButtonPressed;
-(void)setHeaderOptionButton:(UIButton *)arg1 ;
-(void)updateAlignmentRectInsets;
-(void)updateWithSection:(id)arg1 isExpanded:(BOOL)arg2 usesInsetRoundedSection:(BOOL)arg3 ;
-(UIButton *)headerOptionButton;
-(BOOL)usesInsetRoundedSections;
-(void)setUsesInsetRoundedSections:(BOOL)arg1 ;
-(void)updateHeaderButtonVisibility;
-(id)moreResultsPunchout;
-(void)setHeaderType:(unsigned long long)arg1 ;
-(BOOL)supportsShowMoreInApp;
-(void)moreButtonPressed;
-(unsigned long long)headerType;
-(void)setDelegate:(id<SearchUITableHeaderViewDelegate>)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(SFResultSection *)section;
-(id<SearchUITableHeaderViewDelegate>)delegate;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(TLKStackView *)stackView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)setSection:(SFResultSection *)arg1 ;
-(void)setStackView:(TLKStackView *)arg1 ;
@end

