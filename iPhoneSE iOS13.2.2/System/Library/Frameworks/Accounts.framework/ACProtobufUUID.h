/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface ACProtobufUUID : PBCodable <NSCopying> {

	NSString* _value;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

