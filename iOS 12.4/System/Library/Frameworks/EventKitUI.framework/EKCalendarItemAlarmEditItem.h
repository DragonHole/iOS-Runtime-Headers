/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray, EKAlarmsViewModel;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {

	CalendarEventAlarmTable* _alarmTable;
	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	int _lastSeenAllDayState;
	BOOL _userChangedAlarm;
	BOOL _hasLeaveNowAlarm;
	BOOL _canHaveLeaveNowAlarm;
	EKAlarmsViewModel* _alarmsViewModel;

}

@property (nonatomic,retain) EKAlarmsViewModel * alarmsViewModel;              //@synthesize alarmsViewModel=_alarmsViewModel - In the implementation block
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(EKAlarmsViewModel *)alarmsViewModel;
-(void)setAlarmsViewModel:(EKAlarmsViewModel *)arg1 ;
-(void)_updateAlarms;
-(void)updateInternalTravelTimeStateForCalendarItem:(id)arg1 ;
-(void)_updateDefaultAlarm;
-(BOOL)_calendarItemHasLeaveNowAlarm;
-(BOOL)_alarmsMatchCalendarItem;
-(id)init;
@end

