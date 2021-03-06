/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {

	int _style;
	UILabel* _titleView;
	UILabel* _valueView;
	UILabel* _value2View;
	int _twoValueCellStyle;

}

@property (nonatomic,readonly) unsigned visibleItems; 
-(BOOL)update;
-(void)layoutSubviews;
-(id)titleView;
-(unsigned)visibleItems;
-(id)valueView;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)value2View;
-(double)_layoutForWidth:(double)arg1 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
@end

