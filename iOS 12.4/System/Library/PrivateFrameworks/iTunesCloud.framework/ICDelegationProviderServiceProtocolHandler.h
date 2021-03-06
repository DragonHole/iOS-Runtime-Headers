/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ICUserIdentityStore, NSOperationQueue, ICRequestContext;

@interface ICDelegationProviderServiceProtocolHandler : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	ICUserIdentityStore* _identityStore;
	NSOperationQueue* _operationQueue;
	unsigned long long _nextSessionUniqueID;
	ICRequestContext* _requestContext;

}
-(id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2 ;
-(void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_nextSessionUniqueID;
@end

