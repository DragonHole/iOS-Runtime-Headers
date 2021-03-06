/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/FPOperationClient.h>

@protocol FPCancellable, OS_dispatch_queue;
@class NSObject;

@interface FPOperation : NSOperation <FPOperationClient> {

	id<FPCancellable> _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	id _executionTransaction;
	BOOL _finished;
	/*^block*/id _finishedBlock;

}

@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished;                                 //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) id<FPCancellable> remoteOperation;                       //@synthesize remoteOperation=_remoteOperation - In the implementation block
@property (copy) id finishedBlock;                                                    //@synthesize finishedBlock=_finishedBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
-(id)operationDescription;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setRemoteCancellationHandler:(id)arg1 ;
-(id<FPCancellable>)remoteOperation;
-(void)setRemoteOperation:(id<FPCancellable>)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(BOOL)_finishIfCancelled;
-(BOOL)finishIfCancelled;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(oneway void)invalidate;
-(oneway void)cancel;
-(void)start;
-(oneway void)setCancellationHandler:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

