/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class EFProcessTransaction, BKSProcessAssertion, NSObject;

@interface MFTaskAssertion : NSObject {

	EFProcessTransaction* _transaction;
	BKSProcessAssertion* _assertion;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)log;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(void)cancelTimer;
-(id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2 ;
@end
