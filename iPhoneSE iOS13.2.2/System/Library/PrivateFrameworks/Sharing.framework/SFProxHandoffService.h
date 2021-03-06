/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFService, NSObject;

@interface SFProxHandoffService : NSObject {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	SFService* _service;
	int _serviceState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)_activated;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_serviceStart;
-(void)_completedWithError:(id)arg1 ;
@end

