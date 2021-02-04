/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDDataStreamBulkSendListener.h>
#import <libobjc.A.dylib/HMDSiriAccessoryMonitorDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDNotificationRegistration, HMDSiriRemoteInputServer, HMDSiriAccessoryMonitor, HMDSiriSession, NSString;

@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging> {

	unsigned _targetControlIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	HMDNotificationRegistration* _notificationRegistration;
	HMDSiriRemoteInputServer* _siriInputServer;
	HMDSiriAccessoryMonitor* _siriAccessoryMonitor;
	HMDSiriSession* _siriUISession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;              //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (nonatomic,retain) HMDSiriRemoteInputServer * siriInputServer;                            //@synthesize siriInputServer=_siriInputServer - In the implementation block
@property (nonatomic,retain) HMDSiriAccessoryMonitor * siriAccessoryMonitor;                        //@synthesize siriAccessoryMonitor=_siriAccessoryMonitor - In the implementation block
@property (nonatomic,retain) HMDSiriSession * siriUISession;                                        //@synthesize siriUISession=_siriUISession - In the implementation block
@property (assign,nonatomic) unsigned targetControlIdentifier;                                      //@synthesize targetControlIdentifier=_targetControlIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedSiriServer;
-(void)registerForMessages;
-(void)monitor:(id)arg1 needsSiriCapabilityForAccessory:(id)arg2 ;
-(void)monitor:(id)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2 ;
-(void)monitorHasNoAccessoriesForDragonSiri:(id)arg1 ;
-(void)monitor:(id)arg1 willAllowAccessoryForDragonSiri:(id)arg2 ;
-(void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)handleAccessoryIsReachable:(id)arg1 ;
-(void)handleAccessoryIsNotReachable:(id)arg1 ;
-(void)accessoryDidCloseDataStream:(id)arg1 ;
-(HMDSiriAccessoryMonitor *)siriAccessoryMonitor;
-(unsigned)targetControlIdentifier;
-(void)setTargetControlIdentifier:(unsigned)arg1 ;
-(void)handleAccessoryHasBulkSendDataStream:(id)arg1 ;
-(void)handleAccessoryRemoved:(id)arg1 ;
-(void)_checkSiriSupportByAccessory:(id)arg1 ;
-(HMDSiriRemoteInputServer *)siriInputServer;
-(void)setSiriInputServer:(HMDSiriRemoteInputServer *)arg1 ;
-(HMDSiriSession *)siriUISession;
-(void)setSiriUISession:(HMDSiriSession *)arg1 ;
-(BOOL)_doesAccessorySupportDragonSiri:(id)arg1 siriAudioConfiguration:(id)arg2 ;
-(id)_getBestAudioCodecConfiguration:(id)arg1 ;
-(BOOL)_isAudioCodecSupported:(id)arg1 ;
-(void)_setupSiriPlugin;
-(void)_setupSiriUIContext;
-(void)_tearDownSiriUIContext;
-(void)_tearDownSiriPlugin;
-(void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2 ;
-(void)accessoryDidStartListening:(id)arg1 ;
-(void)setSiriAccessoryMonitor:(HMDSiriAccessoryMonitor *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
