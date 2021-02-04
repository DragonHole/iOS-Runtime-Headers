/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPAlert : NSObject {

	/*^block*/id _completion;
	CFUserNotificationRef _userNotification;

}

@property (assign,nonatomic) CFUserNotificationRef userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
-(void)defaultResponse;
-(void)otherResponse;
-(void)alternateResponse;
-(void)showOnViewController:(id)arg1 ;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(CFUserNotificationRef)userNotification;
-(id)defaultButtonTitle;
-(id)alternateButtonTitle;
-(id)otherButtonTitle;
-(void)dealloc;
-(id)title;
-(id)message;
-(void)show;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end
