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

@class NSMutableArray, SYMessageHeader, NSString;

@interface SYSyncAllObjects : PBCodable <NSCopying> {

	unsigned long long _version;
	NSMutableArray* _allObjects;
	SYMessageHeader* _header;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;                 //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                        //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned long long version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * allObjects;              //@synthesize allObjects=_allObjects - In the implementation block
+(Class)allObjectsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(unsigned long long)allObjectsCount;
-(void)setAllObjects:(NSMutableArray *)arg1 ;
-(void)addAllObjects:(id)arg1 ;
-(void)clearAllObjects;
-(id)allObjectsAtIndex:(unsigned long long)arg1 ;
-(NSString *)syncID;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)allObjects;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)copyTo:(id)arg1 ;
@end

