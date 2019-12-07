/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBItemsTodaySectionSpecificConfig : PBCodable <NSCopying> {

	unsigned long long _maxArticlesShown;
	NSMutableArray* _items;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,retain) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL hasMaxArticlesShown; 
@property (assign,nonatomic) unsigned long long maxArticlesShown;              //@synthesize maxArticlesShown=_maxArticlesShown - In the implementation block
+(Class)itemsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(unsigned long long)itemsCount;
-(void)addItems:(id)arg1 ;
-(void)clearItems;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(void)setMaxArticlesShown:(unsigned long long)arg1 ;
-(void)setHasMaxArticlesShown:(BOOL)arg1 ;
-(BOOL)hasMaxArticlesShown;
-(unsigned long long)maxArticlesShown;
@end
