/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUILabelTopMarginCalculationProtocol.h>

@class VUIFeedbackTableLayout, NSArray;

@interface VUIFeedbackTableView : UIView <VUILabelTopMarginCalculationProtocol> {

	VUIFeedbackTableLayout* _layout;
	NSArray* _dataModels;

}

@property (nonatomic,retain) VUIFeedbackTableLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSArray * dataModels;                         //@synthesize dataModels=_dataModels - In the implementation block
-(id)init;
-(VUIFeedbackTableLayout *)layout;
-(void)setLayout:(VUIFeedbackTableLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)prepareForCellReuse;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(NSArray *)dataModels;
-(void)setDataModels:(NSArray *)arg1 ;
-(CGSize)_calculateMaxDescriptionThatFit:(CGSize)arg1 ;
-(CGSize)_calculateMaxHeaderThatFits:(CGSize)arg1 ;
@end
