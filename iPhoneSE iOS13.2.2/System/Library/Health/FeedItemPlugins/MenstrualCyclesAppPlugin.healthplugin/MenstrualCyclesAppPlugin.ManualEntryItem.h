/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@interface MenstrualCyclesAppPlugin.ManualEntryItem : NSObject <UIPickerViewDelegate, UIPickerViewDataSource> {

	 selectedItem;
	 delegate;
	 $__lazy_storage_$_numberFormatter;
	 $__lazy_storage_$_dateComponentsFormatter;

}
-(id)init;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
@end

