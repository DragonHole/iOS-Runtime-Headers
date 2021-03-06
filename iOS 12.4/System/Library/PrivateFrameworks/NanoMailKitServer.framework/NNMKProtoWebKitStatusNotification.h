/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NNMKProtoWebKitStatusNotification : PBCodable <NSCopying> {

	BOOL _supportsWebKit;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasSupportsWebKit; 
@property (assign,nonatomic) BOOL supportsWebKit;                 //@synthesize supportsWebKit=_supportsWebKit - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSupportsWebKit:(BOOL)arg1 ;
-(BOOL)supportsWebKit;
-(void)setHasSupportsWebKit:(BOOL)arg1 ;
-(BOOL)hasSupportsWebKit;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

