/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUPickerCellDelegate <NSObject>
@optional
-(BOOL)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;
-(id)pickerViewCell:(id)arg1 titleForValueAtIndex:(long long)arg2;
-(id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;

@required
-(void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
-(long long)numberOfValuesForPickerViewCell:(id)arg1;

@end
