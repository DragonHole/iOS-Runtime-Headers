/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UNNotificationExtensionHostInterface
@required
-(void)_extensionRequestsDismiss;
-(void)_extensionMediaPlayingStarted;
-(void)_extensionMediaPlayingPaused;
-(void)_extensionRequestsDefaultAction;
-(void)_extensionSetUserNotificationActions:(id)arg1;
-(void)_extensionWantsToReceiveActionResponses:(BOOL)arg1;
-(void)_extensionWantsToBecomeFirstResponder:(BOOL)arg1;
-(void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2;
-(void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
-(void)_extensionSetPlayPauseMediaButtonFrame:(CGRect)arg1;
-(void)_extensionSetPlayPauseMediaButtonColor:(id)arg1;
-(void)_extensionDidUpdateControls;
-(void)_extensionSetTitle:(id)arg1;

@end

