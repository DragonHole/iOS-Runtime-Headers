/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoPassSyncState : PBCodable <NSCopying> {

	NSMutableArray* _passSyncStateItems;

}

@property (nonatomic,retain) NSMutableArray * passSyncStateItems;              //@synthesize passSyncStateItems=_passSyncStateItems - In the implementation block
+(Class)passSyncStateItemsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addPassSyncStateItems:(id)arg1 ;
-(unsigned long long)passSyncStateItemsCount;
-(void)clearPassSyncStateItems;
-(id)passSyncStateItemsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passSyncStateItems;
-(void)setPassSyncStateItems:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

