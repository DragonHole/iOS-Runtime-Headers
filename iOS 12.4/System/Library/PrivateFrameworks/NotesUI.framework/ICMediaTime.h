/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICMediaTime : NSObject <NSCopying> {

	unsigned char _days;
	unsigned char _hours;
	unsigned char _minutes;
	unsigned char _seconds;
	BOOL _negative;

}

@property (assign,nonatomic) unsigned char days;                            //@synthesize days=_days - In the implementation block
@property (assign,nonatomic) unsigned char hours;                           //@synthesize hours=_hours - In the implementation block
@property (assign,nonatomic) unsigned char minutes;                         //@synthesize minutes=_minutes - In the implementation block
@property (assign,nonatomic) unsigned char seconds;                         //@synthesize seconds=_seconds - In the implementation block
@property (assign,getter=isNegative,nonatomic) BOOL negative;               //@synthesize negative=_negative - In the implementation block
@property (nonatomic,readonly) BOOL isZero; 
@property (nonatomic,readonly) NSString * durationDescription; 
-(unsigned char)minutes;
-(unsigned char)hours;
-(unsigned char)seconds;
-(unsigned char)days;
-(void)setHours:(unsigned char)arg1 ;
-(void)setSeconds:(unsigned char)arg1 ;
-(void)setDays:(unsigned char)arg1 ;
-(BOOL)isNegative;
-(BOOL)isEqualToMediaTime:(id)arg1 ;
-(id)initWithCMTime:(SCD_Struct_IC6)arg1 ;
-(id)initWithSeconds:(double)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(void)setMinutes:(unsigned char)arg1 ;
-(BOOL)isZero;
-(NSString *)durationDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

