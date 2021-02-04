/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying> {

	int _duration;
	int _interactedItemIndex;
	int _listType;
	NSMutableArray* _proactiveItems;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType;                                 //@synthesize listType=_listType - In the implementation block
@property (nonatomic,retain) NSMutableArray * proactiveItems;              //@synthesize proactiveItems=_proactiveItems - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasInteractedItemIndex; 
@property (assign,nonatomic) int interactedItemIndex;                      //@synthesize interactedItemIndex=_interactedItemIndex - In the implementation block
+(Class)proactiveItemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setListType:(int)arg1 ;
-(void)addProactiveItem:(id)arg1 ;
-(void)setInteractedItemIndex:(int)arg1 ;
-(BOOL)hasDuration;
-(int)listType;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(unsigned long long)proactiveItemsCount;
-(void)clearProactiveItems;
-(id)proactiveItemAtIndex:(unsigned long long)arg1 ;
-(int)interactedItemIndex;
-(void)setHasInteractedItemIndex:(BOOL)arg1 ;
-(BOOL)hasInteractedItemIndex;
-(NSMutableArray *)proactiveItems;
-(void)setProactiveItems:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(int)arg1 ;
-(int)duration;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
