/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _HDDataFaker;

@interface HDDemoManager : NSObject {

	_HDDataFaker* _faker;

}
-(void)stopFakingData;
-(void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(/*^block*/id)arg3 ;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isProvidingData;
@end

