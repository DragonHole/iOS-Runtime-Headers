/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICanvasLifecycleStateMonitoring <_UICanvasLifecycleStateTransitioning>
@property (getter=_hasLifecycle,nonatomic,readonly) BOOL hasLifecycle; 
@property (assign,setter=_setIsRespondingToLifecycleEvent:,getter=_isRespondingToLifecycleEvent,nonatomic) BOOL respondingToLifecycleEvent; 
@property (assign,setter=_setIsActive:,getter=_isActive,nonatomic) BOOL active; 
@property (assign,setter=_setSuspendedEventsOnly:,getter=_suspendedEventsOnly,nonatomic) BOOL suspendedEventsOnly; 
@property (assign,setter=_setRunningInTaskSwitcher:,getter=_runningInTaskSwitcher,nonatomic) BOOL runningInTaskSwitcher; 
@property (assign,setter=_setSuspendedUnderLock:,getter=_suspendedUnderLock,nonatomic) BOOL suspendedUnderLock; 
@required
-(BOOL)_isActive;
-(BOOL)_hasLifecycle;
-(BOOL)_suspendedEventsOnly;
-(BOOL)_isRespondingToLifecycleEvent;
-(void)_setIsRespondingToLifecycleEvent:(BOOL)arg1;
-(BOOL)_suspendedUnderLock;
-(void)_setIsActive:(BOOL)arg1;
-(void)_setSuspendedEventsOnly:(BOOL)arg1;
-(BOOL)_runningInTaskSwitcher;
-(void)_setRunningInTaskSwitcher:(BOOL)arg1;
-(void)_setSuspendedUnderLock:(BOOL)arg1;

@end

