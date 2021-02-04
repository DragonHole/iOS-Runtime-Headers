/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying> {

	NSData* _wrappingKey;
	NSData* _wrappingKeyId;

}

@property (nonatomic,readonly) BOOL hasWrappingKeyId; 
@property (nonatomic,retain) NSData * wrappingKeyId;               //@synthesize wrappingKeyId=_wrappingKeyId - In the implementation block
@property (nonatomic,readonly) BOOL hasWrappingKey; 
@property (nonatomic,retain) NSData * wrappingKey;                 //@synthesize wrappingKey=_wrappingKey - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setWrappingKeyId:(NSData *)arg1 ;
-(void)setWrappingKey:(NSData *)arg1 ;
-(BOOL)hasWrappingKeyId;
-(BOOL)hasWrappingKey;
-(NSData *)wrappingKey;
-(NSData *)wrappingKeyId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
