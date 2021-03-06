/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute {

	void* _logicalLeaderOutputDevice;
	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * outputDevices;                            //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) void* logicalLeaderOutputDevice;                    //@synthesize logicalLeaderOutputDevice=_logicalLeaderOutputDevice - In the implementation block
@property (getter=isGroupLeader,nonatomic,readonly) BOOL groupLeader; 
+(void*)logicalLeaderFromOutputDevices:(id)arg1 ;
+(long long)pickableRouteTypeForOutputDevice:(void*)arg1 ;
+(id)localDeviceUID;
-(long long)routeType;
-(id)routeName;
-(long long)routeSubtype;
-(BOOL)isPickedOnPairedDevice;
-(id)playingPairedDeviceName;
-(id)routeUID;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)isAppleTVRoute;
-(NSArray *)outputDevices;
-(id)initWithOutputDevices:(id)arg1 ;
-(long long)pickableRouteType;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isDeviceRoute;
-(BOOL)supportsWirelessDisplay;
-(BOOL)isCarplayRoute;
-(BOOL)isHomePodRoute;
-(BOOL)isStereoPair;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isAirPlayRoute;
-(BOOL)supportsGrouping;
-(BOOL)isDeviceSpeakerRoute;
-(void*)logicalLeaderOutputDevice;
-(BOOL)requiresPassword;
-(BOOL)_anyOutputDevicePassesMRFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)_anyOutputDevicePassesTest:(/*^block*/id)arg1 ;
-(BOOL)isGroupLeader;
-(id)productIdentifier;
-(id)groupUID;
-(id)description;
@end

