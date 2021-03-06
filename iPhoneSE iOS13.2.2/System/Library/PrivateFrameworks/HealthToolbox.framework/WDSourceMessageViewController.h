/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKViewController.h>

@class UILabel, HKSource;

@interface WDSourceMessageViewController : HKViewController {

	UILabel* _messageLabel;
	HKSource* _source;
	long long _style;

}

@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
-(long long)style;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updateFont;
-(id)initWithStyle:(long long)arg1 source:(id)arg2 ;
@end

