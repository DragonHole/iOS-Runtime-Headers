/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLBuffer, MTLRenderPipelineState, MTLTexture;
@interface NTKSpectrumResourceManager : NSObject {

	id<MTLDevice> _device;
	unsigned long long _clients;
	unsigned long long _pixelFormat;
	id<MTLBuffer> _verticesBuffer;
	id<MTLRenderPipelineState> _pipelineStates[4];
	id<MTLTexture> _vignetteTexture;

}
+(void)_deallocInstance:(id)arg1 ;
+(id)sharedInstanceWithPixelFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithPixelFormat:(unsigned long long)arg1 ;
-(void)_asyncDeallocInstance;
-(void)_loadPrograms;
-(void)addClient;
-(void)removeClient;
-(void)_loadGeometry;
-(id)vignetteTexture;
-(id)renderPipelineForOpacity:(BOOL)arg1 masking:(BOOL)arg2 ;
-(id)verticesBuffer;
@end

