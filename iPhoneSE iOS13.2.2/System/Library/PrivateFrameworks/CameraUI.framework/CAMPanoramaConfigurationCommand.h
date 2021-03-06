/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaConfiguration;

@interface CAMPanoramaConfigurationCommand : CAMCaptureCommand {

	CAMPanoramaConfiguration* __configuration;

}

@property (nonatomic,readonly) CAMPanoramaConfiguration * _configuration;              //@synthesize _configuration=__configuration - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CAMPanoramaConfiguration *)_configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end

