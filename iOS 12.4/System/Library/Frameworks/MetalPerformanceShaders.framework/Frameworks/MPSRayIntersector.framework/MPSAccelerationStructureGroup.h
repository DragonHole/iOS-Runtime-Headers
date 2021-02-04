/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
@interface MPSAccelerationStructureGroup : NSObject {

	MPSBufferAllocator* _triangleIndexBufferAllocator;
	MPSBufferAllocator* _innerNodeBufferAllocator;
	MPSBufferAllocator* _leafNodeBufferAllocator;
	MPSBufferAllocator* _pageTable0BufferAllocator;
	MPSBufferAllocator* _pageTable1BufferAllocator;
	MPSBufferAllocator* _pageBufferAllocator;
	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
-(MPSBufferAllocator*)innerNodeBufferAllocator;
-(MPSBufferAllocator*)leafNodeBufferAllocator;
-(MPSBufferAllocator*)pageTable0BufferAllocator;
-(MPSBufferAllocator*)pageTable1BufferAllocator;
-(MPSBufferAllocator*)pageBufferAllocator;
-(MPSBufferAllocator*)triangleIndexBufferAllocator;
-(void)dealloc;
@end
