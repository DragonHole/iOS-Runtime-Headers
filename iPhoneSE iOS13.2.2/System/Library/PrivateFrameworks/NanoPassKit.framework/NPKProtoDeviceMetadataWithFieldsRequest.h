/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoDeviceMetadataWithFieldsRequest : PBRequest <NSCopying> {

	unsigned _metadataFields;

}

@property (assign,nonatomic) unsigned metadataFields;              //@synthesize metadataFields=_metadataFields - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMetadataFields:(unsigned)arg1 ;
-(unsigned)metadataFields;
@end

