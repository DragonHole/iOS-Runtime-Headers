/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UNNotificationExtensionHostDelegate <NSObject>
@required
-(void)notificationHostExtensionDidUpdateControls:(id)arg1;
-(void)notificationHost:(id)arg1 extensionDidCompleteResponse:(id)arg2 withOption:(unsigned long long)arg3;
-(void)notificationHostExtension:(id)arg1 setTitle:(id)arg2;
-(void)notificationHostExtensionMediaPlayingDidStart:(id)arg1;
-(void)notificationHostExtensionMediaPlayingDidPause:(id)arg1;
-(void)notificationHostExtension:(id)arg1 setDismissEnabled:(BOOL)arg2;
-(void)notificationHostExtensionRequestsDefaultAction:(id)arg1;
-(void)notificationHostExtensionRequestsDismiss:(id)arg1;
-(void)notificationHostExtension:(id)arg1 audioAccessoryViewLayerContextId:(unsigned)arg2;
-(void)notificationHostExtension:(id)arg1 setUserNotificationActions:(id)arg2;

@end

