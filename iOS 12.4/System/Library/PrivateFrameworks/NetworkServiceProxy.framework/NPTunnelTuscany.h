/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <NetworkServiceProxy/NPTunnel.h>

@protocol OS_nw_connection;
@class NSUUID, NSObject, NPTuscanyOnRamp;

@interface NPTunnelTuscany : NPTunnel {

	BOOL _ignoreWaldoTimestamp;
	BOOL _shouldReportUsage;
	BOOL _isFirstTunnel;
	NSUUID* _dayPassUUID;
	void* _clientRef;
	unsigned long long _nextFlowID;
	NSObject*<OS_nw_connection> _UDPSession;
	void* _connectionTimer;
	/*^block*/id _pendingPingCompletionHandler;
	void* _pingTimer;
	void* _usageReportTimer;
	NPTuscanyOnRamp* _onRamp;

}

@property (assign) unsigned long long nextFlowID;                       //@synthesize nextFlowID=_nextFlowID - In the implementation block
@property (retain) NSObject*<OS_nw_connection> UDPSession;              //@synthesize UDPSession=_UDPSession - In the implementation block
@property (assign) void* connectionTimer;                               //@synthesize connectionTimer=_connectionTimer - In the implementation block
@property (assign) BOOL shouldReportUsage;                              //@synthesize shouldReportUsage=_shouldReportUsage - In the implementation block
@property (copy) id pendingPingCompletionHandler;                       //@synthesize pendingPingCompletionHandler=_pendingPingCompletionHandler - In the implementation block
@property (assign) void* pingTimer;                                     //@synthesize pingTimer=_pingTimer - In the implementation block
@property (assign) void* usageReportTimer;                              //@synthesize usageReportTimer=_usageReportTimer - In the implementation block
@property (retain) NPTuscanyOnRamp * onRamp;                            //@synthesize onRamp=_onRamp - In the implementation block
@property (assign) BOOL isFirstTunnel;                                  //@synthesize isFirstTunnel=_isFirstTunnel - In the implementation block
@property (readonly) unsigned dayPassSessionCounter; 
@property (readonly) NSUUID * dayPassUUID;                              //@synthesize dayPassUUID=_dayPassUUID - In the implementation block
@property (readonly) unsigned long long maxFrameSize; 
@property (assign) void* clientRef;                                     //@synthesize clientRef=_clientRef - In the implementation block
@property (readonly) long long currentMTU; 
@property (assign) BOOL ignoreWaldoTimestamp;                           //@synthesize ignoreWaldoTimestamp=_ignoreWaldoTimestamp - In the implementation block
-(id)initWithConfiguration:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 appRule:(id)arg4 flowProperties:(id)arg5 delegate:(id)arg6 ;
-(void)setClientRef:(void*)arg1 ;
-(unsigned long long)maxFrameSize;
-(void*)clientRef;
-(void)destroyConnection;
-(void)createTuscanyClient;
-(unsigned)dayPassSessionCounter;
-(long long)currentMTU;
-(void)startConnectionTimer;
-(void)cancelConnectionTimer;
-(void)cancelConnection;
-(void)sendUsageReportWithSuccess:(BOOL)arg1 rtt:(unsigned long long)arg2 geohash:(id)arg3 fallbackReason:(long long)arg4 ;
-(void)pingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeFlow:(id)arg1 ;
-(id)createConnectionInfo;
-(BOOL)isTFOProbeSucceeded;
-(double)timeIntervalSinceLastUsage;
-(void)handleHelloAck:(unsigned)arg1 ;
-(void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2 ;
-(BOOL)flowIsFirstFlow:(id)arg1 ;
-(void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2 ;
-(long long)sendData:(id)arg1 forFlow:(id)arg2 ;
-(void)handleFlowUsedTunnel;
-(void)handleFallbackForFlow:(id)arg1 ;
-(NSUUID *)dayPassUUID;
-(unsigned long long)maxDataSendSizeForFlow:(id)arg1 ;
-(void)setShouldReportUsage:(BOOL)arg1 ;
-(void*)usageReportTimer;
-(void)setUsageReportTimer:(void*)arg1 ;
-(void)handleConnected;
-(void)handleConnectionError;
-(void)setNextFlowID:(unsigned long long)arg1 ;
-(void)handleDisconnected;
-(NPTuscanyOnRamp *)onRamp;
-(BOOL)canHandleMoreData;
-(BOOL)isFirstTunnel;
-(void)sendDataOnUDPSession:(id)arg1 ;
-(void*)connectionTimer;
-(void)setConnectionTimer:(void*)arg1 ;
-(BOOL)shouldReportUsage;
-(NSObject*<OS_nw_connection>)UDPSession;
-(void)setUDPSession:(NSObject*<OS_nw_connection>)arg1 ;
-(void*)pingTimer;
-(void)setPingTimer:(void*)arg1 ;
-(id)pendingPingCompletionHandler;
-(void)setPendingPingCompletionHandler:(id)arg1 ;
-(void)setIgnoreWaldoTimestamp:(BOOL)arg1 ;
-(unsigned long long)nextFlowID;
-(BOOL)ignoreWaldoTimestamp;
-(void)checkForStaleWaldo:(unsigned)arg1 ;
-(void)handleInputAvailable;
-(void)handleReadData:(nw_frame_array_s*)arg1 ;
-(void)handleEOF;
-(void)handleDataWrittenWithError:(int)arg1 ;
-(void)writeInitialData;
-(unsigned long long)allocateFlowID;
-(void)setOnRamp:(NPTuscanyOnRamp *)arg1 ;
-(void)setIsFirstTunnel:(BOOL)arg1 ;
-(unsigned long long)initialWindowSize;
-(void)dealloc;
-(BOOL)start;
@end
