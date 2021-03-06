/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDBatchCategoryLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _categoryLookupParameters;

}

@property (nonatomic,retain) NSMutableArray * categoryLookupParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)categoryLookupParameterType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addCategoryLookupParameter:(id)arg1 ;
-(unsigned long long)categoryLookupParametersCount;
-(void)clearCategoryLookupParameters;
-(id)categoryLookupParameterAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)categoryLookupParameters;
-(void)setCategoryLookupParameters:(NSMutableArray *)arg1 ;
@end

