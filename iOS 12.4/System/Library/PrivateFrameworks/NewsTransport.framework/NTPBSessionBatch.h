/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NTPBSession;

@interface NTPBSessionBatch : PBCodable <NSCopying> {

	NSMutableArray* _events;
	NSData* _identifier;
	NTPBSession* _session;

}

@property (nonatomic,readonly) BOOL hasSession; 
@property (nonatomic,retain) NTPBSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(id)nss_sessionBatchWithIdentifier;
+(Class)eventsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)events;
-(BOOL)hasSession;
-(void)addEvents:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(NSData *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NTPBSession *)session;
-(id)dictionaryRepresentation;
-(void)setSession:(NTPBSession *)arg1 ;
@end
