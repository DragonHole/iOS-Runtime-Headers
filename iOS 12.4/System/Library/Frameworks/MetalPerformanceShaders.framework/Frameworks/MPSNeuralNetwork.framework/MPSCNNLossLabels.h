/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@class NSData;

@interface MPSCNNLossLabels : MPSState {

	MPSImageCoordinate _lossImageSize;
	BOOL _isScalarLoss;
	unsigned long long _numNonZeroWeights;
	NSData* _userData;
	unsigned long long _numFeatureChannels_labels;
	unsigned long long _numFeatureChannels_loss;

}
-(id)lossImage;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2 ;
-(id)labelsImage;
-(id)weightsImage;
-(id)init;
-(void)dealloc;
@end

