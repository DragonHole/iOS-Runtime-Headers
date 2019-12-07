/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState, MTLDepthStencilState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUCubemapProjector : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _cubemapPipelineStateSRGB;
	id<MTLRenderPipelineState> _cubemapPipelineStateHDR;
	id<MTLDepthStencilState> _cubemapDepthState;

}
-(id)init;
-(void)projectToCube:(id)arg1 transformWorldFromCube:(SCD_Struct_AR12)arg2 planes:(const vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >*)arg3 blend:(BOOL)arg4 ;
@end
