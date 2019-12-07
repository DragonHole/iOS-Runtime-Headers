/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _KSRequestThrottle : NSObject {

	/*^block*/id _curveFunction;
	double _maximum;
	/*^block*/id _request;
	int _retryCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _debugIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                        //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)_launch;
-(void)postRequest:(/*^block*/id)arg1 ;
-(id)initWithCurve:(/*^block*/id)arg1 maximumDelay:(double)arg2 ;
@end
