/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMInstructionLabel.h>

@class NSArray;

@interface CAMQRCodeInstructionLabel : CAMInstructionLabel {

	long long _devicePosition;
	NSArray* _mrcResults;

}

@property (assign,nonatomic) long long devicePosition;                                //@synthesize devicePosition=_devicePosition - In the implementation block
@property (setter=setMRCResults:,nonatomic,retain) NSArray * mrcResults;              //@synthesize mrcResults=_mrcResults - In the implementation block
+(BOOL)shouldDisplayInstructionForMRCResults:(id)arg1 devicePosition:(long long)arg2 ;
+(id)_textForMRCResults:(id)arg1 devicePosition:(long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)devicePosition;
-(void)setDevicePosition:(long long)arg1 ;
-(void)setMRCResults:(id)arg1 ;
-(void)_updateTextWithPriorMRCResults:(id)arg1 ;
-(NSArray *)mrcResults;
@end

