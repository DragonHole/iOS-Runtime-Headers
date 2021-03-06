/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TAStoreSettings : NSObject <NSCopying> {

	unsigned long long _bufferCapacity;
	unsigned long long _poiSnapshotCapacity;
	double _bufferTimeIntervalOfRetention;
	unsigned long long _poiDisplayBufferCapacity;
	unsigned long long _interVisitMetricSnapshotCapacity;
	double _thresholdOfLocationRelevance;
	double _interVisitSnapshotUpdateInterval;
	double _snapshotBufferTimeIntervalOfRetention;
	unsigned long long _loiBufferPerTypeCapacity;
	double _loiBufferTimeIntervalOfRetention;

}

@property (nonatomic,readonly) unsigned long long bufferCapacity;                                //@synthesize bufferCapacity=_bufferCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long poiSnapshotCapacity;                           //@synthesize poiSnapshotCapacity=_poiSnapshotCapacity - In the implementation block
@property (nonatomic,readonly) double bufferTimeIntervalOfRetention;                             //@synthesize bufferTimeIntervalOfRetention=_bufferTimeIntervalOfRetention - In the implementation block
@property (nonatomic,readonly) unsigned long long poiDisplayBufferCapacity;                      //@synthesize poiDisplayBufferCapacity=_poiDisplayBufferCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long interVisitMetricSnapshotCapacity;              //@synthesize interVisitMetricSnapshotCapacity=_interVisitMetricSnapshotCapacity - In the implementation block
@property (nonatomic,readonly) double thresholdOfLocationRelevance;                              //@synthesize thresholdOfLocationRelevance=_thresholdOfLocationRelevance - In the implementation block
@property (nonatomic,readonly) double interVisitSnapshotUpdateInterval;                          //@synthesize interVisitSnapshotUpdateInterval=_interVisitSnapshotUpdateInterval - In the implementation block
@property (nonatomic,readonly) double snapshotBufferTimeIntervalOfRetention;                     //@synthesize snapshotBufferTimeIntervalOfRetention=_snapshotBufferTimeIntervalOfRetention - In the implementation block
@property (nonatomic,readonly) unsigned long long loiBufferPerTypeCapacity;                      //@synthesize loiBufferPerTypeCapacity=_loiBufferPerTypeCapacity - In the implementation block
@property (nonatomic,readonly) double loiBufferTimeIntervalOfRetention;                          //@synthesize loiBufferTimeIntervalOfRetention=_loiBufferTimeIntervalOfRetention - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)thresholdOfLocationRelevance;
-(id)initWithBufferCapacityOrDefault:(id)arg1 poiSnapshotCapacityOrDefault:(id)arg2 bufferTimeIntervalOfRetentionOrDefault:(id)arg3 poiDisplayBufferCapacityOrDefault:(id)arg4 interVisitMetricSnapshotCapacityOrDefault:(id)arg5 thresholdOfLocationRelevanceOrDefault:(id)arg6 interVisitSnapshotUpdateIntervalOrDefault:(id)arg7 snapshotBufferTimeIntervalOfRetentionOrDefault:(id)arg8 loiBufferPerTypeCapacityOrDefault:(id)arg9 loiBufferTimeIntervalOfRetentionOrDefault:(id)arg10 ;
-(unsigned long long)bufferCapacity;
-(double)bufferTimeIntervalOfRetention;
-(unsigned long long)loiBufferPerTypeCapacity;
-(double)loiBufferTimeIntervalOfRetention;
-(unsigned long long)poiSnapshotCapacity;
-(unsigned long long)poiDisplayBufferCapacity;
-(unsigned long long)interVisitMetricSnapshotCapacity;
-(double)interVisitSnapshotUpdateInterval;
-(double)snapshotBufferTimeIntervalOfRetention;
-(id)initWithBufferCapacity:(unsigned long long)arg1 poiSnapshotCapacity:(unsigned long long)arg2 bufferTimeIntervalOfRetention:(double)arg3 poiDisplayBufferCapacity:(unsigned long long)arg4 interVisitMetricSnapshotCapacity:(unsigned long long)arg5 thresholdOfLocationRelevance:(double)arg6 interVisitSnapshotUpdateInterval:(double)arg7 snapshotBufferTimeIntervalOfRetention:(double)arg8 loiBufferPerTypeCapacity:(unsigned long long)arg9 loiBufferTimeIntervalOfRetention:(double)arg10 ;
@end

