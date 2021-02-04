/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSDownloadMonitorDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSDownloadMonitor : NSObject {

	SSXPCConnection* _connection;
	id<SSDownloadMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (assign) id<SSDownloadMonitorDelegate> delegate; 
-(id)_copyItemsWithReply:(id)arg1 error:(id*)arg2 ;
-(void)getMonitorItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pauseMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)prioritizeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_reloadForChangeNotification;
-(id)_connection;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SSDownloadMonitorDelegate>)arg1 ;
-(id<SSDownloadMonitorDelegate>)delegate;
@end
