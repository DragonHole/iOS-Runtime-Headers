/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {

	NSMutableArray* _telemetricEntitys;

}

@property (nonatomic,retain) NSMutableArray * telemetricEntitys;              //@synthesize telemetricEntitys=_telemetricEntitys - In the implementation block
+(Class)telemetricEntityType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addTelemetricEntity:(id)arg1 ;
-(unsigned long long)telemetricEntitysCount;
-(void)clearTelemetricEntitys;
-(id)telemetricEntityAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)telemetricEntitys;
-(void)setTelemetricEntitys:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
