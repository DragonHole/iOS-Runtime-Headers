/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPShareIdentifier;

@interface CKDPCommentedOnId : PBCodable <NSCopying> {

	NSData* _itemId;
	CKDPShareIdentifier* _shareIdentifier;

}

@property (nonatomic,readonly) BOOL hasShareIdentifier; 
@property (nonatomic,retain) CKDPShareIdentifier * shareIdentifier;              //@synthesize shareIdentifier=_shareIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasItemId; 
@property (nonatomic,retain) NSData * itemId;                                    //@synthesize itemId=_itemId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setShareIdentifier:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareIdentifier;
-(CKDPShareIdentifier *)shareIdentifier;
-(void)setItemId:(NSData *)arg1 ;
-(BOOL)hasItemId;
-(NSData *)itemId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
