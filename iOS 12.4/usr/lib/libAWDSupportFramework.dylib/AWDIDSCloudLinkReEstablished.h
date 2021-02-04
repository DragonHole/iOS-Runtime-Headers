/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSCloudLinkReEstablished : PBCodable <NSCopying> {

	unsigned long long _linkTimeDelta;
	unsigned long long _timestamp;
	unsigned _linkType;
	unsigned _priorLinkType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                             //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasPriorLinkType; 
@property (assign,nonatomic) unsigned priorLinkType;                        //@synthesize priorLinkType=_priorLinkType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkTimeDelta; 
@property (assign,nonatomic) unsigned long long linkTimeDelta;              //@synthesize linkTimeDelta=_linkTimeDelta - In the implementation block
-(void)setPriorLinkType:(unsigned)arg1 ;
-(void)setHasPriorLinkType:(BOOL)arg1 ;
-(BOOL)hasPriorLinkType;
-(void)setLinkTimeDelta:(unsigned long long)arg1 ;
-(void)setHasLinkTimeDelta:(BOOL)arg1 ;
-(BOOL)hasLinkTimeDelta;
-(unsigned)priorLinkType;
-(unsigned long long)linkTimeDelta;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setLinkType:(unsigned)arg1 ;
-(unsigned)linkType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
