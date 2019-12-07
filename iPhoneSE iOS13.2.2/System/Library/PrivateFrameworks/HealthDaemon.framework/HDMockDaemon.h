/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol HDNanoAlertSuppressionService;
@class HDBackgroundTaskScheduler, HDMockPrimaryProfile, HDPrimaryProfile, HDPluginManager, NSString, _HKBehavior;

@interface HDMockDaemon : NSObject <HDHealthDaemon> {

	HDBackgroundTaskScheduler* backgroundTaskScheduler;
	HDMockPrimaryProfile* mockPrimaryProfile;
	HDPrimaryProfile* primaryProfile;
	HDPluginManager* pluginManager;
	id<HDNanoAlertSuppressionService> alertSuppressionService;

}

@property (nonatomic,readonly) HDMockPrimaryProfile * mockPrimaryProfile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile; 
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService; 
@property (nonatomic,readonly) _HKBehavior * behavior; 
-(id)init;
-(_HKBehavior *)behavior;
-(HDPluginManager *)pluginManager;
-(HDPrimaryProfile *)primaryProfile;
-(void)registerForDaemonReady:(id)arg1 ;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2 ;
-(id)createXPCListenerWithMachServiceName:(id)arg1 ;
-(id)daemonExtensionWithIdentifier:(id)arg1 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(id)daemonExtensionsConformingToProtocol:(id)arg1 ;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id<HDNanoAlertSuppressionService>)arg1 ;
-(HDMockPrimaryProfile *)mockPrimaryProfile;
@end
