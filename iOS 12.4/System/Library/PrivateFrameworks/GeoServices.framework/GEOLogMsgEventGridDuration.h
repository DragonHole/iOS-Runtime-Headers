/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying> {

	int _displayType;
	unsigned _durationMs;
	int _endState;
	NSMutableArray* _endStateErrorReasons;
	int _previousState;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned durationMs;                                //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState;                                       //@synthesize endState=_endState - In the implementation block
@property (nonatomic,retain) NSMutableArray * endStateErrorReasons;              //@synthesize endStateErrorReasons=_endStateErrorReasons - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousState; 
@property (assign,nonatomic) int previousState;                                  //@synthesize previousState=_previousState - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayType; 
@property (assign,nonatomic) int displayType;                                    //@synthesize displayType=_displayType - In the implementation block
+(Class)endStateErrorReasonType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDurationMs:(unsigned)arg1 ;
-(void)setEndState:(int)arg1 ;
-(void)addEndStateErrorReason:(id)arg1 ;
-(void)setPreviousState:(int)arg1 ;
-(void)setHasEndState:(BOOL)arg1 ;
-(BOOL)hasEndState;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(unsigned long long)endStateErrorReasonsCount;
-(void)clearEndStateErrorReasons;
-(id)endStateErrorReasonAtIndex:(unsigned long long)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(int)previousState;
-(void)setHasPreviousState:(BOOL)arg1 ;
-(BOOL)hasPreviousState;
-(id)previousStateAsString:(int)arg1 ;
-(int)StringAsPreviousState:(id)arg1 ;
-(void)setHasDisplayType:(BOOL)arg1 ;
-(BOOL)hasDisplayType;
-(id)displayTypeAsString:(int)arg1 ;
-(int)StringAsDisplayType:(id)arg1 ;
-(unsigned)durationMs;
-(NSMutableArray *)endStateErrorReasons;
-(void)setEndStateErrorReasons:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(int)displayType;
-(int)endState;
@end
