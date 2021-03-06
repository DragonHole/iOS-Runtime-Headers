/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIFont, UILabel, FIUIDividerView, NSDate, NSDateFormatter;

@interface FIUIWorkoutSummaryDateTimeTableViewCell : UITableViewCell {

	UIFont* _labelFont;
	UIFont* _smallCapFont;
	UILabel* _dateLabel;
	UILabel* _timeLabel;
	FIUIDividerView* _dividerView;
	NSDate* _workoutDate;
	NSDateFormatter* _timeFormatter;

}
+(double)rowHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupUI;
-(void)_configureAttributedString:(id)arg1 ;
-(void)_addSmallCapAttributeToString:(id)arg1 matchingString:(id)arg2 ;
-(void)setDateStringWithDate:(id)arg1 ;
-(void)setTimeStringWithStartDate:(id)arg1 endDate:(id)arg2 ;
@end

