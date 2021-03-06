/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <KeyboardServices/KeyboardServices-Structs.h>
@class NSObject;

@interface _KSReachabilityMonitor : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isInternetReachable;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)startMonitoring;
-(id)init;
-(void)dealloc;
-(void)reachabilityDidChange:(BOOL)arg1 ;
-(void)queryInitialState;
@end

