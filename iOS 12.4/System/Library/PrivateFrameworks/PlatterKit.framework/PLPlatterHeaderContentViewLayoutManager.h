/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PlatterKit/PlatterKit-Structs.h>
@class PLPlatterHeaderContentView, UILabel, NSArray, NSDate, UIView, UIButton;

@interface PLPlatterHeaderContentViewLayoutManager : NSObject {

	PLPlatterHeaderContentView* _headerContentView;
	UILabel* _outgoingTitleLabel;

}

@property (getter=_shouldReverseLayoutDirection,nonatomic,readonly) BOOL shouldReverseLayoutDirection; 
@property (getter=_heedsHorizontalLayoutMargins,nonatomic,readonly) BOOL heedsHorizontalLayoutMargins; 
@property (getter=_iconButtons,nonatomic,readonly) NSArray * iconButtons; 
@property (getter=_titleLabel,nonatomic,readonly) UILabel * titleLabel; 
@property (getter=_outgoingTitleLabel,nonatomic,readonly) UILabel * outgoingTitleLabel;                             //@synthesize outgoingTitleLabel=_outgoingTitleLabel - In the implementation block
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_dateLabel,nonatomic,readonly) UILabel * dateLabel; 
@property (getter=_utilityView,nonatomic,readonly) UIView * utilityView; 
@property (getter=_utilityButton,nonatomic,readonly) UIButton * utilityButton; 
@property (getter=_layoutMargins,nonatomic,readonly) UIEdgeInsets layoutMargins; 
@property (nonatomic,__weak,readonly) PLPlatterHeaderContentView * headerContentView;                               //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,readonly) double contentBaseline; 
-(id)_date;
-(id)_iconButtons;
-(CGSize)_measuringSizeForWidth:(double)arg1 ;
-(CGRect)_titleLabelBoundsForSize:(CGSize)arg1 withNumberOfLines:(double)arg2 ;
-(id)_dateLabel;
-(double)_titleLabelBaselineOffset;
-(id)_outgoingTitleLabel;
-(id)_utilityView;
-(id)_utilityButton;
-(BOOL)_heedsHorizontalLayoutMargins;
-(UIEdgeInsets)_layoutMargins;
-(id)initWithPlatterHeaderContentView:(id)arg1 ;
-(double)headerHeightForWidth:(double)arg1 ;
-(double)contentBaseline;
-(void)layoutIconButtonsWithScale:(double)arg1 ;
-(void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2 ;
-(void)layoutUtilityButtonWithScale:(double)arg1 ;
-(void)layoutDateLabelWithScale:(double)arg1 ;
-(id)_titleLabel;
-(BOOL)_shouldReverseLayoutDirection;
-(PLPlatterHeaderContentView *)headerContentView;
@end
