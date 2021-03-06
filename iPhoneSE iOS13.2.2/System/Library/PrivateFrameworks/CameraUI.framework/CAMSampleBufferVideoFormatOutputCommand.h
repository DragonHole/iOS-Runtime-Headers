/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSampleBufferVideoFormatOutputCommand : CAMCaptureCommand {

	long long __videoFormat;

}

@property (nonatomic,readonly) long long _videoFormat;              //@synthesize _videoFormat=__videoFormat - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_videoFormat;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSampleBufferVideoFormat:(long long)arg1 ;
@end

