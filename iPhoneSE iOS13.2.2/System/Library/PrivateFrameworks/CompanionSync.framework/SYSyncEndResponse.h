/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYSyncEndResponse : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	int _errorResolution;
	SYMessageHeader* _header;
	NSString* _syncID;
	SCD_Struct_SY5 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                     //@synthesize syncID=_syncID - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasErrorResolution; 
@property (assign,nonatomic) int errorResolution;                   //@synthesize errorResolution=_errorResolution - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SYErrorInfo *)error;
-(void)setError:(SYErrorInfo *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)syncID;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setErrorResolution:(int)arg1 ;
-(int)errorResolution;
-(void)setHasErrorResolution:(BOOL)arg1 ;
-(BOOL)hasErrorResolution;
-(id)errorResolutionAsString:(int)arg1 ;
-(int)StringAsErrorResolution:(id)arg1 ;
@end

