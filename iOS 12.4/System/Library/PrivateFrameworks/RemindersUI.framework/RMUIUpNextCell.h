/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemindersUI.framework/RemindersUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersUI/RemindersUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, RMUIUpNextLabel, UIImageView, RMUIUpNextRowSeparator, UIView;

@interface RMUIUpNextCell : UIView {

	UIVisualEffectView* _primaryVibrantView;
	UIVisualEffectView* _secondaryVibrantView;
	UIVisualEffectView* _tertiaryVibrantView;
	RMUIUpNextLabel* _timeLabel;
	RMUIUpNextLabel* _titleLabel;
	RMUIUpNextLabel* _locationLabel;
	UIImageView* _circleImageView;
	RMUIUpNextRowSeparator* _rowSeparator;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)setupConstraints;
-(id)titleStringForReminder:(id)arg1 ;
-(void)updateMaxLayoutWidth;
-(double)timeViewWidth;
-(double)rightMarginForTimeViewWidth:(double)arg1 ;
-(double)leftMarginForTimeViewWidth:(double)arg1 ;
-(id)priorityImageForLevel:(long long)arg1 withColor:(id)arg2 ;
-(id)initWithReminder:(id)arg1 showRowSeparator:(BOOL)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIView *)contentView;
@end
