/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter, NSString;

@interface SBExampleUserNotificationCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}

@property (nonatomic,readonly) NSString * latestNotificationRequestIdentifier; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
+(id)sharedInstance;
-(void)publish;
-(void)update;
-(NSString *)sectionIdentifier;
-(void)removeAllNotifications;
-(id)_userNotificationCenter;
-(void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1 ;
-(void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2 ;
-(void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_existingNotificationRequestForIdentifier:(id)arg1 ;
-(id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2 ;
-(NSString *)latestNotificationRequestIdentifier;
-(void)publish:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end
