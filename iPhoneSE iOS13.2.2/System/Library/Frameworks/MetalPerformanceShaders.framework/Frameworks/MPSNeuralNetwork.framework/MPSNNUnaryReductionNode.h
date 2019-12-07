/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNUnaryReductionNode : MPSNNFilterNode {

	SCD_Struct_MP4 _clipRectSource;

}

@property (assign,nonatomic) SCD_Struct_MP4 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
-(void)setClipRectSource:(SCD_Struct_MP4)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(SCD_Struct_MP4)clipRectSource;
-(id)gradientFilterWithSource:(id)arg1 ;
@end
