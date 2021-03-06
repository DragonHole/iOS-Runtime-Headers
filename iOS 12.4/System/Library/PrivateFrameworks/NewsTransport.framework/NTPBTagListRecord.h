/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSMutableArray;

@interface NTPBTagListRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSMutableArray* _tagIDs;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableArray * tagIDs;              //@synthesize tagIDs=_tagIDs - In the implementation block
+(Class)tagIDsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBase;
-(void)addTagIDs:(id)arg1 ;
-(void)clearTagIDs;
-(unsigned long long)tagIDsCount;
-(id)tagIDsAtIndex:(unsigned long long)arg1 ;
-(void)setTagIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tagIDs;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
@end

