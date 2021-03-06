/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying> {

	double _expirationDate;
	NSMutableArray* _searchAdsSettingsParams;
	SCD_Struct_AD3 _has;

}

@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchAdsSettingsParams;              //@synthesize searchAdsSettingsParams=_searchAdsSettingsParams - In the implementation block
+(Class)searchAdsSettingsParamsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(BOOL)hasExpirationDate;
-(void)addSearchAdsSettingsParams:(id)arg1 ;
-(unsigned long long)searchAdsSettingsParamsCount;
-(void)clearSearchAdsSettingsParams;
-(id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)searchAdsSettingsParams;
-(void)setSearchAdsSettingsParams:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(double)expirationDate;
-(void)setExpirationDate:(double)arg1 ;
@end

