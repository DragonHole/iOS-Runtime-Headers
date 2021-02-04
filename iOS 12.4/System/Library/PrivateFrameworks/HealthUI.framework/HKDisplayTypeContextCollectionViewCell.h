/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol HKDisplayTypeContextCollectionViewCellDelegate;
@class UILabel, UIButton, HKUIMetricColors, HKDisplayTypeContextItem;

@interface HKDisplayTypeContextCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UIButton* _infoButton;
	UILabel* _valueLabel;
	UILabel* _unitLabel;
	UILabel* _dateLabel;
	HKUIMetricColors* _currentMetricColors;
	HKDisplayTypeContextItem* _contextItem;
	id<HKDisplayTypeContextCollectionViewCellDelegate> _delegate;

}

@property (nonatomic,retain) HKDisplayTypeContextItem * contextItem;                                          //@synthesize contextItem=_contextItem - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeContextCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(void)infoButtonTapped:(id)arg1 ;
-(id)_titleLabelFont;
-(void)setContextItem:(HKDisplayTypeContextItem *)arg1 ;
-(id)_valueLabelFont;
-(id)_unitLabelFont;
-(id)_dateLabelFont;
-(double)_titleLabelBaselineOffsetFromTop;
-(double)_valueLabelBaselineOffsetFromDateLabel;
-(double)_dateBaselineOffsetFromValue;
-(double)_bottomOffsetFromDateBaseline;
-(void)updateUI:(BOOL)arg1 ;
-(void)updateMetricColors:(BOOL)arg1 ;
-(void)updateUIColors;
-(HKDisplayTypeContextItem *)contextItem;
-(void)setDelegate:(id<HKDisplayTypeContextCollectionViewCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HKDisplayTypeContextCollectionViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end
