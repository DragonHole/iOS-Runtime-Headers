/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMLNoiseStrategy <NSObject,PMLPlistAndChunksSerializableProtocol>
@required
-(void)addNoiseToSparseVector:(id)arg1;
-(void)addNoiseToSparseMatrix:(id)arg1;
-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float*)arg3;

@end

