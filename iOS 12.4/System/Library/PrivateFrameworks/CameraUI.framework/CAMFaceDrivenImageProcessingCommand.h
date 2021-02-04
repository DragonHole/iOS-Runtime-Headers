/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFaceDrivenImageProcessingCommand : CAMCaptureCommand {

	BOOL _faceDrivenImageProcessingEnabled;

}

@property (getter=isFaceDrivenImageProcessingEnabled,nonatomic,readonly) BOOL faceDrivenImageProcessingEnabled;              //@synthesize faceDrivenImageProcessingEnabled=_faceDrivenImageProcessingEnabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(BOOL)isFaceDrivenImageProcessingEnabled;
-(id)initWithFaceDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
