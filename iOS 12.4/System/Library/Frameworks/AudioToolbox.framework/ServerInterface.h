/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ServerInterface
@required
-(void)getClientID:(/*^block*/id)arg1;
-(void)allocateClientResources:(/*^block*/id)arg1;
-(void)releaseClientResources;
-(void)getHapticLatency:(/*^block*/id)arg1;
-(void)setPlayerBehavior:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadHapticSequence:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadHapticPattern:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)prewarm:(/*^block*/id)arg1;
-(void)startRunning:(/*^block*/id)arg1;
-(void)setDoneReply:(/*^block*/id)arg1;
-(void)stopRunning;
-(void)stopPrewarm;

@end

