/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCameraProfile, HMCameraStream, HFCharacteristicValueManager;

@interface HFCameraAudioManager : NSObject {

	HMCameraProfile* _cameraProfile;
	HMCameraStream* _cameraStream;
	HFCharacteristicValueManager* _valueManager;

}

@property (nonatomic,retain) HMCameraProfile * cameraProfile;                                        //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) HMCameraStream * cameraStream;                                          //@synthesize cameraStream=_cameraStream - In the implementation block
@property (nonatomic,retain) HFCharacteristicValueManager * valueManager;                            //@synthesize valueManager=_valueManager - In the implementation block
@property (getter=isOutgoingAudioEnabled,nonatomic,readonly) BOOL outgoingAudioEnabled; 
@property (getter=isIncomingAudioEnabled,nonatomic,readonly) BOOL incomingAudioEnabled; 
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(void)setCameraStream:(HMCameraStream *)arg1 ;
-(void)setValueManager:(HFCharacteristicValueManager *)arg1 ;
-(id)_updateAudioStreamSetting:(unsigned long long)arg1 ;
-(id)enableRemoteSpeakerIfNecessary;
-(id)enableRemoteMicrophoneIfNecessary;
-(id)_enableAudioIfNecessaryForAudioControl:(id)arg1 minVolume:(float)arg2 ;
-(id)_readValuesForCharacteristics:(id)arg1 ;
-(id)_writeValuesForCharacteristics:(id)arg1 ;
-(HFCharacteristicValueManager *)valueManager;
-(BOOL)isOutgoingAudioEnabled;
-(id)setOutgoingAudioEnabled:(BOOL)arg1 ;
-(HMCameraStream *)cameraStream;
-(id)initWithCameraProfile:(id)arg1 cameraStream:(id)arg2 valueManager:(id)arg3 ;
-(BOOL)isIncomingAudioEnabled;
-(id)setIncomingAudioEnabled:(BOOL)arg1 ;
-(HMCameraProfile *)cameraProfile;
-(unsigned long long)audioStreamSetting;
@end

