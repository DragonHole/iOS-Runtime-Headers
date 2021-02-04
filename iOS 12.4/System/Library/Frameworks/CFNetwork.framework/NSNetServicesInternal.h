/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_tcp_listener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableArray, NSObject;

@interface NSNetServicesInternal : NSObject {

	NSMutableArray* _monitors;
	NSObject*<OS_tcp_listener> _listener;
	CFRunLoopRef _scheduledRunLoop;
	CFStringRef _scheduledMode;

}

@property (retain) NSMutableArray * monitors;              //@synthesize monitors=_monitors - In the implementation block
-(void)copyScheduledRunLoop:(_CFRunLoop*)arg1 andMode:(const _CFString*)arg2 ;
-(void)setScheduledRunLoop:(CFRunLoopRef)arg1 andMode:(CFStringRef)arg2 ;
-(NSMutableArray *)monitors;
-(void)setMonitors:(NSMutableArray *)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)listener;
-(void)setListener:(id)arg1 ;
@end
