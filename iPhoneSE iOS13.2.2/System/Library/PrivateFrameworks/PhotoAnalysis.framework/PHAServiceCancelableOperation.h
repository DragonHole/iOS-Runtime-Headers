/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSInvocation, NSObject;

@interface PHAServiceCancelableOperation : NSObject {

	NSInvocation* _invocation;
	long long _operationId;
	BOOL _cancelRequested;
	/*^block*/id _cancellationBlock;
	NSObject*<OS_dispatch_group> _completionGroup;

}
+(id)currentOperation;
+(id)operationNotFoundError:(long long)arg1 ;
-(id)description;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCancellationBlock:(/*^block*/id)arg1 ;
-(long long)operationId;
-(void)_startWork;
-(id)initWithOperationId:(long long)arg1 invocation:(id)arg2 ;
-(void)beginAsyncWork;
-(void)endAsyncWork;
-(void)enqueueOnQueue:(id)arg1 ;
-(id)operationCanceledError:(BOOL)arg1 ;
@end
