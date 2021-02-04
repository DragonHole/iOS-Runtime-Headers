/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKSyncServiceTransport <NSObject>
@property (nonatomic,readonly) unsigned long long connectivityState; 
@property (assign,nonatomic) BOOL forceFailureForAllRequests; 
@property (assign,nonatomic) BOOL simulateCloudConnectedOnly; 
@optional
-(void)forceFailureForNextRequest;
-(BOOL)forceFailureForAllRequests;
-(void)setForceFailureForAllRequests:(BOOL)arg1;
-(BOOL)simulateCloudConnectedOnly;
-(void)setSimulateCloudConnectedOnly:(BOOL)arg1;

@required
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(BOOL)arg4 allowCloudDelivery:(BOOL)arg5;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(BOOL)arg5;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
-(unsigned long long)connectivityState;

@end
