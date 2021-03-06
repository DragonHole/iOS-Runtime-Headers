/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputePipelineState.h>

@protocol MTLFunction;
@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, NSArray;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {

	unsigned long long _maxThreadPositionInGrid[3];
	unsigned long long _maxThreadsPerGrid[3];
	unsigned long long _maxThreadPositionInThreadgroup[3];
	unsigned long long _maxThreadIndexInThreadgroup[3];
	unsigned long long _maxThreadsPerThreadgroup[3];
	unsigned long long _maxThreadgroupPositionInGrid[3];
	unsigned long long _maxThreadgroupsPerGrid[3];
	unsigned long long _maxStageInGridSize[3];
	unsigned long long _maxStageInGridOrigin[3];
	id<MTLFunction> _function;
	MTLComputePipelineDescriptor* _descriptor;
	MTLComputePipelineReflection* _reflection;
	NSArray* _imageFilterFunctions;
	SCD_Struct_MT31* _imageFilterFunctionInfo;

}

@property (nonatomic,readonly) id<MTLFunction> function;                               //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
@property (nonatomic,readonly) NSArray * imageFilterFunctions;                         //@synthesize imageFilterFunctions=_imageFilterFunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT31* imageFilterFunctionInfo;               //@synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLComputePipelineReflection *)reflection;
-(id<MTLFunction>)function;
-(id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT31*)arg2 ;
-(NSArray *)imageFilterFunctions;
-(SCD_Struct_MT31*)imageFilterFunctionInfo;
-(id)getParameter:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(MTLComputePipelineDescriptor *)descriptor;
@end

