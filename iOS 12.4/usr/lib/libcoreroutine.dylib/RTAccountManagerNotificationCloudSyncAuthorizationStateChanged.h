/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTAccountManagerNotificationCloudSyncAuthorizationStateChanged : RTNotification {

	long long _cloudSyncAuthorizationState;

}

@property (nonatomic,readonly) long long cloudSyncAuthorizationState;              //@synthesize cloudSyncAuthorizationState=_cloudSyncAuthorizationState - In the implementation block
-(long long)cloudSyncAuthorizationState;
-(id)initWithCloudSyncAuthorizationState:(long long)arg1 ;
@end
