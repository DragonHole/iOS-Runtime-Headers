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

@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying> {

	double _averageSafariVisitsPerDay;
	NSString* _domain;
	NSMutableArray* _paths;

}

@property (nonatomic,retain) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                        //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) double averageSafariVisitsPerDay;              //@synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay - In the implementation block
+(Class)pathsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(void)addPaths:(id)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
-(double)averageSafariVisitsPerDay;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(id)dictionaryRepresentation;
@end

