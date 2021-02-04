/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKTransitAppletHistoryFetcherDelegate, OS_dispatch_queue, NFSession;
@class NSString, NSObject;

@interface NPKTransitAppletHistoryFetcher : NSObject {

	id<NPKTransitAppletHistoryFetcherDelegate> _delegate;
	NSString* _aidToFetch;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<NFSession> _pendingSessionHandle;

}

@property (nonatomic,retain) NSString * aidToFetch;                                                   //@synthesize aidToFetch=_aidToFetch - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<NFSession> pendingSessionHandle;                               //@synthesize pendingSessionHandle=_pendingSessionHandle - In the implementation block
@property (assign,nonatomic,__weak) id<NPKTransitAppletHistoryFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)initWithCallbackQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<NFSession>)pendingSessionHandle;
-(void)_handleActiveSecureElementManagerSession:(id)arg1 ;
-(void)_handleSecureElementSessionFailureWithError:(id)arg1 ;
-(void)setPendingSessionHandle:(NSObject*<NFSession>)arg1 ;
-(void)setAIDToFetch:(id)arg1 ;
-(void)requestTransitHistoryFetch;
-(NSString *)aidToFetch;
-(void)setAidToFetch:(NSString *)arg1 ;
-(void)setDelegate:(id<NPKTransitAppletHistoryFetcherDelegate>)arg1 ;
-(id<NPKTransitAppletHistoryFetcherDelegate>)delegate;
@end
