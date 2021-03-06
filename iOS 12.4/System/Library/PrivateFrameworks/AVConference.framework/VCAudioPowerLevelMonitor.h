/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAudioPowerLevelMonitorDelegate;
@class NSObject;

@interface VCAudioPowerLevelMonitor : NSObject {

	unsigned startDetectRemoteAudioLowPowerTime;
	float audioPowerThreshold;
	unsigned audioLowPowerTimeInterval;
	BOOL isAudioPowerBelowThreshold;
	BOOL isAudioPowerMovingAverage;
	float audioPowerMovingAverageCoefficient;
	float currentAudioAverage;
	NSObject*<VCAudioPowerLevelMonitorDelegate> delegate;

}

@property (assign,nonatomic) NSObject*<VCAudioPowerLevelMonitorDelegate> delegate; 
-(void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned)arg2 ;
-(id)init;
-(void)setDelegate:(NSObject*<VCAudioPowerLevelMonitorDelegate>)arg1 ;
-(NSObject*<VCAudioPowerLevelMonitorDelegate>)delegate;
@end

