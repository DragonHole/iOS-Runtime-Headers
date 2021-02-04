/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>
#import <libobjc.A.dylib/UMUserSwitchStakeholder.h>
#import <DADaemonSupport/DATransactionMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSTimer, NSObject, NSArray, NSString;

@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate> {

	NSTimer* _delayedShutdownTimer;
	NSTimer* _forceShutdownTimer;
	BOOL* _runLoopStoppedRef;
	NSObject*<OS_dispatch_queue> _aggdStatsQueue;
	NSObject*<OS_dispatch_source> _aggdStatsSource;
	NSArray* _userSwitchTasks;

}

@property (nonatomic,retain) NSArray * userSwitchTasks;              //@synthesize userSwitchTasks=_userSwitchTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMain;
-(void)willSwitchUser;
-(void)didFinishAllXPCTransactions;
-(void)disable;
-(void)addToOperationsQueueDisabledCheckAndGoBlock:(/*^block*/id)arg1 wrappedBlock:(/*^block*/id)arg2 ;
-(void)shutdownDAD;
-(NSArray *)userSwitchTasks;
-(void)_setRunLoopStopped:(BOOL)arg1 ;
-(void)_shutdownDaemon;
-(void)_forceShutdownTimerFired:(id)arg1 ;
-(void)setUserSwitchTasks:(NSArray *)arg1 ;
-(void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)arg1 ;
-(void)addLanguageChangeHandler;
-(void)_shutdownNotification:(id)arg1 ;
-(void)waitForSystemAvailability;
-(void)setRunLoopStoppedRef:(BOOL*)arg1 ;
-(void)_configureAggdLogging;
-(void)addSignalHandler;
-(id)init;
-(void)dealloc;
@end
