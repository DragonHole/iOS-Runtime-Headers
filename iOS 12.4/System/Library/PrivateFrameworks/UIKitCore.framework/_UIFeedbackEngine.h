/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer, NSString;

@interface _UIFeedbackEngine : NSObject {

	NSMutableDictionary* _completionBlocks;
	NSTimer* _suspensionTimer;
	BOOL _enabled;
	BOOL _suspended;
	long long _prewarmCount;
	long long _state;
	unsigned long long _numberOfClients;
	unsigned long long _backgroundTaskIdentifier;
	long long _suspensionState;

}

@property (assign,nonatomic) long long prewarmCount;                                                                                                         //@synthesize prewarmCount=_prewarmCount - In the implementation block
@property (assign,setter=_setEnabled:,getter=isEnabled,nonatomic) BOOL enabled;                                                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClients;                                                                                           //@synthesize numberOfClients=_numberOfClients - In the implementation block
@property (assign,setter=_setSuspended:,getter=_isSuspended,nonatomic) BOOL suspended;                                                                       //@synthesize suspended=_suspended - In the implementation block
@property (assign,setter=_setBackgroundTaskIdentifier:,getter=_backgroundTaskIdentifier,nonatomic) unsigned long long backgroundTaskIdentifier;              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (getter=_suspensionState,nonatomic,readonly) long long suspensionState;                                                                            //@synthesize suspensionState=_suspensionState - In the implementation block
@property (nonatomic,readonly) NSString * _stats_key; 
@property (nonatomic,readonly) double currentTime; 
+(id)engineForFeedback:(id)arg1 ;
+(BOOL)_supportsPlayingFeedback:(id)arg1 ;
+(id)sharedEngine;
-(id)init;
-(id)description;
-(BOOL)isEnabled;
-(long long)_state;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_setState:(long long)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_prewarmWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_activateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_startWarmingFeedbacks:(id)arg1 ;
-(void)_stopWarmingFeedbacks:(id)arg1 ;
-(void)_cooldown;
-(void)_deactivate;
-(double)currentTime;
-(NSString *)_stats_key;
-(id)_statsSuffix;
-(id)_activationCountStatistics;
-(id)_activationDurationStatistics;
-(id)_prewarmCountStatistics;
-(id)_prewarmDurationStatistics;
-(id)_outOfChannelsCountStatistics;
-(void)_stats_stateDidChangeFrom:(long long)arg1 to:(long long)arg2 ;
-(void)_stats_outOfChannels;
-(BOOL)_canPlayFeedback:(id)arg1 ;
-(void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_hostDidEnterBackground:(id)arg1 ;
-(void)_hostWillEnterForeground:(id)arg1 ;
-(void)_removeViewControllerWillDisconnect:(id)arg1 ;
-(void)_applicationWillSuspend:(id)arg1 ;
-(void)_applicationDidResume:(id)arg1 ;
-(unsigned long long)numberOfClients;
-(long long)prewarmCount;
-(BOOL)_isSuspended;
-(void)_updateSuspension;
-(void)_deactivateEngineIfPossible;
-(void)_cooldownEngineIfPossible;
-(void)_setupBackgroundTask;
-(void)_teardownBackgroundTask;
-(void)_prewarmEngine;
-(void)_activateEngine;
-(void)_performAtState:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_serviceBlocksForState:(long long)arg1 withSuccess:(BOOL)arg2 ;
-(void)_activateUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_teardownUnderlyingPlayerIfPossible;
-(void)_prewarmUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_cooldownUnderlyingPlayerIfPossible;
-(void)_suspendEngineNow;
-(void)_setSuspended:(BOOL)arg1 ;
-(unsigned long long)_backgroundTaskIdentifier;
-(void)_setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(void)_willPlayFeedback:(id)arg1 atTime:(double)arg2 ;
-(void)_willCancelFeedback:(id)arg1 ;
-(void)runWhenReady:(/*^block*/id)arg1 ;
-(void)setPrewarmCount:(long long)arg1 ;
-(long long)_suspensionState;
@end

