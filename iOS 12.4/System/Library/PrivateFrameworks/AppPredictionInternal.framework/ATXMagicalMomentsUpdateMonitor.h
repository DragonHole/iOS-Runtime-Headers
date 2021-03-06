/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSDate, NSObject, PMMPredictionNotification;

@interface ATXMagicalMomentsUpdateMonitor : NSObject {

	NSDictionary* _predictionMap;
	NSDate* _expiration;
	unsigned long long _mmPredictionCount;
	NSObject*<OS_dispatch_queue> _queue;
	PMMPredictionNotification* _mmUpdateListener;
	unsigned long long _limit;

}

@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
-(unsigned long long)limit;
-(void)dropCacheIfExpired;
-(id)predictionsForBundleId:(id)arg1 ;
-(unsigned long long)mmPredictionCount;
-(void)setupUpdateListener;
-(void)updatePredictionsWith:(id)arg1 consumer:(unsigned long long)arg2 ;
-(void)_setPredictions:(id)arg1 expiration:(id)arg2 totalPredictionCount:(unsigned long long)arg3 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)init;
@end

