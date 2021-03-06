/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, ATVAcquisitionRequest;

@interface VUIStoreAcquisition : NSObject {

	NSMutableArray* _pendingQueue;
	unsigned long long _concurrentCount;
	ATVAcquisitionRequest* _activeRequest;

}
+(id)sharedInstance;
-(id)init;
-(id)acquireWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_processFirstRequest;
-(void)_processRequest:(id)arg1 ;
-(void)_handleCustomRequest:(id)arg1 ;
-(void)_handleRequest:(id)arg1 ;
-(void)_handleResponse:(id)arg1 responseDict:(id)arg2 forRequest:(id)arg3 error:(id)arg4 cancelled:(BOOL)arg5 ;
-(void)cancelAcquisition:(id)arg1 ;
@end

