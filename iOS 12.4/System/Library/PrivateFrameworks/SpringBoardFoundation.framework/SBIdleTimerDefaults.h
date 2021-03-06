/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) double minimumLockscreenIdleTime; 
@property (nonatomic,readonly) BOOL disableAutoDim; 
@property (nonatomic,readonly) BOOL dontDimOrLockWhileConnectedToPower; 
@property (nonatomic,readonly) BOOL supportLiftToWake; 
@property (nonatomic,readonly) BOOL supportTapToWake; 
@property (nonatomic,readonly) BOOL disableAttentionAwareness; 
@property (getter=isBacklightLoggingEnabled,nonatomic,readonly) BOOL backlightLoggingEnabled; 
-(void)setMinimumLockscreenIdleTime:(double)arg1 ;
-(double)minimumLockscreenIdleTime;
-(void)setBacklightLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isBacklightLoggingEnabled;
-(void)setSupportLiftToWake:(BOOL)arg1 ;
-(BOOL)supportLiftToWake;
-(void)setSupportTapToWake:(BOOL)arg1 ;
-(BOOL)supportTapToWake;
-(void)setDisableAttentionAwareness:(BOOL)arg1 ;
-(BOOL)disableAttentionAwareness;
-(void)setDontDimOrLockWhileConnectedToPower:(BOOL)arg1 ;
-(BOOL)dontDimOrLockWhileConnectedToPower;
-(void)setDisableAutoDim:(BOOL)arg1 ;
-(BOOL)disableAutoDimExists;
-(BOOL)disableAutoDim;
-(void)_bindAndRegisterDefaults;
@end

