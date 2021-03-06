/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarInterface.h>

@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADCalendar:(id)arg1 hasEvents:(/*^block*/id)arg2 ;
-(void)CADCalendar:(id)arg1 hasReminders:(/*^block*/id)arg2 ;
@end

