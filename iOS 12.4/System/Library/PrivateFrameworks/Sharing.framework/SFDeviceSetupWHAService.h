/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFService, SFSession, NSObject;

@interface SFDeviceSetupWHAService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFService* _sfService;
	SFSession* _sfSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)progressHandler;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleRequest:(id)arg1 flags:(unsigned)arg2 session:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_handleInfoExchange:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_cleanup;
-(void)activate;
-(void)setProgressHandler:(id)arg1 ;
@end

