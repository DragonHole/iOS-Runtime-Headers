/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _addressComponentMatches;
	double _distanceFromTruth;
	double _uncertainty;
	unsigned _efficacy;
	unsigned _previousType;
	unsigned _source;
	unsigned _truthSource;
	unsigned _truthType;
	unsigned _type;
	BOOL _isRotted;
	SCD_Struct_AW14 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasEfficacy; 
@property (assign,nonatomic) unsigned efficacy;                                       //@synthesize efficacy=_efficacy - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) unsigned source;                                         //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) double uncertainty;                                      //@synthesize uncertainty=_uncertainty - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromTruth; 
@property (assign,nonatomic) double distanceFromTruth;                                //@synthesize distanceFromTruth=_distanceFromTruth - In the implementation block
@property (assign,nonatomic) BOOL hasAddressComponentMatches; 
@property (assign,nonatomic) unsigned long long addressComponentMatches;              //@synthesize addressComponentMatches=_addressComponentMatches - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousType; 
@property (assign,nonatomic) unsigned previousType;                                   //@synthesize previousType=_previousType - In the implementation block
@property (assign,nonatomic) BOOL hasTruthType; 
@property (assign,nonatomic) unsigned truthType;                                      //@synthesize truthType=_truthType - In the implementation block
@property (assign,nonatomic) BOOL hasTruthSource; 
@property (assign,nonatomic) unsigned truthSource;                                    //@synthesize truthSource=_truthSource - In the implementation block
@property (assign,nonatomic) BOOL hasIsRotted; 
@property (assign,nonatomic) BOOL isRotted;                                           //@synthesize isRotted=_isRotted - In the implementation block
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(void)setSource:(unsigned)arg1 ;
-(unsigned)source;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(double)uncertainty;
-(unsigned)previousType;
-(void)setPreviousType:(unsigned)arg1 ;
-(unsigned)efficacy;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setUncertainty:(double)arg1 ;
-(BOOL)isRotted;
-(void)setIsRotted:(BOOL)arg1 ;
-(void)setTruthType:(unsigned)arg1 ;
-(void)setTruthSource:(unsigned)arg1 ;
-(unsigned)truthType;
-(unsigned)truthSource;
-(double)distanceFromTruth;
-(void)setDistanceFromTruth:(double)arg1 ;
-(void)setAddressComponentMatches:(unsigned long long)arg1 ;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(BOOL)hasUncertainty;
-(void)setEfficacy:(unsigned)arg1 ;
-(void)setHasEfficacy:(BOOL)arg1 ;
-(BOOL)hasEfficacy;
-(void)setHasDistanceFromTruth:(BOOL)arg1 ;
-(BOOL)hasDistanceFromTruth;
-(void)setHasAddressComponentMatches:(BOOL)arg1 ;
-(BOOL)hasAddressComponentMatches;
-(void)setHasPreviousType:(BOOL)arg1 ;
-(BOOL)hasPreviousType;
-(void)setHasTruthType:(BOOL)arg1 ;
-(BOOL)hasTruthType;
-(void)setHasTruthSource:(BOOL)arg1 ;
-(BOOL)hasTruthSource;
-(void)setHasIsRotted:(BOOL)arg1 ;
-(BOOL)hasIsRotted;
-(unsigned long long)addressComponentMatches;
@end
