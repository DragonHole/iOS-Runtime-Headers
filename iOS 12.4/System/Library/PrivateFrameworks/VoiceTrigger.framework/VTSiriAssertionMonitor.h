/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSiriAssertionMonitor : VTEventMonitor {

	unsigned char _assertionState;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)enableAssertionReceived;
-(void)disableAssertionReceived;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
@end
