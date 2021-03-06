/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary, NSObject;

@interface SCROBrailleDisplayAutoDetector : NSObject {

	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;
	NSObject*<OS_dispatch_source> _serialSource;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedDetector;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_driverBundleIdentifiers;
-(void)_autodetectIOServices:(id)arg1 ;
-(void)_initializeAutodetectSerialPorts:(id)arg1 ;
-(BOOL)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3 ;
-(void)serialPortsWerePublished:(unsigned)arg1 ;
-(void)_detectSerialPorts:(id)arg1 ;
-(id)_serialPortMatchingDictionary;
-(void)_registerForSerialPortNotifications;
-(void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2 ;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
@end

