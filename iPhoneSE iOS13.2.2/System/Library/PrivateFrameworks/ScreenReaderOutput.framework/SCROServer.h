/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROServerDelegate;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock;

@interface SCROServer : NSObject {

	NSLock* _contentLock;
	id<SCROServerDelegate> _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	long long _clientCount;
	BOOL _isRegisteredWithMach;

}
+(id)sharedServer;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(CFRunLoopSourceRef)serverSource;
-(long long)_clientCount;
-(CFRunLoopTimerRef)_deathTimer;
-(BOOL)_registerWithMachServiceName:(char*)arg1 ;
-(void)unregisterWithMach;
-(long long)_incrementClientCount;
-(void)_setClientCount:(long long)arg1 ;
-(int)_registerForNotificationOnDeathPort:(unsigned)arg1 ;
-(BOOL)isRegisteredWithMach;
-(BOOL)registerWithMach;
@end

