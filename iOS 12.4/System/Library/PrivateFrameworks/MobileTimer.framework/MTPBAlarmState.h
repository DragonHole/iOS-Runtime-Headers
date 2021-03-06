/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, MTPBAlarm;

@interface MTPBAlarmState : PBCodable <NSCopying> {

	double _lastModified;
	NSMutableArray* _alarms;
	MTPBAlarm* _sleepAlarm;

}

@property (nonatomic,retain) NSMutableArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,readonly) BOOL hasSleepAlarm; 
@property (nonatomic,retain) MTPBAlarm * sleepAlarm;               //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (assign,nonatomic) double lastModified;                  //@synthesize lastModified=_lastModified - In the implementation block
+(Class)alarmsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLastModified:(double)arg1 ;
-(void)addAlarms:(id)arg1 ;
-(NSMutableArray *)alarms;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(double)lastModified;
-(MTPBAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTPBAlarm *)arg1 ;
-(unsigned long long)alarmsCount;
-(void)clearAlarms;
-(id)alarmsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSleepAlarm;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

