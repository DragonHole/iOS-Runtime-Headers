/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libPPMDataModel.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libPPMDataModel.dylib/libPPMDataModel.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTABMUResistance : PBCodable <NSCopying> {

	float _traceResistance25C;
	float _traceResistanceTemperatureCoeff;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) BOOL hasTraceResistance25C; 
@property (assign,nonatomic) float traceResistance25C;                             //@synthesize traceResistance25C=_traceResistance25C - In the implementation block
@property (assign,nonatomic) BOOL hasTraceResistanceTemperatureCoeff; 
@property (assign,nonatomic) float traceResistanceTemperatureCoeff;                //@synthesize traceResistanceTemperatureCoeff=_traceResistanceTemperatureCoeff - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setTraceResistance25C:(float)arg1 ;
-(void)setHasTraceResistance25C:(BOOL)arg1 ;
-(BOOL)hasTraceResistance25C;
-(void)setTraceResistanceTemperatureCoeff:(float)arg1 ;
-(void)setHasTraceResistanceTemperatureCoeff:(BOOL)arg1 ;
-(BOOL)hasTraceResistanceTemperatureCoeff;
-(float)traceResistance25C;
-(float)traceResistanceTemperatureCoeff;
@end

