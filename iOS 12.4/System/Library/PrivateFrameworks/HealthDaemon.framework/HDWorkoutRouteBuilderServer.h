/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSeriesBuilderServer.h>
#import <libobjc.A.dylib/HKWorkoutRouteBuilderServerInterface.h>

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface> {

	HKWorkoutRoute* _route;

}

@property (nonatomic,retain) HKWorkoutRoute * route;                //@synthesize route=_route - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(HKWorkoutRoute *)route;
-(void)setRoute:(HKWorkoutRoute *)arg1 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(id)seriesSample;
-(void)createSeriesSampleIfNeeded:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)queue_recoverBuilder;
-(void)_queue_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_validateRouteData:(id)arg1 error:(out id*)arg2 ;
-(void)remote_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)server_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)exportedInterface;
@end

