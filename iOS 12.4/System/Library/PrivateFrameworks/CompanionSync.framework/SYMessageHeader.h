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

@class SYPeer, SYVectorClock;

@interface SYMessageHeader : PBCodable <NSCopying> {

	unsigned long long _sequenceNumber;
	double _timeout;
	double _timestamp;
	SYPeer* _sender;
	SYVectorClock* _state;
	unsigned _version;
	SCD_Struct_SY5 _has;

}

@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) SYPeer * sender;                                //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) SYVectorClock * state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTimeout; 
@property (assign,nonatomic) double timeout;                                 //@synthesize timeout=_timeout - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setHasTimeout:(BOOL)arg1 ;
-(BOOL)hasTimeout;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SYVectorClock *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(SYVectorClock *)arg1 ;
-(double)timestamp;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(SYPeer *)sender;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSender:(SYPeer *)arg1 ;
@end
