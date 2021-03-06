/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBActionInformation : PBCodable <NSCopying> {

	NSData* _context;
	NSData* _contextNulls;

}

@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) NSData * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasContextNulls; 
@property (nonatomic,retain) NSData * contextNulls;               //@synthesize contextNulls=_contextNulls - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasContext;
-(void)setContextNulls:(NSData *)arg1 ;
-(BOOL)hasContextNulls;
-(NSData *)contextNulls;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(NSData *)arg1 ;
-(NSData *)context;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

