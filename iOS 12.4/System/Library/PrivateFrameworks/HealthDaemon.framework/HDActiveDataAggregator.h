/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataAggregator.h>

@protocol OS_dispatch_queue;
@class NSLock, NSMutableDictionary, _HKDelayedOperation, NSObject;

@interface HDActiveDataAggregator : HDDataAggregator {

	NSLock* _aggregationLock;
	NSMutableDictionary* _unaggregatedDataByCollector;
	_HKDelayedOperation* _delayedAggregationOperation;
	NSObject*<OS_dispatch_queue> _delayedAggregationQueue;

}
-(id)initWithDataCollectionManager:(id)arg1 ;
-(double)aggregationInterval;
-(void)_reconsiderDelayedAggregation;
-(id)aggregateSensorData:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 error:(id*)arg6 ;
-(void)_requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(Class)sensorDatumClass;
-(void)_aggregateForCollector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(long long)arg4 ;
-(BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4 ;
-(void)_aggregateForAllDevicesForCollector:(id)arg1 date:(id)arg2 mode:(long long)arg3 ;
-(void)recomputeCollectorConfiguration;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(id)configurationForCollector:(id)arg1 ;
-(void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end
