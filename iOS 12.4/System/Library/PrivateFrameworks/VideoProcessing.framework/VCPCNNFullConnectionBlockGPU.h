/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNFullConnectionBlock.h>

@class MPSCNNFullyConnected;

@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock {

	MPSCNNFullyConnected* _mpsFullConn;

}
-(int)initializeRest;
-(int)convVCPNeuronTypeToMPS:(int)arg1 ;
-(int)shuffleWeights:(float*)arg1 fromSrc:(float*)arg2 inputChannels:(int)arg3 inputHeight:(int)arg4 inputWidth:(int)arg5 outputChannels:(int)arg6 ;
-(int)initMPS;
-(int)loadWeights:(_sFILE*)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4 ;
-(int)forward;
@end
