/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface HRElectrocardiogramSessionScreenView : UIView {

	BOOL _isLargeDevice;
	UIImageView* _waveformView;
	UILabel* _countdownValueLabel;
	UILabel* _countdownUnitLabel;

}

@property (nonatomic,readonly) BOOL isLargeDevice;                         //@synthesize isLargeDevice=_isLargeDevice - In the implementation block
@property (nonatomic,readonly) UIImageView * waveformView;                 //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,readonly) UILabel * countdownValueLabel;              //@synthesize countdownValueLabel=_countdownValueLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countdownUnitLabel;               //@synthesize countdownUnitLabel=_countdownUnitLabel - In the implementation block
-(UIImageView *)waveformView;
-(void)_setUpUI;
-(UILabel *)countdownValueLabel;
-(BOOL)isLargeDevice;
-(UILabel *)countdownUnitLabel;
-(id)initWithLargeDevice:(BOOL)arg1 ;
@end

