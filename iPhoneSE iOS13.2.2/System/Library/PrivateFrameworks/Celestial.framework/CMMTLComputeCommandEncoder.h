/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/MTLComputeCommandEncoderSPI.h>

@protocol MTLComputeCommandEncoder;
@class CMMTLComputePipelineState, CMMTLCommandBuffer, NSString;

@interface CMMTLComputeCommandEncoder : NSObject <MTLComputeCommandEncoderSPI> {

	id<MTLComputeCommandEncoder> _computeEncoder;
	CMMTLComputePipelineState* _cmComputePipelineState;
	CMMTLCommandBuffer* _cmCommandBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long dispatchType; 
-(void)forwardInvocation:(id)arg1 ;
-(void)setComputePipelineState:(id)arg1 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadgroups:(SCD_Struct_CM43)arg1 threadsPerThreadgroup:(SCD_Struct_CM43)arg2 ;
-(void)endEncoding;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithCMMTLCommandBuffer:(id)arg1 ;
-(id)initWithCMMTLCommandBuffer:(id)arg1 dispatchType:(unsigned long long)arg2 ;
-(void)dispatchThreads:(SCD_Struct_CM43)arg1 threadsPerThreadgroup:(SCD_Struct_CM43)arg2 ;
@end
