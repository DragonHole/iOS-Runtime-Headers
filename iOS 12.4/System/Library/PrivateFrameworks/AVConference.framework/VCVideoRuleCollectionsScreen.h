/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollections.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupH264Rules;
-(BOOL)setupMacDecodingOnlyRules;
-(void)selectPreferredRule:(id)arg1 screenSize:(CGSize)arg2 ;
-(id)initForMacDecodingOnly;
@end

