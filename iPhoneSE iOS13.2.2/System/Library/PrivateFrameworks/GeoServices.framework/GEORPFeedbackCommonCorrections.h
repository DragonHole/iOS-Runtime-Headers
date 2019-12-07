/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEORPFeedbackCommonCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _comments;
	NSMutableArray* _imageIds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_comments : 1;
		unsigned read_imageIds : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_comments : 1;
		unsigned wrote_imageIds : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments; 
@property (nonatomic,retain) NSMutableArray * imageIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageIdType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)imageIds;
-(void)addImageId:(id)arg1 ;
-(unsigned long long)imageIdsCount;
-(void)clearImageIds;
-(id)imageIdAtIndex:(unsigned long long)arg1 ;
-(void)setImageIds:(NSMutableArray *)arg1 ;
-(void)_readComments;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(BOOL)hasComments;
-(void)_readImageIds;
-(void)_addNoFlagsImageId:(id)arg1 ;
@end
