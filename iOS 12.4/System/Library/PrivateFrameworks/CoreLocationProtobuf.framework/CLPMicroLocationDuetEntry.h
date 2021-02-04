/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface CLPMicroLocationDuetEntry : PBCodable <NSCopying> {

	double _endTimestamp;
	double _startTimestamp;
	NSMutableArray* _localizationResults;
	NSString* _uUID;
	NSString* _value;
	SCD_Struct_CL8 _has;

}

@property (nonatomic,readonly) BOOL hasUUID; 
@property (nonatomic,retain) NSString * uUID;                                   //@synthesize uUID=_uUID - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) double startTimestamp;                             //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndTimestamp; 
@property (assign,nonatomic) double endTimestamp;                               //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizationResults;              //@synthesize localizationResults=_localizationResults - In the implementation block
+(Class)localizationResultsType;
-(void)setEndTimestamp:(double)arg1 ;
-(void)setHasEndTimestamp:(BOOL)arg1 ;
-(BOOL)hasEndTimestamp;
-(double)endTimestamp;
-(BOOL)hasUUID;
-(NSString *)uUID;
-(void)addLocalizationResults:(id)arg1 ;
-(unsigned long long)localizationResultsCount;
-(void)clearLocalizationResults;
-(id)localizationResultsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizationResults;
-(void)setLocalizationResults:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(void)copyTo:(id)arg1 ;
@end
