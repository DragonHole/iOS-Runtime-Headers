/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SYMessageHeader;

@interface SYResetRequest : PBRequest <NSCopying> {

	NSString* _cancelSessionID;
	SYMessageHeader* _header;

}

@property (nonatomic,retain) SYMessageHeader * header;                //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasCancelSessionID; 
@property (nonatomic,retain) NSString * cancelSessionID;              //@synthesize cancelSessionID=_cancelSessionID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)cancelSessionID;
-(void)setCancelSessionID:(NSString *)arg1 ;
-(BOOL)hasCancelSessionID;
@end
