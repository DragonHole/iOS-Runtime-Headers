/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell {

	UISegmentedControl* _segmentedControl;
	/*^block*/id _handler;

}

@property (assign,nonatomic,__weak) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (copy) id handler;                                                            //@synthesize handler=_handler - In the implementation block
-(void)_segmentedControlDidChange:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)awakeFromNib;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
@end

