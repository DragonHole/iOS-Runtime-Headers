/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsEmbeddedProtocol.h>

@class NSString;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {

	NSString* _deviceName;
	int _screenWidth;
	int _screenHeight;
	int _deviceClass;
	long long _chipId;
	long long _videoEncoderType;
	BOOL _hasBaseband;

}

@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) BOOL hasBaseband; 
@property (nonatomic,readonly) int screenWidth; 
@property (nonatomic,readonly) int screenHeight; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) long long chipId; 
@property (nonatomic,readonly) long long videoEncoderType; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
+(id)sharedInstance;
-(long long)deviceClass;
-(long long)chipId;
-(BOOL)isDeviceLargeScreen;
-(BOOL)hasBaseband;
-(unsigned)maxActiveVideoDecoders;
-(void)initializeScreenDimension;
-(unsigned)maxActiveVideoEncoders;
-(int)screenWidth;
-(int)screenHeight;
-(long long)videoEncoderType;
-(BOOL)useSoftFramerateSwitching;
-(NSString *)deviceName;
-(id)init;
-(void)dealloc;
@end
