/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKObjectID, NSDate, EKEventStore, EKCalendarNotification;

@interface EKCalendarNotificationReference : NSObject {

	EKObjectID* _objectID;
	NSDate* _date;
	EKEventStore* _eventStore;
	EKCalendarNotification* _notification;
	int _type;

}

@property (nonatomic,readonly) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) EKCalendarNotification * notification; 
-(id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4 ;
-(long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2 ;
-(id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3 ;
-(id)description;
-(int)type;
-(EKCalendarNotification *)notification;
@end

