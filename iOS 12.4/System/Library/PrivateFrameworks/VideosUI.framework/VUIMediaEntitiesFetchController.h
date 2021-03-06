/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaLibraryFetchController.h>

@protocol VUIMediaEntitiesFetchControllerDelegate;
@class NSArray, VUIMediaEntityFetchResponse;

@interface VUIMediaEntitiesFetchController : VUIMediaLibraryFetchController {

	id<VUIMediaEntitiesFetchControllerDelegate> _delegate;
	NSArray* _requests;
	VUIMediaEntityFetchResponse* _response;
	NSArray* _responses;

}

@property (nonatomic,copy) NSArray * requests;                                                         //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSArray * responses;                                                        //@synthesize responses=_responses - In the implementation block
@property (assign,nonatomic,__weak) id<VUIMediaEntitiesFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VUIMediaEntityFetchResponse * response;                                 //@synthesize response=_response - In the implementation block
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(void)setDelegate:(id<VUIMediaEntitiesFetchControllerDelegate>)arg1 ;
-(id<VUIMediaEntitiesFetchControllerDelegate>)delegate;
-(VUIMediaEntityFetchResponse *)response;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)cancelFetch;
-(void)_handleManualFetchControllerOperationDidComplete:(id)arg1 ;
-(void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg1 ;
-(BOOL)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(BOOL)arg2 ;
-(void)_notifyFetchRequests:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)_notifyFetchRequests:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 ;
-(id)_fetchOperationForFetchReason:(long long)arg1 ;
-(void)_didCompleteFetchOperation:(id)arg1 ;
@end

