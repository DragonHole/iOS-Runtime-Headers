/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion, NSString;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	int _count;
	NSString* _taskName;

}
+(id)backgroundTaskAssertionQueue;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)fireExpirationHandler;
@end

