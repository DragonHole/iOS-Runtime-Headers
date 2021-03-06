/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, HKDateIntervalCache, NSDate, UIFont, UIColor;

@interface HKUIInteractiveChartDateLabelSlider : UIView {

	BOOL _needsLabelUpdate;
	NSMutableArray* _dateLabels;
	HKDateIntervalCache* _dateIntervalCache;
	BOOL _blankDateLabelSlider;
	long long _granularity;
	NSDate* _leftDate;
	NSDate* _rightDate;
	UIFont* _labelFont;
	UIColor* _labelColor;
	long long _textAlignment;
	UIEdgeInsets _dateRangeInsets;

}

@property (assign,nonatomic) long long granularity;                     //@synthesize granularity=_granularity - In the implementation block
@property (assign,nonatomic) UIEdgeInsets dateRangeInsets;              //@synthesize dateRangeInsets=_dateRangeInsets - In the implementation block
@property (nonatomic,readonly) NSDate * leftDate;                       //@synthesize leftDate=_leftDate - In the implementation block
@property (nonatomic,readonly) NSDate * rightDate;                      //@synthesize rightDate=_rightDate - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                        //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                      //@synthesize labelColor=_labelColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;                   //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL blankDateLabelSlider;                 //@synthesize blankDateLabelSlider=_blankDateLabelSlider - In the implementation block
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIFont *)labelFont;
-(void)_updateLabels;
-(void)setDateRange:(id)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIColor *)labelColor;
-(void)setDateRangeInsets:(UIEdgeInsets)arg1 ;
-(void)setBlankDateLabelSlider:(BOOL)arg1 ;
-(unsigned long long)_calendarUnitForGranularity:(long long)arg1 ;
-(id)_dateSpacingForGranularity:(long long)arg1 ;
-(void)_setNeedsLabelUpdate;
-(void)_layoutDateLabelsWithOffsetMultiple:(double)arg1 ;
-(void)_setDate:(id)arg1 forLabel:(id)arg2 atIndex:(long long)arg3 ;
-(long long)_formatTemplateForGranularity:(long long)arg1 ;
-(UIEdgeInsets)dateRangeInsets;
-(NSDate *)leftDate;
-(NSDate *)rightDate;
-(BOOL)blankDateLabelSlider;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)textAlignment;
-(void)setGranularity:(long long)arg1 ;
-(long long)granularity;
@end

