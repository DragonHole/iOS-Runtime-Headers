/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying> {

	NSMutableArray* _passRelevancyTuples;

}

@property (nonatomic,retain) NSMutableArray * passRelevancyTuples;              //@synthesize passRelevancyTuples=_passRelevancyTuples - In the implementation block
+(Class)passRelevancyTuplesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addPassRelevancyTuples:(id)arg1 ;
-(unsigned long long)passRelevancyTuplesCount;
-(void)clearPassRelevancyTuples;
-(id)passRelevancyTuplesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passRelevancyTuples;
-(void)setPassRelevancyTuples:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

