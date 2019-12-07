/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalTimeIntervalLocalization : NSObject
+(id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(BOOL)arg2 ;
+(id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3 ;
+(id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(BOOL)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(BOOL)arg4 abbreviate:(BOOL)arg5 ;
+(id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(BOOL)arg4 dayDuration:(id*)arg5 hourDuration:(id*)arg6 minuteDuration:(id*)arg7 secondDuration:(id*)arg8 abbreviate:(BOOL)arg9 ;
+(id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2 ;
@end
