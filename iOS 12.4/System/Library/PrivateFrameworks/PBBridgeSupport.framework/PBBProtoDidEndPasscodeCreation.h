/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying> {

	BOOL _isLong;
	BOOL _success;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL success;                //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasIsLong; 
@property (assign,nonatomic) BOOL isLong;                 //@synthesize isLong=_isLong - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)success;
-(void)setIsLong:(BOOL)arg1 ;
-(void)setHasIsLong:(BOOL)arg1 ;
-(BOOL)hasIsLong;
-(BOOL)isLong;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
