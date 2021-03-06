/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIView;

@interface PKMonthDayCollectionViewCell : UICollectionViewCell {

	UILabel* _dayLabel;
	UIView* _topLine;
	UIView* _leftLine;
	UIView* _bottomLine;
	BOOL _enabled;
	long long _dayNumber;

}

@property (assign,nonatomic) long long dayNumber;                        //@synthesize dayNumber=_dayNumber - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setDayNumber:(long long)arg1 ;
-(long long)dayNumber;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
@end

