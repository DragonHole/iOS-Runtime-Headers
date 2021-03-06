/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying> {

	unsigned long long _storageAvailableBytes;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasStorageAvailableBytes; 
@property (assign,nonatomic) unsigned long long storageAvailableBytes;              //@synthesize storageAvailableBytes=_storageAvailableBytes - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStorageAvailableBytes:(unsigned long long)arg1 ;
-(void)setHasStorageAvailableBytes:(BOOL)arg1 ;
-(BOOL)hasStorageAvailableBytes;
-(unsigned long long)storageAvailableBytes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

