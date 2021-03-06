/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MXService : NSObject {

	BOOL _isStarted;
	long long _sourceID;

}

@property (readonly) BOOL isStarted;                  //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) long long sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
-(id)init;
-(BOOL)isStarted;
-(long long)sourceID;
-(BOOL)startService;
-(BOOL)stopService;
-(BOOL)metricsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)initWithSourceID:(long long)arg1 ;
@end

