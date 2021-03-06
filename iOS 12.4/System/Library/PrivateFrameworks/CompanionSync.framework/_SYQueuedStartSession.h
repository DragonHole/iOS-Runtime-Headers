/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SYStartSyncSession;

@interface _SYQueuedStartSession : NSObject {

	SYStartSyncSession* _request;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) SYStartSyncSession * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id completion;                             //@synthesize completion=_completion - In the implementation block
-(id)initWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completion;
-(SYStartSyncSession *)request;
@end

