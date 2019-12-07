/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSOperation;

@interface _DKSyncSerializer : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _underlyingQueue;
	NSOperation* _previousOperation;

}

@property (readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> underlyingQueue;              //@synthesize underlyingQueue=_underlyingQueue - In the implementation block
@property (__weak) NSOperation * previousOperation;                             //@synthesize previousOperation=_previousOperation - In the implementation block
+(id)sharedInstance;
+(void)addOperation:(id)arg1 ;
+(id)operationQueue;
+(void)addOperationWithBlock:(/*^block*/id)arg1 ;
+(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
+(id)underlyingQueue;
+(void)performAsyncBlock:(/*^block*/id)arg1 ;
+(void)performSyncBlock:(/*^block*/id)arg1 ;
+(void)performAfter:(double)arg1 block:(/*^block*/id)arg2 ;
+(void)addDependentOperation:(id)arg1 ;
+(void)addDependentOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)addOperation:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)performAsyncBlock:(/*^block*/id)arg1 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(void)performAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)addDependentOperation:(id)arg1 ;
-(void)addDependentOperationWithBlock:(/*^block*/id)arg1 ;
-(NSOperation *)previousOperation;
-(void)setPreviousOperation:(NSOperation *)arg1 ;
@end
