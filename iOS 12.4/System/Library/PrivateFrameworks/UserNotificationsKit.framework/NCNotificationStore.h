/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NCNotificationStore : NSObject {

	NSMutableDictionary* _notificationSections;

}

@property (nonatomic,retain) NSMutableDictionary * notificationSections;              //@synthesize notificationSections=_notificationSections - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionsCount; 
@property (nonatomic,readonly) unsigned long long notificationsCount; 
-(unsigned long long)sectionsCount;
-(id)addNotificationRequest:(id)arg1 ;
-(unsigned long long)notificationsCount;
-(id)replaceNotificationRequest:(id)arg1 ;
-(id)coalescedNotificationForRequest:(id)arg1 ;
-(NSMutableDictionary *)notificationSections;
-(void)setNotificationSections:(NSMutableDictionary *)arg1 ;
-(id)removeNotificationRequest:(id)arg1 ;
-(id)init;
@end

