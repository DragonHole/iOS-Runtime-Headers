/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKREMReminderPredicate.h>

@class NSDate;

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {

	NSDate* _start;
	NSDate* _end;
	BOOL _completed;

}
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)initForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id*)arg3 ;
@end
