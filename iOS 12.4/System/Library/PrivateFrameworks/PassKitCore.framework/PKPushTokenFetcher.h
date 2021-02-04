/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, APSConnection, NSString;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSMutableArray* _completionHandlers;
	APSConnection* _pushConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invokeCompletionWithPushToken:(id)arg1 ;
-(void)fetchPushTokenWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleTimeout;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
