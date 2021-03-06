/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {

	NSLengthFormatter* _heightFormatter;
	/*^block*/id _heightUpdateHandler;

}

@property (nonatomic,copy) id heightUpdateHandler;              //@synthesize heightUpdateHandler=_heightUpdateHandler - In the implementation block
-(void)forceUpdate;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_heightPickerUpdated;
-(id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(id)heightUpdateHandler;
-(void)setHeightQuantity:(id)arg1 ;
-(void)setHeightUpdateHandler:(id)arg1 ;
@end

