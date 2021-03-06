/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData : PBCodable <NSCopying> {

	BOOL _isBundleChannel;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasIsBundleChannel; 
@property (assign,nonatomic) BOOL isBundleChannel;                 //@synthesize isBundleChannel=_isBundleChannel - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsBundleChannel:(BOOL)arg1 ;
-(void)setHasIsBundleChannel:(BOOL)arg1 ;
-(BOOL)hasIsBundleChannel;
-(BOOL)isBundleChannel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

