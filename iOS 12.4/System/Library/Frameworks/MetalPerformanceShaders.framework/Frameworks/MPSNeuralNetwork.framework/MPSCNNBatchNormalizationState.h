/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNBatchNormalization;

@interface MPSCNNBatchNormalizationState : MPSNNGradientState {

	MPSCNNBatchNormalization* _batchNormalization;
	unsigned long long _accumulationCount;
	unsigned long long _numberOfFeatureChannels;
	float _epsilon;

}

@property (nonatomic,retain,readonly) MPSCNNBatchNormalization * batchNormalization;              //@synthesize batchNormalization=_batchNormalization - In the implementation block
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4 ;
-(id)beta;
-(id)initDeferredWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4 ;
-(MPSCNNBatchNormalization *)batchNormalization;
-(id)gradientForGamma;
-(id)gradientForBeta;
-(id)variance;
-(id)mean;
-(id)gamma;
-(void)dealloc;
-(void)reset;
@end

