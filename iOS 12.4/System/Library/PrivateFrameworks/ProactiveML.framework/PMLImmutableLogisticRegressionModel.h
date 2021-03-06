/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>
#import <libobjc.A.dylib/PMLRegressionModelProtocol.h>
#import <libobjc.A.dylib/PMLClassifierModelProtocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLRegressionModelProtocol, PMLClassifierModelProtocol> {

	id _backingObject;
	const float* _weights;
	int _length;
	BOOL _intercept;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)predict:(id)arg1 ;
-(id)initWithWeights:(id)arg1 intercept:(BOOL)arg2 ;
-(BOOL)intercept;
-(id)toChunk;
-(id)initWithChunk:(id)arg1 intercept:(BOOL)arg2 ;
-(BOOL)classify:(id)arg1 ;
-(id)initWithFloatsNoCopy:(const float*)arg1 count:(int)arg2 intercept:(BOOL)arg3 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
@end

