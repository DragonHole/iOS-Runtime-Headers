/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFScheduler : NSObject
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1 ;
+(id)immediateScheduler;
+(id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2 ;
+(id)globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)mainThreadScheduler;
+(id)globalAsyncScheduler;
@end

