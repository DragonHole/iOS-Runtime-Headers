/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKitUI/EventKitUI-Structs.h>
@class NSMutableDictionary;

@interface EKStringFactory : NSObject {

	CFDateFormatterRef _dayFormatter;
	CFDateFormatterRef _abbrevDayFormatter;
	CFDateFormatterRef _timeFormatter;
	CFDateFormatterRef _standardTimeFormatter;
	CFDateFormatterRef _customFormatter;
	CFDateFormatterRef _fullStyleDateFormatter;
	CFDateFormatterRef _dayOfWeekFormatter;
	NSMutableDictionary* _longFormatters;

}
+(id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)sharedInstance;
-(void)_localeChanged:(id)arg1 ;
-(id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 ;
-(id)dateStringForSuggestedEventWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 showTimeZone:(BOOL)arg5 ;
-(id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4 ;
-(void)_invalidateFormatters;
-(CFDateFormatterRef)abbreviatedDayFormatter;
-(CFDateFormatterRef)formatterForLongFormat:(id)arg1 ;
-(CFDateFormatterRef)fullStyleDateFormatter;
-(id)_stringForDay:(SCD_Struct_EK6)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(BOOL)arg3 lowerCase:(BOOL)arg4 ;
-(id)_dayStringForDate:(double)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 lowercase:(BOOL)arg4 ;
-(id)_timeStringForDate:(double)arg1 ;
-(CFDateFormatterRef)_customFormatter;
-(CFDateFormatterRef)standardTimeFormatter;
-(id)_dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 withFormat:(unsigned long long)arg5 showTimeZone:(BOOL)arg6 ;
-(id)_stringForTime:(SCD_Struct_EK6)arg1 ;
-(id)_stringForDateTime:(SCD_Struct_EK6)arg1 timeZone:(CFTimeZoneRef)arg2 ;
-(CFDateFormatterRef)dayOfWeekFormatter;
-(id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2 ;
-(id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2 ;
-(CFDateFormatterRef)dayFormatter;
-(CFDateFormatterRef)timeFormatter;
-(id)init;
-(void)dealloc;
@end

