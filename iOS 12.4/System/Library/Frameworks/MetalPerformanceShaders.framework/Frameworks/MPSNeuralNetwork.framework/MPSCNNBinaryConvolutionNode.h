/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNBinaryConvolutionNode : MPSCNNConvolutionNode {

	float _scaleValue;
	unsigned long long _type;
	unsigned long long _flags;
	float* _outputBiasTerms;
	float* _outputScaleTerms;
	float* _inputBiasTerms;
	float* _inputScaleTerms;

}

@property (nonatomic,readonly) MPSCNNConvolutionGradientStateNode * convolutionGradientState; 
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float*)arg3 outputScaleTerms:(const float*)arg4 inputBiasTerms:(const float*)arg5 inputScaleTerms:(const float*)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8 ;
-(FilterGraphNode*)newFilterNode;
-(MPSCNNConvolutionGradientStateNode *)convolutionGradientState;
-(id)convolutionState;
-(id)initWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float*)arg3 outputScaleTerms:(const float*)arg4 inputBiasTerms:(const float*)arg5 inputScaleTerms:(const float*)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8 ;
-(void)dealloc;
@end
