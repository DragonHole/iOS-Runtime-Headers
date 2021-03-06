/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CAMPowerController : NSObject {

	BOOL __isBackgrounded;
	int __assertionIdentifierGenerator;
	int __powerPressureNotificationToken;
	unsigned __powerControllerQueue_powerPressureLevel;
	NSMutableDictionary* __assertionsByIdentifier;
	NSObject*<OS_dispatch_queue> __powerControllerQueue;
	unsigned long long __backgroundTaskIdentifier;

}

@property (nonatomic,readonly) int _assertionIdentifierGenerator;                                                                                //@synthesize _assertionIdentifierGenerator=__assertionIdentifierGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _assertionsByIdentifier;                                                                    //@synthesize _assertionsByIdentifier=__assertionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _powerControllerQueue;                                                               //@synthesize _powerControllerQueue=__powerControllerQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long _backgroundTaskIdentifier;                                                                     //@synthesize _backgroundTaskIdentifier=__backgroundTaskIdentifier - In the implementation block
@property (assign,setter=_setBackgrounded:,getter=_isBackgrounded,nonatomic) BOOL _isBackgrounded;                                               //@synthesize _isBackgrounded=__isBackgrounded - In the implementation block
@property (nonatomic,readonly) int _powerPressureNotificationToken;                                                                              //@synthesize _powerPressureNotificationToken=__powerPressureNotificationToken - In the implementation block
@property (assign,setter=_powerControllerQueue_setPowerPressureLevel:,nonatomic) unsigned _powerControllerQueue_powerPressureLevel;              //@synthesize _powerControllerQueue_powerPressureLevel=__powerControllerQueue_powerPressureLevel - In the implementation block
-(unsigned)generateAssertionIdentifier;
-(BOOL)_isBackgrounded;
-(void)_powerControllerQueue_setPowerPressureLevel:(unsigned)arg1 ;
-(int)_powerPressureNotificationToken;
-(NSMutableDictionary *)_assertionsByIdentifier;
-(NSObject*<OS_dispatch_queue>)_powerControllerQueue;
-(void)_setBackgrounded:(BOOL)arg1 ;
-(void)_endBackgroundTaskIfNeeded;
-(void)_startBackgroundTaskIfNeeded;
-(unsigned)_powerControllerQueue_powerPressureLevel;
-(void)addAssertionForIndentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(void)removeAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(unsigned)powerPressureLevel;
-(int)_assertionIdentifierGenerator;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)_applicationWillResignActive:(id)arg1 ;
-(unsigned long long)_backgroundTaskIdentifier;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

