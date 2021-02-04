/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSMutableArray;

@interface _ATXNeuralNetworkBuilder : NSObject {

	unsigned long long _prevSize;
	unsigned long long _nlayers;
	NSMutableData* _descriptors;
	NSMutableArray* _weightsAndBiases;
	BOOL _haveOutputLayer;
	BOOL _done;

}
-(id)initWithInputSize:(unsigned long long)arg1 ;
-(void)addHiddenLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 skip:(BOOL)arg5 ;
-(void)addOutputLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 softmax:(BOOL)arg5 ;
-(id)serialize;
-(id)init;
@end
