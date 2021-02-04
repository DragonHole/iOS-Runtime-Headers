/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioFileWriter, OS_dispatch_queue;
@class NSURL, NSObject, NSDictionary, CSBiometricMatchMonitor, CSGestureMonitor;

@interface CSSpIdImplicitTraining : NSObject {

	unsigned long long _triggerEndMachTime;
	unsigned long long _triggerStartMachTime;
	unsigned long long _extraSamplesAtBegining;
	unsigned long long _numSamplesAdded;
	unsigned long long _discardedPaylodSamples;
	BOOL _implicitRecordingInProgress;
	NSURL* _lastCachedUtterance;
	id<CSAudioFileWriter> _uttLogger;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _recordingContext;
	NSDictionary* _voiceTriggerEventInfo;
	CSBiometricMatchMonitor* _biometricMonitor;
	CSGestureMonitor* _gestureMonitor;

}

@property (nonatomic,retain) NSURL * lastCachedUtterance;                             //@synthesize lastCachedUtterance=_lastCachedUtterance - In the implementation block
@property (nonatomic,retain) id<CSAudioFileWriter> uttLogger;                         //@synthesize uttLogger=_uttLogger - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * recordingContext;                         //@synthesize recordingContext=_recordingContext - In the implementation block
@property (nonatomic,retain) NSDictionary * voiceTriggerEventInfo;                    //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (nonatomic,retain) CSBiometricMatchMonitor * biometricMonitor;              //@synthesize biometricMonitor=_biometricMonitor - In the implementation block
@property (nonatomic,retain) CSGestureMonitor * gestureMonitor;                       //@synthesize gestureMonitor=_gestureMonitor - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(unsigned long long)_getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1 ;
-(BOOL)_isUtteranceHandheld;
-(unsigned long long)_getNumberOfWavFilesAt:(id)arg1 ;
-(void)processImplicitTrainingUtterance:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(/*^block*/id)arg7 ;
-(void)setRecordingContext:(NSDictionary *)arg1 ;
-(void)processImplicitTrainingUtteranceWithVoiceTriggerEventInfo:(id)arg1 ;
-(NSURL *)lastCachedUtterance;
-(void)setLastCachedUtterance:(NSURL *)arg1 ;
-(id<CSAudioFileWriter>)uttLogger;
-(void)setUttLogger:(id<CSAudioFileWriter>)arg1 ;
-(NSDictionary *)recordingContext;
-(CSBiometricMatchMonitor *)biometricMonitor;
-(void)setBiometricMonitor:(CSBiometricMatchMonitor *)arg1 ;
-(CSGestureMonitor *)gestureMonitor;
-(void)setGestureMonitor:(CSGestureMonitor *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
