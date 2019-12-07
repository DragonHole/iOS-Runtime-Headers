/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject, AFAccessibilityState, NSHashTable;

@interface AFAccessibilityObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _stateLock;
	AFAccessibilityState* _state;
	unsigned long long _stateDirtyFlags;
	NSHashTable* _listeners;

}

@property (nonatomic,copy,readonly) AFAccessibilityState * state; 
+(id)sharedObserver;
-(id)init;
-(AFAccessibilityState *)state;
-(id)currentState;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
-(void)voiceOverTouchEnabledPreferenceDidChange:(id)arg1 ;
-(void)vibrationDisabledPreferenceDidChange:(id)arg1 ;
-(BOOL)_fetchIsVoiceOverTouchEnabled;
-(BOOL)_fetchIsVibrationDisabled;
-(void)_setState:(id)arg1 clearDirtyFlags:(unsigned long long)arg2 ;
-(void)_updateVoiceOverTouchEnabledPreference;
-(void)_updateVibrationDisabledPreference;
@end
