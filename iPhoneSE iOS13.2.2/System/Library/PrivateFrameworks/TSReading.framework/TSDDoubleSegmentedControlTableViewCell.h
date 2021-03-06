/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2 ;
-(TSKSegmentedControl *)leftSegmentedControl;
-(TSKSegmentedControl *)rightSegmentedControl;
@end

