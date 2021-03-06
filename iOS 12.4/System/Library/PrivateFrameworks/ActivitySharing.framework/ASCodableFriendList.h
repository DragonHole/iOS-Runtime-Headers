/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASCodableFriendList : PBCodable <NSCopying> {

	NSMutableArray* _friends;

}

@property (nonatomic,retain) NSMutableArray * friends;              //@synthesize friends=_friends - In the implementation block
+(Class)friendType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFriends:(NSMutableArray *)arg1 ;
-(NSMutableArray *)friends;
-(void)addFriend:(id)arg1 ;
-(unsigned long long)friendsCount;
-(void)clearFriends;
-(id)friendAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

