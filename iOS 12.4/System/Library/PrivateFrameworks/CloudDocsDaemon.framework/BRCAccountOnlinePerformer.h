/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, BRCThrottler;

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {

	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	BRCThrottler* _throttler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)addPerformer:(id)arg1 ;
+(void)removePerformer:(id)arg1 ;
-(void)_close;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(void)resumeAndAutoClose;
-(id)_key;
-(void)perform;
@end

