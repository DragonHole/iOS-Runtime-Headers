/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NCNotificationSection : NSObject {

	NSMutableDictionary* _requests;

}

@property (nonatomic,retain) NSMutableDictionary * requests;                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationRequestsCount; 
-(id)init;
-(NSMutableDictionary *)requests;
-(void)setRequests:(NSMutableDictionary *)arg1 ;
-(BOOL)addNotificationRequest:(id)arg1 ;
-(BOOL)removeNotificationRequest:(id)arg1 ;
-(BOOL)replaceNotificationRequest:(id)arg1 ;
-(unsigned long long)notificationRequestsCount;
-(id)notificationRequestMatchingNotificationIdentifier:(id)arg1 ;
@end

