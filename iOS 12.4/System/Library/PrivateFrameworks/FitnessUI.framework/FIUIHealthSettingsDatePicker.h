/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIDatePicker.h>

@interface FIUIHealthSettingsDatePicker : UIDatePicker {

	/*^block*/id _dateUpdateHandler;

}

@property (nonatomic,copy) id dateUpdateHandler;              //@synthesize dateUpdateHandler=_dateUpdateHandler - In the implementation block
-(void)forceUpdate;
-(void)_dateDidChange:(id)arg1 ;
-(id)dateUpdateHandler;
-(void)setDateUpdateHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

