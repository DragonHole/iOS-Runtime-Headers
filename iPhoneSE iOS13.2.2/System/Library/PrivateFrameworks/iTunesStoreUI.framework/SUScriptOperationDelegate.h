/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISOperationDelegate.h>

@class NSMutableArray, NSLock, NSString;

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate> {

	NSMutableArray* _operations;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancelAllOperations;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
-(void)_removeOperation:(id)arg1 ;
@end

