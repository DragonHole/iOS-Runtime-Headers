/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary {

	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(unsigned)tilesPerFrame:(int)arg1 ;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
@end
