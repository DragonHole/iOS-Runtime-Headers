/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSString;

@interface SYBatchSyncStart : PBCodable <NSCopying> {

	unsigned _estimatedChangeCount;
	SYMessageHeader* _header;
	NSString* _syncID;
	SCD_Struct_SY5 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;                   //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                          //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedChangeCount; 
@property (assign,nonatomic) unsigned estimatedChangeCount;              //@synthesize estimatedChangeCount=_estimatedChangeCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setEstimatedChangeCount:(unsigned)arg1 ;
-(void)setHasEstimatedChangeCount:(BOOL)arg1 ;
-(BOOL)hasEstimatedChangeCount;
-(unsigned)estimatedChangeCount;
-(NSString *)syncID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)copyTo:(id)arg1 ;
@end

