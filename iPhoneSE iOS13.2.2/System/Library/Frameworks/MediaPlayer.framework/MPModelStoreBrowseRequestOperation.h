/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@protocol OS_dispatch_group;
@class NSOperation, NSObject, NSOperationQueue, NSMapTable;

@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation {

	BOOL _didInitializeTimeoutIntervalAdditions;
	BOOL _errorReportingDisabled;
	NSOperation* _individualPendingNestedRequestOperation;
	NSObject*<OS_dispatch_group> _nestedRequestOperationsGroup;
	NSOperationQueue* _nestedRequestsOperationQueue;
	unsigned long long _requestType;
	NSMapTable* _sectionsToPendingNestedRequestOperations;
	double _timeoutIntervalAdditions;

}
-(void)cancel;
-(void)execute;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_nestedRequestsOperationQueue;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_produceRegularResponseWithParser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
