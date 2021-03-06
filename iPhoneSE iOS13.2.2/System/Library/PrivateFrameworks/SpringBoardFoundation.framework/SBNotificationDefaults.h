/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSArray * displayIDsWithBadgingEnabled; 
@property (nonatomic,readonly) BOOL alwaysPerformDefaultAction; 
@property (nonatomic,readonly) BOOL dontSuppressForPrivacyWhenUnlocked; 
@property (nonatomic,readonly) BOOL shouldTestBannerPlayTextTone; 
@property (nonatomic,readonly) BOOL alwaysSpeakNotifications; 
@property (nonatomic,readonly) NSArray * legacyAlarmList; 
+(id)standardDefaults;
-(void)setAlwaysSpeakNotifications:(BOOL)arg1 ;
-(BOOL)alwaysSpeakNotifications;
-(void)setShouldTestBannerPlayTextTone:(BOOL)arg1 ;
-(BOOL)shouldTestBannerPlayTextTone;
-(void)setDisplayIDsWithBadgingEnabled:(NSArray *)arg1 ;
-(NSArray *)displayIDsWithBadgingEnabled;
-(void)setDontSuppressForPrivacyWhenUnlocked:(BOOL)arg1 ;
-(BOOL)dontSuppressForPrivacyWhenUnlocked;
-(void)setAlwaysPerformDefaultAction:(BOOL)arg1 ;
-(BOOL)alwaysPerformDefaultAction;
-(void)setLegacyAlarmList:(NSArray *)arg1 ;
-(NSArray *)legacyAlarmList;
-(void)_bindAndRegisterDefaults;
@end

