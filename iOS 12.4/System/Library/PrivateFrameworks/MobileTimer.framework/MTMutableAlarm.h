/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/MTAlarm.h>

@class NSString, MTSound;

@interface MTMutableAlarm : MTAlarm

@property (assign,nonatomic) unsigned long long hour; 
@property (assign,nonatomic) unsigned long long minute; 
@property (assign,nonatomic) unsigned long long bedtimeHour; 
@property (assign,nonatomic) unsigned long long bedtimeMinute; 
@property (assign,nonatomic) unsigned long long bedtimeReminderMinutes; 
@property (assign,nonatomic) BOOL bedtimeDoNotDisturb; 
@property (assign,nonatomic) unsigned long long repeatSchedule; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) unsigned long long active; 
@property (assign,getter=isActiveForThisDevice,nonatomic) BOOL activeForThisDevice; 
@property (assign,nonatomic) BOOL allowsSnooze; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) MTSound * sound; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

