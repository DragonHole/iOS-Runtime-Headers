/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingPrecisionAtKPair : PBCodable <NSCopying> {

	unsigned long long _k;
	float _precision;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasK; 
@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) BOOL hasPrecision; 
@property (assign,nonatomic) float precision;                     //@synthesize precision=_precision - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)precision;
-(void)setPrecision:(float)arg1 ;
-(unsigned long long)k;
-(void)setK:(unsigned long long)arg1 ;
-(void)setHasK:(BOOL)arg1 ;
-(BOOL)hasK;
-(void)setHasPrecision:(BOOL)arg1 ;
-(BOOL)hasPrecision;
@end
