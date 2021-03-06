/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DESPFLNoisable : PBCodable <NSCopying> {

	SCD_Struct_DE1* _datas;
	double _weight;
	unsigned _iteration;
	NSString* _recipeId;
	int _version;
	SCD_Struct_DE2 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipeId; 
@property (nonatomic,retain) NSString * recipeId;                          //@synthesize recipeId=_recipeId - In the implementation block
@property (assign,nonatomic) BOOL hasIteration; 
@property (assign,nonatomic) unsigned iteration;                           //@synthesize iteration=_iteration - In the implementation block
@property (assign,nonatomic) BOOL hasWeight; 
@property (assign,nonatomic) double weight;                                //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) unsigned long long datasCount; 
@property (nonatomic,readonly) double* datas; 
-(unsigned long long)datasCount;
-(void)clearDatas;
-(double)dataAtIndex:(unsigned long long)arg1 ;
-(double*)datas;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setRecipeId:(NSString *)arg1 ;
-(BOOL)hasRecipeId;
-(void)setDatas:(double*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)recipeId;
-(void)setIteration:(unsigned)arg1 ;
-(void)setHasIteration:(BOOL)arg1 ;
-(BOOL)hasIteration;
-(unsigned)iteration;
-(void)setHasWeight:(BOOL)arg1 ;
-(BOOL)hasWeight;
-(void)addData:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(double)weight;
-(void)setWeight:(double)arg1 ;
@end

