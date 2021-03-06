/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSPushRegistrationRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)performMigration;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(void)setRegistration:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)allBundleIdentifiers;
-(id)registrationForBundleIdentifier:(id)arg1 ;
-(void)removeRegistrationForBundleIdentifier:(id)arg1 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)_queue_registrationForBundleIdentifier:(id)arg1 ;
-(void)_queue_setRegistration:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeRegistrationForBundleIdentifier:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 ;
@end

