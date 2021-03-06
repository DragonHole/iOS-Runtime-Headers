/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying> {

	CKDPIdentifier* _ownerIdentifier;
	CKDPIdentifier* _value;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPIdentifier * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * ownerIdentifier;              //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setOwnerIdentifier:(CKDPIdentifier *)arg1 ;
-(BOOL)hasOwnerIdentifier;
-(CKDPIdentifier *)ownerIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPIdentifier *)value;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

