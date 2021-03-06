/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>
@optional
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;

@required
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;

@end

