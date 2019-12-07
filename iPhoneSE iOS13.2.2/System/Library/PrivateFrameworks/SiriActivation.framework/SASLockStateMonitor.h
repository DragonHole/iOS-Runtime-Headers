/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SASLockStateMonitorDelegate;
@class NSNumber;

@interface SASLockStateMonitor : NSObject {

	BOOL _unlockedByTouchID;
	id<SASLockStateMonitorDelegate> _delegate;
	unsigned long long _lockState;
	NSNumber* _assistantIsEnabled;

}

@property (assign,nonatomic) unsigned long long lockState;                                 //@synthesize lockState=_lockState - In the implementation block
@property (assign,nonatomic) BOOL unlockedByTouchID;                                       //@synthesize unlockedByTouchID=_unlockedByTouchID - In the implementation block
@property (nonatomic,retain) NSNumber * assistantIsEnabled;                                //@synthesize assistantIsEnabled=_assistantIsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SASLockStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<SASLockStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<SASLockStateMonitorDelegate>)arg1 ;
-(BOOL)isBlocked;
-(unsigned long long)lockState;
-(void)setLockState:(unsigned long long)arg1 ;
-(void)setAssistantIsEnabled:(NSNumber *)arg1 ;
-(NSNumber *)assistantIsEnabled;
-(BOOL)isScreenOn;
-(unsigned long long)_currentLockState;
-(BOOL)hasUnlockedSinceBoot;
-(void)_lockStateDidChange:(id)arg1 ;
-(void)setUnlockedByTouchID:(BOOL)arg1 ;
-(void)_updateLockState;
-(BOOL)unlockedByTouchID;
@end
