/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSParallelRandom.h>

@protocol MTLBuffer;
@interface MPSParallelRandomPhilox : MPSParallelRandom {

	id<MTLBuffer> _counters;
	float _bernoulliParameter;
	float _uniformMin;
	float _uniformMax;
	unsigned long long _seed;

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 ;
@end

