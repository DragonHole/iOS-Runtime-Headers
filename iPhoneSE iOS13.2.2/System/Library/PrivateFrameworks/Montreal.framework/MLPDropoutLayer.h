/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPImageLayer.h>

@interface MLPDropoutLayer : MLPImageLayer {

	float _dropoutRatio;

}

@property (readonly) float dropoutRatio;              //@synthesize dropoutRatio=_dropoutRatio - In the implementation block
-(void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3 ;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_Mo4*)arg2 ;
-(void)createKernel;
-(NSArray*)forward:(id)arg1 input:(NSArray*)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(NSArray*)backward:(id)arg1 inputGradient:(NSArray*)arg2 ;
-(NSArray*)seqForward:(id)arg1 input:(NSArray*)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4 ;
-(NSArray*)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(NSArray*)arg3 ;
-(id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 dropoutRatio:(float)arg4 ;
-(float)dropoutRatio;
-(NSArray*)forward:(id)arg1 input:(NSArray*)arg2 index:(id)arg3 runInference:(BOOL)arg4 ;
-(NSArray*)backward:(id)arg1 index:(id)arg2 inputGradient:(NSArray*)arg3 ;
-(id)initWithName:(id)arg1 previousLayer:(id)arg2 dropoutRatio:(float)arg3 ;
@end

