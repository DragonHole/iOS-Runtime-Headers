/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class BSZeroingWeakReference, NSObject, NSHashTable;

@interface BSPowerMonitor : NSObject {

	IONotificationPortRef _notificationPort;
	unsigned _notifier;
	BSZeroingWeakReference* _weakSelfWrapper;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _observersLock;
	NSHashTable* _lock_observers;
	unsigned _rootDomainConnect;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

