/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsPipelineLibrary.h>

@class NSString;

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary {

	NSString* _filePath;

}

@property (nonatomic,copy) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)initWithLibrary:(id)arg1 parent:(id)arg2 filePath:(id)arg3 ;
-(void)dealloc;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end

