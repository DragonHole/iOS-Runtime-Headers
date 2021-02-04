/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class TLKGridLayoutManager, TLKTableRow, NSMutableArray;

@interface TLKGridRowView : TLKView {

	TLKGridLayoutManager* _manager;
	TLKTableRow* _tableRow;
	NSMutableArray* _labels;
	NSMutableArray* _imageViews;
	NSMutableArray* _currentListOfViews;
	unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
	unsigned long long _indexOfFirstTrailingColumn;

}

@property (retain) NSMutableArray * labels;                                                      //@synthesize labels=_labels - In the implementation block
@property (retain) NSMutableArray * imageViews;                                                  //@synthesize imageViews=_imageViews - In the implementation block
@property (retain) NSMutableArray * currentListOfViews;                                          //@synthesize currentListOfViews=_currentListOfViews - In the implementation block
@property (assign) unsigned long long indexOfFirstCenteredColumnForForcedCentering;              //@synthesize indexOfFirstCenteredColumnForForcedCentering=_indexOfFirstCenteredColumnForForcedCentering - In the implementation block
@property (assign) unsigned long long indexOfFirstTrailingColumn;                                //@synthesize indexOfFirstTrailingColumn=_indexOfFirstTrailingColumn - In the implementation block
@property (nonatomic,retain) TLKGridLayoutManager * manager;                                     //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) TLKTableRow * tableRow;                                             //@synthesize tableRow=_tableRow - In the implementation block
+(void)updateLabel:(id)arg1 withFormattedText:(id)arg2 alignment:(long long)arg3 ;
-(void)styleDidChange:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(void)setCurrentListOfViews:(NSMutableArray *)arg1 ;
-(void)setStylesForEverything;
-(TLKTableRow *)tableRow;
-(NSMutableArray *)currentListOfViews;
-(unsigned long long)indexOfFirstCenteredColumnForForcedCentering;
-(unsigned long long)indexOfFirstTrailingColumn;
-(void)resetStateOfAllViews;
-(void)generateLabelsAndImagesIfNecessary;
-(void)setIndexOfFirstCenteredColumnForForcedCentering:(unsigned long long)arg1 ;
-(void)setIndexOfFirstTrailingColumn:(unsigned long long)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(void)setTableRow:(TLKTableRow *)arg1 ;
-(id)init;
-(id)description;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(TLKGridLayoutManager *)manager;
-(void)setManager:(TLKGridLayoutManager *)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)labels;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
@end
