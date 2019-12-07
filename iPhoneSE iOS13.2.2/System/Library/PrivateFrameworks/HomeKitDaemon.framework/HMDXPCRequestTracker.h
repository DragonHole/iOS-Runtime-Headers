/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSString, NSMutableDictionary, HMFTimer, NSSet;

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _clientName;
	NSObject*<OS_dispatch_group> _activeMessageTracker;
	NSMutableDictionary* _pendingRequests;
	HMFTimer* _watchdogTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeMessageTracker;              //@synthesize activeMessageTracker=_activeMessageTracker - In the implementation block
@property (copy,readonly) NSSet * requestIdentifiers; 
@property (nonatomic,readonly) NSMutableDictionary * pendingRequests;                        //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) HMFTimer * watchdogTimer;                                     //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                                   //@synthesize clientName=_clientName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(NSString *)clientName;
-(id)initWithGroup:(id)arg1 ;
-(NSMutableDictionary *)pendingRequests;
-(void)timerDidFire:(id)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(HMFTimer *)watchdogTimer;
-(NSSet *)requestIdentifiers;
-(NSObject*<OS_dispatch_group>)activeMessageTracker;
-(void)__sendReponseForRequest:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)addRequestWithIdentifier:(id)arg1 messageName:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)removeRequestWithIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(BOOL)containsMessageWithIdentifier:(id)arg1 ;
-(void)setActiveMessageTracker:(NSObject*<OS_dispatch_group>)arg1 ;
@end
