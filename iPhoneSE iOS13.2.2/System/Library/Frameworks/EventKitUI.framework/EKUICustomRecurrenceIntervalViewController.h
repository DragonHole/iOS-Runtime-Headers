/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView, NSString;

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _pickerView;
	BOOL _maximumInterval;
	long long _frequency;
	long long _interval;
	/*^block*/id _changeBlock;

}

@property (copy) id changeBlock;                                    //@synthesize changeBlock=_changeBlock - In the implementation block
@property (assign,nonatomic) long long frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long interval;                    //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) BOOL maximumInterval;                  //@synthesize maximumInterval=_maximumInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)pickerView;
-(BOOL)maximumInterval;
-(id)changeBlock;
-(id)initWithSelectedInterval:(long long)arg1 frequency:(long long)arg2 changeBlock:(/*^block*/id)arg3 ;
-(void)setMaximumInterval:(BOOL)arg1 ;
-(void)setChangeBlock:(id)arg1 ;
@end

