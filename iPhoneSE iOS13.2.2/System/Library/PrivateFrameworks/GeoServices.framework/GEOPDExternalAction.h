/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDExternalAction : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _externalActionDetails;
	int _componentType;
	struct {
		unsigned has_componentType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasComponentType; 
@property (assign,nonatomic) int componentType; 
@property (nonatomic,retain) NSMutableArray * externalActionDetails; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)externalActionDetailType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)componentType;
-(void)setComponentType:(int)arg1 ;
-(BOOL)hasComponentType;
-(void)addExternalActionDetail:(id)arg1 ;
-(unsigned long long)externalActionDetailsCount;
-(void)clearExternalActionDetails;
-(id)externalActionDetailAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)externalActionDetails;
-(void)setHasComponentType:(BOOL)arg1 ;
-(id)componentTypeAsString:(int)arg1 ;
-(int)StringAsComponentType:(id)arg1 ;
-(void)setExternalActionDetails:(NSMutableArray *)arg1 ;
@end
