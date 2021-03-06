/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject {

	SCD_Struct_PV20 _lastTime;
	unsigned _throttledFPS;
	HGSynchronizable* _lock;
	PVLivePlayer* _player;

}
-(id)init;
-(void)dealloc;
-(void)teardown;
-(void)rebuild;
-(unsigned)_throttledRenderLinkFPS_NoLock;
-(unsigned)throttledFPS;
-(BOOL)skipThrottledRenderLinkTime:(SCD_Struct_PV20)arg1 ;
-(void)registerWithPlayer:(id)arg1 ;
-(BOOL)setThrottledFPS:(unsigned)arg1 ;
-(unsigned)thermalPolicyThrottledFPS;
-(void)signalPlayer:(SCD_Struct_PV20)arg1 ;
-(void)signalDroppedRenderLink;
@end

