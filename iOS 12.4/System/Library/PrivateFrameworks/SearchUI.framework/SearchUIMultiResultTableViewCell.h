/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIAppIconsRowView, NSArray, TLKAuxilliaryTextView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {

	SearchUIAppIconsRowView* _topRow;
	SearchUIAppIconsRowView* _bottomRow;
	NSArray* _results;
	long long _indexOfSelectedKeyboardIcon;
	TLKAuxilliaryTextView* _folderLabelView;

}

@property (nonatomic,retain) SearchUIAppIconsRowView * topRow;                     //@synthesize topRow=_topRow - In the implementation block
@property (nonatomic,retain) SearchUIAppIconsRowView * bottomRow;                  //@synthesize bottomRow=_bottomRow - In the implementation block
@property (nonatomic,retain) NSArray * results;                                    //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) long long indexOfSelectedKeyboardIcon;                //@synthesize indexOfSelectedKeyboardIcon=_indexOfSelectedKeyboardIcon - In the implementation block
@property (nonatomic,retain) TLKAuxilliaryTextView * folderLabelView;              //@synthesize folderLabelView=_folderLabelView - In the implementation block
+(unsigned long long)numberOfColumnsForCurrentOrientation;
+(void)removeDropShadowIconStateForView:(id)arg1 ;
-(BOOL)isExpandable;
-(id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)canSetupKeyboardHandler;
-(void)setupKeyboardHandler;
-(BOOL)navigateKeyboardRight;
-(void)returnKeyPressed;
-(BOOL)navigateKeyboardLeft;
-(void)removeKeyboardHandler;
-(id)visibleResults;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)setFeedbackDelegateForRowView:(id)arg1 ;
-(void)setBottomRow:(SearchUIAppIconsRowView *)arg1 ;
-(SearchUIAppIconsRowView *)bottomRow;
-(unsigned long long)numberOfVisibleResults;
-(void)setIndexOfSelectedKeyboardIcon:(long long)arg1 ;
-(TLKAuxilliaryTextView *)folderLabelView;
-(void)setFolderLabelView:(TLKAuxilliaryTextView *)arg1 ;
-(double)appRowSpacing;
-(double)topAndBottomPadding;
-(long long)indexOfSelectedKeyboardIcon;
-(SearchUIAppIconsRowView *)topRow;
-(void)setTopRow:(SearchUIAppIconsRowView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end
