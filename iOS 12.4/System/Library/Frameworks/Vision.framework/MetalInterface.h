/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLLibrary;
#import <Vision/Vision-Structs.h>
@interface MetalInterface : NSObject {

	id<MTLDevice> mtlDevice;
	id<MTLCommandQueue> mtlCommandQueue;
	id<MTLLibrary> mtlLibrary;

}
-(id)textureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned long long)arg3 usage:(unsigned long long)arg4 ;
-(id)textureWithPixelData:(vImage_Buffer*)arg1 format:(unsigned long long)arg2 ;
-(id)textureFromCVPixelBuffer:(CVBufferRef)arg1 ;
-(void)performVotingImage:(id)arg1 outputTex:(id)arg2 subBuffer:(char*)arg3 ;
-(void)performAdaptiveBinarizationImage:(vImage_Buffer*)arg1 output:(vImage_Buffer*)arg2 sumTable:(vImage_Buffer*)arg3 sumSqTable:(vImage_Buffer*)arg4 ;
-(id)init;
@end

