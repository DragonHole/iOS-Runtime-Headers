/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue;
#import <ARKit/ARKit-Structs.h>
@class ARGPUCubemapConverter, CIContext;

@interface ARCubemapCompletion : NSObject {

	void* _espresso_ctx;
	void* _espresso_plan;
	SCD_Struct_AR68* _espresso_net;
	SCD_Struct_AR69 _espresso_processing_params;
	BOOL _espressoInitialized;
	vector<unsigned char, std::__1::allocator<unsigned char> > _randomNumbers;
	vImage_Buffer* _vImageBuffer;
	ARGPUCubemapConverter* _cubemapConverter;
	double _bias_exposure_threshold;
	unsigned long long _bias_height;
	float _r_bias;
	float _g_bias;
	float _b_bias;
	int _bias_mask;
	float _alpha_threshold;
	unsigned long long _gan_size;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	CIContext* _contextWithMTLDevice;
	CIContext* _defaultContext;

}
+(id)sharedInstance;
-(id)completeCubemap:(id)arg1 cameraExposure:(double)arg2 rotationWorldFromCube:(SCD_Struct_AR5)arg3 ;
-(id)completeLatLongImage:(id)arg1 ;
-(id)blendSeam:(id)arg1 ;
-(id)toMTLTexture:(id)arg1 ;
-(vImage_Buffer*)toVImageBuffer:(id)arg1 ;
-(id)toCIImage:(SCD_Struct_AR73*)arg1 ;
-(id)init;
-(void)dealloc;
@end

