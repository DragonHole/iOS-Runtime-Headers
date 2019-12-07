/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSPromise;

@interface SSBinaryPromise : NSObject {

	SSPromise* _backingPromise;

}

@property (nonatomic,retain) SSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithSuccess;
+(id)promiseWithError:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithPromise:(id)arg1 ;
-(id)init;
-(void)waitUntilFinished;
-(BOOL)resultWithError:(id*)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithSuccess;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)promiseAdapter;
-(SSPromise *)backingPromise;
-(void)_removeFromGlobalPromiseStorage;
-(void)setBackingPromise:(SSPromise *)arg1 ;
@end
