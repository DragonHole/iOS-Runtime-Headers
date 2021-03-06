/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViceroyTrace/MultiwaySegment.h>

@interface DownlinkSegment : MultiwaySegment {

	double _videoDegradedStartTime;
	BOOL _isVideoDegraded;
	unsigned _videoDegradedTotalCounter;
	double _videoDegradedTotalTime;

}

@property (assign) double videoDegradedStartTime;                   //@synthesize videoDegradedStartTime=_videoDegradedStartTime - In the implementation block
@property (assign) BOOL isVideoDegraded;                            //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign) unsigned videoDegradedTotalCounter;              //@synthesize videoDegradedTotalCounter=_videoDegradedTotalCounter - In the implementation block
@property (assign) double videoDegradedTotalTime;                   //@synthesize videoDegradedTotalTime=_videoDegradedTotalTime - In the implementation block
-(id)segmentReport;
-(void)processVideoDegraded:(BOOL)arg1 ;
-(double)videoDegradedTotalTime;
-(void)setVideoDegradedTotalTime:(double)arg1 ;
-(double)videoDegradedStartTime;
-(void)setVideoDegradedStartTime:(double)arg1 ;
-(unsigned)videoDegradedTotalCounter;
-(void)setVideoDegradedTotalCounter:(unsigned)arg1 ;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
-(BOOL)isVideoDegraded;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(void)dealloc;
@end

