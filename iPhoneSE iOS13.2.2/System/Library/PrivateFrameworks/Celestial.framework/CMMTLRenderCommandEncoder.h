/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/MTLRenderCommandEncoder.h>

@protocol MTLRenderCommandEncoder;
@class CMMTLCommandBuffer, CMMTLRenderPipelineState, MTLRenderPassDescriptor, NSString;

@interface CMMTLRenderCommandEncoder : NSObject <MTLRenderCommandEncoder> {

	CMMTLCommandBuffer* _cmCommandBuffer;
	id<MTLRenderCommandEncoder> _renderEncoder;
	CMMTLRenderPipelineState* _cmRenderPipelineState;
	MTLRenderPassDescriptor* _renderPassDescriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long tileWidth; 
@property (readonly) unsigned long long tileHeight; 
-(void)forwardInvocation:(id)arg1 ;
-(void)endEncoding;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithCMMTLCommandBuffer:(id)arg1 renderDescriptor:(id)arg2 ;
@end

