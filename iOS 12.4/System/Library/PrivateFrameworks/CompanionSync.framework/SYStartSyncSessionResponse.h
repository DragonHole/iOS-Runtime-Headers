/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSData, NSString;

@interface SYStartSyncSessionResponse : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	SYMessageHeader* _header;
	NSData* _metadata;
	NSString* _sessionID;
	BOOL _accepted;
	BOOL _supportsRestart;
	BOOL _supportsRollback;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL accepted;                         //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL supportsRollback;                 //@synthesize supportsRollback=_supportsRollback - In the implementation block
@property (assign,nonatomic) BOOL supportsRestart;                  //@synthesize supportsRestart=_supportsRestart - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSData * metadata;                     //@synthesize metadata=_metadata - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasError;
-(void)setMetadata:(NSData *)arg1 ;
-(BOOL)accepted;
-(BOOL)supportsRestart;
-(BOOL)supportsRollback;
-(void)setSupportsRollback:(BOOL)arg1 ;
-(void)setSupportsRestart:(BOOL)arg1 ;
-(void)setAccepted:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)metadata;
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(BOOL)hasMetadata;
-(void)copyTo:(id)arg1 ;
-(SYErrorInfo *)error;
-(void)setError:(SYErrorInfo *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
@end

