/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Frameworks/MTLSpline.framework/MTLSpline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState, MTLRenderPipelineState;
#import <MTLSpline/MTLSpline-Structs.h>
@class MTKView, NSMutableArray;

@interface MTLSplineRenderer : NSObject {

	float _edgeFactor;
	float _insideFactor;
	MTKView* _view;
	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computeTessellationFactorsPipeline;
	id<MTLRenderPipelineState> _renderPostTessellationPipelineState;
	NSMutableArray* _dataCollection;
	unsigned long long _triangleFillMode;
	SCD_Struct_MT13 _projectionMatrix;

}

@property (retain) NSMutableArray * dataCollection;                  //@synthesize dataCollection=_dataCollection - In the implementation block
@property (assign) SCD_Struct_MT13 projectionMatrix;                 //@synthesize projectionMatrix=_projectionMatrix - In the implementation block
@property (assign) unsigned long long triangleFillMode;              //@synthesize triangleFillMode=_triangleFillMode - In the implementation block
-(void)setTriangleFillMode:(unsigned long long)arg1 ;
-(SCD_Struct_MT13)projectionMatrix;
-(void)setProjectionMatrix:(SCD_Struct_MT13)arg1 ;
-(id)initWithMTKView:(id)arg1 dataCollection:(id)arg2 ;
-(void)createPipelineStates;
-(void)renderWithCommandBuffer:(id)arg1 ;
-(unsigned long long)triangleFillMode;
-(void)setDataCollection:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataCollection;
-(void)computeTessellationFactors:(id)arg1 data:(id)arg2 ;
-(void)renderPostTessellation:(id)arg1 data:(id)arg2 ;
-(void)renderToTextureWithCommandBuffer:(id)arg1 texture:(id)arg2 ;
-(id)init;
@end

