/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLBufferLayoutDescriptor.h>

@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {

	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _instanceStepRate;

}
-(void)setStride:(unsigned long long)arg1 ;
-(void)setStepFunction:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(void)setStepRate:(unsigned long long)arg1 ;
-(unsigned long long)stepRate;
-(unsigned long long)stepFunction;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

