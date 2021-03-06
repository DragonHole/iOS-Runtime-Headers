/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMLNoiseStrategy <NSObject,PMLPlistAndChunksSerializableProtocol>
@property (assign) int maxIterations; 
@required
-(void)addNoiseToSparseVector:(id)arg1;
-(void)addNoiseToSparseMatrix:(id)arg1;
-(float)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2;
-(int)maxIterations;
-(void)setMaxIterations:(int)arg1;

@end

