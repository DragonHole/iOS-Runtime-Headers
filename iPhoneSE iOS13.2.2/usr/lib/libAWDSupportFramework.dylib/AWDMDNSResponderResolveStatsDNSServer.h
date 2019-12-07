/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDMDNSResponderResolveStatsDNSServer : PBCodable <NSCopying> {

	NSData* _address;
	int _networkType;
	unsigned _serverID;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NSData * address;                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                  //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasServerID; 
@property (assign,nonatomic) unsigned serverID;                //@synthesize serverID=_serverID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setAddress:(NSData *)arg1 ;
-(BOOL)hasAddress;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(unsigned)serverID;
-(void)setServerID:(unsigned)arg1 ;
-(void)setHasServerID:(BOOL)arg1 ;
-(BOOL)hasServerID;
@end
