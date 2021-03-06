/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPrepareStillImageCaptureCommand : CAMCaptureCommand {

	unsigned long long __systemTimeOfCapture;

}

@property (nonatomic,readonly) unsigned long long _systemTimeOfCapture;              //@synthesize _systemTimeOfCapture=__systemTimeOfCapture - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSystemTime:(unsigned long long)arg1 ;
-(unsigned long long)_systemTimeOfCapture;
@end

