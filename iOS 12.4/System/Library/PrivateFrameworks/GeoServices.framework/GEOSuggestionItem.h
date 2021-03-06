/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying> {

	NSString* _suggestionString;
	int _tappingCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	SCD_Struct_GE23 _has;

}

@property (nonatomic,readonly) BOOL hasSuggestionString; 
@property (nonatomic,retain) NSString * suggestionString;              //@synthesize suggestionString=_suggestionString - In the implementation block
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible;                    //@synthesize initiallyVisible=_initiallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible;                   //@synthesize eventuallyVisible=_eventuallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasTappingCount; 
@property (assign,nonatomic) int tappingCount;                         //@synthesize tappingCount=_tappingCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(BOOL)hasInitiallyVisible;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(BOOL)hasEventuallyVisible;
-(BOOL)initiallyVisible;
-(BOOL)eventuallyVisible;
-(void)setSuggestionString:(NSString *)arg1 ;
-(BOOL)hasSuggestionString;
-(int)tappingCount;
-(void)setTappingCount:(int)arg1 ;
-(void)setHasTappingCount:(BOOL)arg1 ;
-(BOOL)hasTappingCount;
-(NSString *)suggestionString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

