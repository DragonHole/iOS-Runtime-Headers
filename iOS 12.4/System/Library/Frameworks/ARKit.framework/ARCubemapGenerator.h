/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ARKit/ARKit-Structs.h>
@class ARGPUCubemapProjector, ARGPUCubemapConverter, ARGPUWarper, NSObject;

@interface ARCubemapGenerator : NSObject {

	ARGPUCubemapProjector* _cubemapProjector;
	ARGPUCubemapConverter* _cubemapConverter;
	ARGPUWarper* _gpuWarper;
	NSObject*<OS_dispatch_queue> _cubemapQueue;

}
-(void)cubemapWithTransform:(SCD_Struct_AR16)arg1 extent:(ARLabHistogram)arg2 lastHistogram:(vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >*)arg3 fromPlanes:(CVBufferRef)arg4 cameraImage:(SCD_Struct_AR16)arg5 cameraTransform:(SCD_Struct_AR5)arg6 cameraIntrinsics:(double)arg7 cameraExposure:(float)arg8 cameraExposureOffset:(/*^block*/id)arg9 ;
-(id)init;
@end

