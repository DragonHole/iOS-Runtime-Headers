/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@interface AAUserNotification : NSObject
+(id)_defaultParameters;
+(void)_waitForResponseAndReleaseNotification:(CFUserNotificationRef)arg1 completion:(/*^block*/id)arg2 ;
+(void)waitForResponseToNotification:(CFUserNotificationRef)arg1 completion:(/*^block*/id)arg2 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 textFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 secureTextFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

