/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOWiFiAP : PBCodable <NSCopying> {

	unsigned _channel;
	int _rssi;
	NSString* _uniqueID;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                         //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                 //@synthesize channel=_channel - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)hasUniqueID;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(NSString *)uniqueID;
-(int)rssi;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setChannel:(unsigned)arg1 ;
-(unsigned)channel;
-(void)copyTo:(id)arg1 ;
@end

