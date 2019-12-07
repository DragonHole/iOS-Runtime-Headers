/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSMetricsDataSource
@required
-(void)cancel;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;
-(void)removeEvents:(id)arg1 error:(id*)arg2;
-(void)skipEvents:(id)arg1 error:(id*)arg2;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2;

@end
