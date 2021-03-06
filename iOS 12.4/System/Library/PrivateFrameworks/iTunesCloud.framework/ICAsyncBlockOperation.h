/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ICAsyncBlockOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _cancellationHandler;
	/*^block*/id _startHandler;

}

@property (nonatomic,copy,readonly) id startHandler;              //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler; 
-(id)initWithStartHandler:(/*^block*/id)arg1 ;
-(id)startHandler;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
@end

