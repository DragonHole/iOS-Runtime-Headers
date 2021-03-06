/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandEncoder.h>

@class NSString, MTLToolsCommandBuffer;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder> {

	MTLToolsCommandBuffer* _commandBuffer;

}

@property (nonatomic,readonly) MTLToolsCommandBuffer * commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(unsigned long long)globalTraceObjectID;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)setGlobalTraceObjectID:(unsigned long long)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)addRetainedObject:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(ILayerLockingPolicy*)arg3 ;
-(void)endEncoding;
-(MTLToolsCommandBuffer *)commandBuffer;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

