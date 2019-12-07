/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFNetAddress, NSData, HAPSecuritySessionEncryption, NSMutableArray;

@interface HMDDataStreamSetup : NSObject {

	HMFNetAddress* _remoteNetAddress;
	NSData* _controllerKeySalt;
	NSData* _accessoryKeySalt;
	long long _remoteTcpPort;
	HAPSecuritySessionEncryption* _sessionEncryption;
	NSMutableArray* _pendingBulkSendListeners;

}

@property (nonatomic,retain) HMFNetAddress * remoteNetAddress;                              //@synthesize remoteNetAddress=_remoteNetAddress - In the implementation block
@property (nonatomic,retain) NSData * controllerKeySalt;                                    //@synthesize controllerKeySalt=_controllerKeySalt - In the implementation block
@property (nonatomic,retain) NSData * accessoryKeySalt;                                     //@synthesize accessoryKeySalt=_accessoryKeySalt - In the implementation block
@property (assign,nonatomic) long long remoteTcpPort;                                       //@synthesize remoteTcpPort=_remoteTcpPort - In the implementation block
@property (nonatomic,retain) HAPSecuritySessionEncryption * sessionEncryption;              //@synthesize sessionEncryption=_sessionEncryption - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingBulkSendListeners;                     //@synthesize pendingBulkSendListeners=_pendingBulkSendListeners - In the implementation block
-(id)init;
-(BOOL)isComplete;
-(HAPSecuritySessionEncryption *)sessionEncryption;
-(void)setSessionEncryption:(HAPSecuritySessionEncryption *)arg1 ;
-(void)setControllerKeySalt:(NSData *)arg1 ;
-(NSData *)controllerKeySalt;
-(void)setAccessoryKeySalt:(NSData *)arg1 ;
-(NSData *)accessoryKeySalt;
-(HMFNetAddress *)remoteNetAddress;
-(long long)remoteTcpPort;
-(id)fullKeySalt;
-(void)setRemoteNetAddress:(HMFNetAddress *)arg1 ;
-(void)setRemoteTcpPort:(long long)arg1 ;
-(NSMutableArray *)pendingBulkSendListeners;
-(void)setPendingBulkSendListeners:(NSMutableArray *)arg1 ;
@end
