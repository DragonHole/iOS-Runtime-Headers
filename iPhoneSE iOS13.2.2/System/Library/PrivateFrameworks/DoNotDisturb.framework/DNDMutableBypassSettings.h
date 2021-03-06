/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDBypassSettings.h>

@class NSString;

@interface DNDMutableBypassSettings : DNDBypassSettings

@property (assign,nonatomic) unsigned long long immediateBypassEventSourceType; 
@property (nonatomic,copy) NSString * immediateBypassCNGroupIdentifier; 
@property (assign,nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImmediateBypassEventSourceType:(unsigned long long)arg1 ;
-(void)setImmediateBypassCNGroupIdentifier:(NSString *)arg1 ;
-(void)setRepeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg1 ;
@end

