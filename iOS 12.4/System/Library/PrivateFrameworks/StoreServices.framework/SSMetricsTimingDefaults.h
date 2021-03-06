/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSCoalescingQueue, NSDictionary;

@interface SSMetricsTimingDefaults : NSObject {

	BOOL _runningTests;
	SSCoalescingQueue* _updateQueue;
	NSDictionary* _cachedValues;

}

@property (nonatomic,retain) SSCoalescingQueue * updateQueue;                      //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedValues;                          //@synthesize cachedValues=_cachedValues - In the implementation block
@property (assign,getter=isRunningTests,nonatomic) BOOL runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (readonly) NSDictionary * values; 
@property (readonly) double sessionDurationLoadURL; 
@property (readonly) double samplingPercentageUsersLoadURL; 
@property (readonly) double samplingPercentageCachedResponsesLoadURL; 
@property (readonly) double sessionDurationPageRender; 
@property (readonly) double samplingPercentageUsersPageRender; 
+(id)sharedInstanceWithSessionDelegate:(id)arg1 ;
+(id)sharedInstance;
-(id)initWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)cachedValues;
-(void)setCachedValues:(NSDictionary *)arg1 ;
-(SSCoalescingQueue *)updateQueue;
-(double)sessionDurationLoadURL;
-(double)samplingPercentageUsersLoadURL;
-(double)samplingPercentageCachedResponsesLoadURL;
-(void)setUpdateQueue:(SSCoalescingQueue *)arg1 ;
-(void)setRunningTests:(BOOL)arg1 ;
-(BOOL)isRunningTests;
-(double)sessionDurationPageRender;
-(double)samplingPercentageUsersPageRender;
-(void)update;
-(NSDictionary *)values;
@end

