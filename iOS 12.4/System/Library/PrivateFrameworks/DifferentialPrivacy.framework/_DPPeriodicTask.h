/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _DPPeriodicTask : NSObject {

	unsigned long long _periodSeconds;
	NSString* _name;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _executionCriteria;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> executionCriteria;              //@synthesize executionCriteria=_executionCriteria - In the implementation block
@property (nonatomic,readonly) unsigned long long periodSeconds;                        //@synthesize periodSeconds=_periodSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
+(id)taskWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(NSObject*<OS_xpc_object>)executionCriteria;
-(id)initWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(unsigned long long)periodSeconds;
-(id)init;
-(NSString *)name;
-(id)handler;
-(NSObject*<OS_dispatch_queue>)queue;
@end
