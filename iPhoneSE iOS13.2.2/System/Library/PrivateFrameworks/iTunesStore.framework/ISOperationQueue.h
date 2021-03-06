/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) BOOL adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(id)init;
-(void)dealloc;
-(id)name;
-(void)addOperation:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id)operations;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(long long)operationCount;
-(long long)maxConcurrentOperationCount;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)cancelAllOperations;
-(BOOL)adjustsMaxConcurrentOperationCount;
-(void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1 ;
@end

