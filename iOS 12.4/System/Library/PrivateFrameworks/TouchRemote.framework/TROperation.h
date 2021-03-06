/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore;
@class TRSession, NSDictionary, NSError, NSObject;

@interface TROperation : NSOperation {

	TRSession* _session;
	NSDictionary* _result;
	NSError* _error;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,copy) NSDictionary * result;                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TRSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)userCancelledError;
-(id)initWithSession:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setResult:(NSDictionary *)arg1 ;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(TRSession *)session;
-(void)main;
-(NSDictionary *)result;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setSession:(TRSession *)arg1 ;
@end

