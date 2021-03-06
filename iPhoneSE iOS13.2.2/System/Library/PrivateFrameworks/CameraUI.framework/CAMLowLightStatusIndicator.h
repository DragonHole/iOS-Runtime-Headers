/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator {

	BOOL _lowLightDisabled;
	double _duration;
	long long _lowLightMode;

}

@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long lowLightMode;                                       //@synthesize lowLightMode=_lowLightMode - In the implementation block
@property (assign,getter=isLowLightDisabled,nonatomic) BOOL lowLightDisabled;              //@synthesize lowLightDisabled=_lowLightDisabled - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)valueText;
-(id)imageNameForCurrentState;
-(long long)lowLightMode;
-(BOOL)isLowLightDisabled;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setLowLightMode:(long long)arg1 ;
-(void)setLowLightDisabled:(BOOL)arg1 ;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)canShowValue;
@end

