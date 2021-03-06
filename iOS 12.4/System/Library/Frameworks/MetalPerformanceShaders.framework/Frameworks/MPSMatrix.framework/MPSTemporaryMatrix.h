/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix.h>

@interface MPSTemporaryMatrix : MPSMatrix {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(void)prefetchStorageWithCommandBuffer:(id)arg1 matrixDescriptorList:(id)arg2 ;
+(id)temporaryMatrixWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
-(unsigned long long)readCount;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)setReadCount:(unsigned long long)arg1 ;
@end

