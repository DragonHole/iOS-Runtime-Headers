/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSCNNArithmetic.h>

@interface MPSNNCompare : MPSCNNArithmetic {

	float _threshold;
	unsigned long long _comparisonType;

}

@property (assign,nonatomic) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (assign,nonatomic) float threshold;                                //@synthesize threshold=_threshold - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(float)threshold;
-(void)setThreshold:(float)arg1 ;
-(unsigned long long)comparisonType;
-(void)setComparisonType:(unsigned long long)arg1 ;
@end
