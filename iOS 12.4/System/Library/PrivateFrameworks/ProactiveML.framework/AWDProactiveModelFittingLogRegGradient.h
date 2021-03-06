/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingQuantizedSparseVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying> {

	unsigned long long _iteration;
	unsigned long long _timestamp;
	AWDProactiveModelFittingQuantizedDenseVector* _denseQuantizedGradient;
	AWDProactiveModelFittingEvalMetrics* _evaluationMetrics;
	float _gradientL2norm;
	float _gradientScaleFactor;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatVector* _sparseFloatGradient;
	AWDProactiveModelFittingQuantizedSparseVector* _sparseQuantizedGradient;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                        //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatGradient; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatVector * sparseFloatGradient;                      //@synthesize sparseFloatGradient=_sparseFloatGradient - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;                              //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasEvaluationMetrics; 
@property (nonatomic,retain) AWDProactiveModelFittingEvalMetrics * evaluationMetrics;                              //@synthesize evaluationMetrics=_evaluationMetrics - In the implementation block
@property (assign,nonatomic) BOOL hasIteration; 
@property (assign,nonatomic) unsigned long long iteration;                                                         //@synthesize iteration=_iteration - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseQuantizedGradient; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedSparseVector * sparseQuantizedGradient;              //@synthesize sparseQuantizedGradient=_sparseQuantizedGradient - In the implementation block
@property (assign,nonatomic) BOOL hasGradientScaleFactor; 
@property (assign,nonatomic) float gradientScaleFactor;                                                            //@synthesize gradientScaleFactor=_gradientScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL hasGradientL2norm; 
@property (assign,nonatomic) float gradientL2norm;                                                                 //@synthesize gradientL2norm=_gradientL2norm - In the implementation block
@property (nonatomic,readonly) BOOL hasDenseQuantizedGradient; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedDenseVector * denseQuantizedGradient;                //@synthesize denseQuantizedGradient=_denseQuantizedGradient - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)setMinibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(void)setEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasMinibatchStats;
-(BOOL)hasEvaluationMetrics;
-(AWDProactiveModelFittingMinibatchStats *)minibatchStats;
-(AWDProactiveModelFittingEvalMetrics *)evaluationMetrics;
-(void)setSparseFloatGradient:(AWDProactiveModelFittingSparseFloatVector *)arg1 ;
-(void)setSparseQuantizedGradient:(AWDProactiveModelFittingQuantizedSparseVector *)arg1 ;
-(void)setDenseQuantizedGradient:(AWDProactiveModelFittingQuantizedDenseVector *)arg1 ;
-(BOOL)hasSparseFloatGradient;
-(void)setIteration:(unsigned long long)arg1 ;
-(void)setHasIteration:(BOOL)arg1 ;
-(BOOL)hasIteration;
-(BOOL)hasSparseQuantizedGradient;
-(void)setGradientScaleFactor:(float)arg1 ;
-(void)setHasGradientScaleFactor:(BOOL)arg1 ;
-(BOOL)hasGradientScaleFactor;
-(void)setGradientL2norm:(float)arg1 ;
-(void)setHasGradientL2norm:(BOOL)arg1 ;
-(BOOL)hasGradientL2norm;
-(BOOL)hasDenseQuantizedGradient;
-(AWDProactiveModelFittingSparseFloatVector *)sparseFloatGradient;
-(unsigned long long)iteration;
-(AWDProactiveModelFittingQuantizedSparseVector *)sparseQuantizedGradient;
-(float)gradientScaleFactor;
-(float)gradientL2norm;
-(AWDProactiveModelFittingQuantizedDenseVector *)denseQuantizedGradient;
-(float)gradientValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)gradientLength;
-(BOOL)hasGradient;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

