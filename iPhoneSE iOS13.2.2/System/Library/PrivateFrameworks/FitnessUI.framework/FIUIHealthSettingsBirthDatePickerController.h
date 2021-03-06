/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIUIHealthSettingsForceUpdatable.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable> {

	FIUIHealthSettingsDatePicker* _datePickerView;
	/*^block*/id _dateOfBirthUpdateHandler;

}

@property (nonatomic,retain) FIUIHealthSettingsDatePicker * datePickerView;              //@synthesize datePickerView=_datePickerView - In the implementation block
@property (nonatomic,copy) id dateOfBirthUpdateHandler;                                  //@synthesize dateOfBirthUpdateHandler=_dateOfBirthUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)forceUpdate;
-(void)setDatePickerView:(FIUIHealthSettingsDatePicker *)arg1 ;
-(FIUIHealthSettingsDatePicker *)datePickerView;
-(void)setDateOfBirth:(id)arg1 ;
-(id)dateOfBirthUpdateHandler;
-(void)setDateOfBirthUpdateHandler:(id)arg1 ;
@end

