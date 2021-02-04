/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(double)preferredAspectRatio;
-(VCBitrateConfiguration*)bitrateConfiguration;
-(VCHardwareConfiguration*)hardwareConfigurationForPayload:(int)arg1 transportType:(unsigned char)arg2 ;
-(BOOL)setupVideoRulesForPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 formatList:(VCVideoFormat*)arg4 formatListCount:(unsigned)arg5 preferredFormat:(id)arg6 supportsHighDef:(BOOL*)arg7 ;
-(BOOL)supportsHEVCWifiDecoding;
-(BOOL)supportsHEVCWifiEncoding;
-(void)dealloc;
-(id)description;
@end
