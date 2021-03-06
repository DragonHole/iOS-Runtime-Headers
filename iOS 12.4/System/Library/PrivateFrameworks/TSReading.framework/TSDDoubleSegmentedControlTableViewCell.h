/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell {

	TSKSegmentedControl* mLeftSegmentedControl;
	TSKSegmentedControl* mRightSegmentedControl;

}

@property (nonatomic,readonly) TSKSegmentedControl * leftSegmentedControl; 
@property (nonatomic,readonly) TSKSegmentedControl * rightSegmentedControl; 
-(id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2 ;
-(TSKSegmentedControl *)leftSegmentedControl;
-(TSKSegmentedControl *)rightSegmentedControl;
-(void)dealloc;
-(void)layoutSubviews;
@end

