/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator, NSXPCConnection;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;
	NSXPCConnection* _snapshotService;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(void)_enterBackground:(id)arg1 ;
-(void)_exitBackground:(id)arg1 ;
-(void)_cleanupSnapshotCreator;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
-(void)_performSnapshot;
-(void)_failWithError:(id)arg1 ;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)cancel;
-(void)_cancel;
-(BOOL)isLoading;
@end

