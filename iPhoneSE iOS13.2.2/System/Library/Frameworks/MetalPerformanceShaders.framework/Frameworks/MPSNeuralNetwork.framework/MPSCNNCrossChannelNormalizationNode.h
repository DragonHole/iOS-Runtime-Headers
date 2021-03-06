/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode {

	unsigned long long _kernelSizeInFeatureChannels;

}

@property (assign,nonatomic) unsigned long long kernelSizeInFeatureChannels;              //@synthesize kernelSizeInFeatureChannels=_kernelSizeInFeatureChannels - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(id)initWithSource:(id)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(unsigned long long)kernelSizeInFeatureChannels;
-(void)setKernelSizeInFeatureChannels:(unsigned long long)arg1 ;
@end

