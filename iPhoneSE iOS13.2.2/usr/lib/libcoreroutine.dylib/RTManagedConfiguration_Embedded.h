/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTManagedConfiguration.h>

@interface RTManagedConfiguration_Embedded : RTManagedConfiguration
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isFindMyCarAllowed;
-(BOOL)isDiagnosticsAndUsageAllowed;
-(id)stringToManagedConfigurationKey:(id)arg1 ;
@end

