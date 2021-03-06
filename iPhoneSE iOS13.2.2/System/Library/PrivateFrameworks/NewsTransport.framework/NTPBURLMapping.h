/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying> {

	NSMutableArray* _domains;

}

@property (nonatomic,retain) NSMutableArray * domains;              //@synthesize domains=_domains - In the implementation block
+(Class)domainsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)domains;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(void)addDomains:(id)arg1 ;
-(void)clearDomains;
-(unsigned long long)domainsCount;
-(id)domainsAtIndex:(unsigned long long)arg1 ;
@end

