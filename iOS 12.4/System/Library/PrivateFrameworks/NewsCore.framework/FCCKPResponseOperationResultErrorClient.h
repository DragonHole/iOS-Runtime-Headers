/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPOplockFailure, FCCKPUniqueFieldFailure;

@interface FCCKPResponseOperationResultErrorClient : PBCodable <NSCopying> {

	FCCKPOplockFailure* _oplockFailure;
	int _type;
	FCCKPUniqueFieldFailure* _uniqueFieldFailure;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasOplockFailure; 
@property (nonatomic,retain) FCCKPOplockFailure * oplockFailure; 
@property (nonatomic,readonly) BOOL hasUniqueFieldFailure; 
@property (nonatomic,retain) FCCKPUniqueFieldFailure * uniqueFieldFailure; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setOplockFailure:(FCCKPOplockFailure *)arg1 ;
-(void)setUniqueFieldFailure:(FCCKPUniqueFieldFailure *)arg1 ;
-(BOOL)hasOplockFailure;
-(FCCKPOplockFailure *)oplockFailure;
-(BOOL)hasUniqueFieldFailure;
-(FCCKPUniqueFieldFailure *)uniqueFieldFailure;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

