/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsClientContext : NSObject {

	A@ _cfprefsd;
	CFDictionaryRef _suiteCache;
	CFSetRef _observedSources;
	NSObject*<OS_xpc_object> _entitlements;
	CFBooleanRef _sandboxed;
	os_unfair_lock_s _lock;
	char _isPlatformBinary;
	BOOL _impersonatingAnotherProcess;
	BOOL _hasInFlightKVONotifications;
	BOOL _didDeferKVONotifications;
	BOOL _valid;

}
@end

