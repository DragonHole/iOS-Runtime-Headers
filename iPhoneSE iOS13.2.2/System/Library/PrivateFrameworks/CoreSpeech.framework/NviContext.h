/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface NviContext : NSObject {

	BOOL _requestHistoricalAudio;
	BOOL _shouldLogRawSensorData;
	NSDictionary* _voiceTriggerInfo;
	unsigned long long _reqStartAudioSampleId;
	unsigned long long _reqStartMachAbsTime;
	NSString* _rootLogDir;

}

@property (nonatomic,retain) NSDictionary * voiceTriggerInfo;                       //@synthesize voiceTriggerInfo=_voiceTriggerInfo - In the implementation block
@property (assign,nonatomic) BOOL requestHistoricalAudio;                           //@synthesize requestHistoricalAudio=_requestHistoricalAudio - In the implementation block
@property (assign,nonatomic) unsigned long long reqStartAudioSampleId;              //@synthesize reqStartAudioSampleId=_reqStartAudioSampleId - In the implementation block
@property (assign,nonatomic) unsigned long long reqStartMachAbsTime;                //@synthesize reqStartMachAbsTime=_reqStartMachAbsTime - In the implementation block
@property (assign,nonatomic) BOOL shouldLogRawSensorData;                           //@synthesize shouldLogRawSensorData=_shouldLogRawSensorData - In the implementation block
@property (nonatomic,retain) NSString * rootLogDir;                                 //@synthesize rootLogDir=_rootLogDir - In the implementation block
-(id)description;
-(NSDictionary *)voiceTriggerInfo;
-(void)setVoiceTriggerInfo:(NSDictionary *)arg1 ;
-(void)setRequestHistoricalAudio:(BOOL)arg1 ;
-(void)setReqStartAudioSampleId:(unsigned long long)arg1 ;
-(NSString *)rootLogDir;
-(BOOL)requestHistoricalAudio;
-(unsigned long long)reqStartAudioSampleId;
-(unsigned long long)reqStartMachAbsTime;
-(void)setReqStartMachAbsTime:(unsigned long long)arg1 ;
-(BOOL)shouldLogRawSensorData;
-(void)setShouldLogRawSensorData:(BOOL)arg1 ;
-(void)setRootLogDir:(NSString *)arg1 ;
@end
