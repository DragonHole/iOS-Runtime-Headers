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

@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying> {

	NSMutableArray* _wrappingKeyMapEntries;

}

@property (nonatomic,retain) NSMutableArray * wrappingKeyMapEntries;              //@synthesize wrappingKeyMapEntries=_wrappingKeyMapEntries - In the implementation block
+(Class)wrappingKeyMapEntriesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addWrappingKeyMapEntries:(id)arg1 ;
-(void)clearWrappingKeyMapEntries;
-(unsigned long long)wrappingKeyMapEntriesCount;
-(id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1 ;
-(void)setWrappingKeyMapEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)wrappingKeyMapEntries;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
