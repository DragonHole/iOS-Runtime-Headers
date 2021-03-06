/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@class NSLock, NSMapTable, HDDataAggregatorConfiguration, HDDataCollectionManager, HKObjectType, NSString;

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver> {

	NSLock* _lock;
	NSMapTable* _lock_collectorRegistry;
	HDDataAggregatorConfiguration* _lock_configuration;
	AB _hasStartedCollectors;
	BOOL _lock_canStartCollectors;
	HDDataCollectionManager* _dataCollectionManager;

}

@property (nonatomic,__weak,readonly) HDDataCollectionManager * dataCollectionManager;              //@synthesize dataCollectionManager=_dataCollectionManager - In the implementation block
@property (copy) HDDataAggregatorConfiguration * configuration; 
@property (nonatomic,copy,readonly) HKObjectType * objectType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDDataCollectionManager *)dataCollectionManager;
-(void)daemonReady:(id)arg1 ;
-(HKObjectType *)objectType;
-(id)diagnosticDescription;
-(void)unregisterDataCollector:(id)arg1 ;
-(void)registerDataCollector:(id)arg1 state:(id)arg2 ;
-(void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3 ;
-(id)initWithDataCollectionManager:(id)arg1 ;
-(BOOL)persistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 error:(id*)arg6 ;
-(BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4 ;
-(double)defaultDataCollectionInterval;
-(id)allCollectors;
-(void)recomputeCollectorConfiguration;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(id)configurationForCollector:(id)arg1 ;
-(void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_keyValueDomain;
-(void)dataCollector:(id)arg1 didChangeState:(id)arg2 ;
-(void)_considerStartingCollectors;
-(void)_startCollector:(id)arg1 ;
-(void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 ;
-(HDDataAggregatorConfiguration *)configuration;
-(void)setConfiguration:(HDDataAggregatorConfiguration *)arg1 ;
-(void)resume;
@end

