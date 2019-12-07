/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PREUMResponseItem : PBCodable <NSCopying> {

	unsigned _modelId;
	unsigned _replyTextId;
	unsigned _responseClassId;
	SCD_Struct_PR3 _has;

}

@property (assign,nonatomic) BOOL hasModelId; 
@property (assign,nonatomic) unsigned modelId;                      //@synthesize modelId=_modelId - In the implementation block
@property (assign,nonatomic) BOOL hasResponseClassId; 
@property (assign,nonatomic) unsigned responseClassId;              //@synthesize responseClassId=_responseClassId - In the implementation block
@property (assign,nonatomic) BOOL hasReplyTextId; 
@property (assign,nonatomic) unsigned replyTextId;                  //@synthesize replyTextId=_replyTextId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasModelId;
-(unsigned)modelId;
-(void)setModelId:(unsigned)arg1 ;
-(unsigned)replyTextId;
-(void)setHasModelId:(BOOL)arg1 ;
-(void)setResponseClassId:(unsigned)arg1 ;
-(void)setHasResponseClassId:(BOOL)arg1 ;
-(BOOL)hasResponseClassId;
-(void)setReplyTextId:(unsigned)arg1 ;
-(void)setHasReplyTextId:(BOOL)arg1 ;
-(BOOL)hasReplyTextId;
-(unsigned)responseClassId;
@end
