/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSDictionary;

@interface HDCorrelationQueryServer : HDBatchedQueryServer {

	BOOL _permitPartiallyFilteredCorrelations;
	BOOL _suspended;
	NSDictionary* _dataFilters;

}

@property (nonatomic,readonly) NSDictionary * dataFilters;              //@synthesize dataFilters=_dataFilters - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(NSDictionary *)dataFilters;
@end

