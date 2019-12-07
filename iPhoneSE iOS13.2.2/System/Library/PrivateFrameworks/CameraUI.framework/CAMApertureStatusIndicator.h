/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMApertureStatusIndicator : CAMControlStatusIndicator {

	BOOL _on;
	double _apertureValue;

}

@property (assign,nonatomic) double apertureValue;              //@synthesize apertureValue=_apertureValue - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;               //@synthesize on=_on - In the implementation block
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(id)valueText;
-(double)apertureValue;
-(void)setApertureValue:(double)arg1 ;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)canShowValue;
@end
