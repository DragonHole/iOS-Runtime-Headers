/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@interface MPSImagePyramid : MPSUnaryImageKernel {

	id<MTLBuffer> wtBuffer;
	id<MTLBuffer> wtBufferh;
	float* wtArray;
	unsigned short* wtArrayh;
	unsigned long long _fWidth;
	unsigned long long _fHeight;
	BOOL separable;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize fHeight=_fHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize fWidth=_fWidth - In the implementation block
-(id)initWithDevice:(id)arg1 centerWeight:(float)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
@end

