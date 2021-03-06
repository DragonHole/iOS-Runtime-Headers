/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, EKEvent;

@interface PPQuickTypeEvent : NSObject {

	BOOL _isUnscheduledFreeTime;
	NSString* _identifier;
	NSString* _title;
	NSString* _calendarTitle;
	NSDate* _start;
	NSDate* _end;
	EKEvent* _event;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * calendarTitle;                  //@synthesize calendarTitle=_calendarTitle - In the implementation block
@property (nonatomic,copy) NSDate * start;                            //@synthesize start=_start - In the implementation block
@property (nonatomic,copy) NSDate * end;                              //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) BOOL isUnscheduledFreeTime;              //@synthesize isUnscheduledFreeTime=_isUnscheduledFreeTime - In the implementation block
@property (nonatomic,retain) EKEvent * event;                         //@synthesize event=_event - In the implementation block
+(id)eventFromEKEvent:(id)arg1 ;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(NSString *)calendarTitle;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 calendarTitle:(id)arg3 start:(id)arg4 end:(id)arg5 isUnscheduledFreeTime:(BOOL)arg6 ;
-(void)setCalendarTitle:(NSString *)arg1 ;
-(BOOL)isUnscheduledFreeTime;
-(void)setIsUnscheduledFreeTime:(BOOL)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)start;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
@end

