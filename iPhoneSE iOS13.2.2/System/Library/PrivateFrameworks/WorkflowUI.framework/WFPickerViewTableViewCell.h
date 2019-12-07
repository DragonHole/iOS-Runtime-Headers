/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIPickerView;

@interface WFPickerViewTableViewCell : UITableViewCell {

	UIPickerView* _pickerView;

}

@property (nonatomic,readonly) UIPickerView * pickerView;                                                   //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic,__weak) id<UIPickerViewDelegate><UIPickerViewDataSource> delegate; 
-(id<UIPickerViewDelegate><UIPickerViewDataSource>)delegate;
-(void)setDelegate:(id<UIPickerViewDelegate><UIPickerViewDataSource>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIPickerView *)pickerView;
@end
