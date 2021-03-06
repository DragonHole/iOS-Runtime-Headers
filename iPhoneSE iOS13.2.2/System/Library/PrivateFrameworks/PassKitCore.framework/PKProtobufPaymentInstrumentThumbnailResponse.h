/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying> {

	NSString* _manifestHash;
	int _status;
	NSData* _thumbnailImage;
	SCD_Struct_PK14 _has;

}

@property (nonatomic,readonly) BOOL hasThumbnailImage; 
@property (nonatomic,retain) NSData * thumbnailImage;               //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSString * manifestHash;               //@synthesize manifestHash=_manifestHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(NSData *)thumbnailImage;
-(void)setThumbnailImage:(NSData *)arg1 ;
-(NSString *)manifestHash;
-(void)setManifestHash:(NSString *)arg1 ;
-(BOOL)hasManifestHash;
-(BOOL)hasThumbnailImage;
@end

