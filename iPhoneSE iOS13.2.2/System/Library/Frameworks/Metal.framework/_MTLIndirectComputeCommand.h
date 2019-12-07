/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLIndirectComputeCommandSPI.h>

@class NSString;

@interface _MTLIndirectComputeCommand : NSObject <MTLIndirectComputeCommandSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)setComputePipelineState:(id)arg1 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setStageInRegion:(SCD_Struct_MT30)arg1 ;
-(unsigned long long)getCommandType;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT11)arg1 threadsPerThreadgroup:(SCD_Struct_MT11)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT11)arg1 threadsPerThreadgroup:(SCD_Struct_MT11)arg2 ;
-(void)setBarrier;
-(void)clearBarrier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1 ;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_MT30)getStageInRegion;
-(BOOL)hasBarrier;
-(void)setKernelArgument:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
@end
