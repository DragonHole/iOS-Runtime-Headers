/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {

	long long _objectType;
	NSData* _sourceUUIDs;
	BOOL _userOrdered;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) long long objectType;               //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasUserOrdered; 
@property (assign,nonatomic) BOOL userOrdered;                   //@synthesize userOrdered=_userOrdered - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceUUIDs; 
@property (nonatomic,retain) NSData * sourceUUIDs;               //@synthesize sourceUUIDs=_sourceUUIDs - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)objectType;
-(void)setObjectType:(long long)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(long long)decodedDataTypeCode;
-(BOOL)userOrdered;
-(NSData *)sourceUUIDs;
-(BOOL)hasUserOrdered;
-(BOOL)hasSourceUUIDs;
-(void)setUserOrdered:(BOOL)arg1 ;
-(void)setSourceUUIDs:(NSData *)arg1 ;
-(void)setHasUserOrdered:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
