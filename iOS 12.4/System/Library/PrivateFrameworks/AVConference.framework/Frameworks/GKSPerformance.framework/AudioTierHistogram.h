/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, AudioTier, NSObject;

@interface AudioTierHistogram : NSObject {

	NSMutableDictionary* histogram;
	AudioTier* currentTier;
	double startTime;
	NSObject*<OS_dispatch_queue> awdAudioTierQueue;

}
-(id)newReport;
-(void)newAudioTier:(unsigned)arg1 duplication:(unsigned)arg2 bundling:(unsigned)arg3 codecPayload:(unsigned)arg4 codecBitrate:(unsigned)arg5 mode:(unsigned)arg6 ;
-(void)accumulateTime:(double)arg1 forAudioTier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)end;
@end

