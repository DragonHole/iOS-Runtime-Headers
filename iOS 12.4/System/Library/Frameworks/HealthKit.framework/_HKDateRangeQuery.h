/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKDateRangeQueryClientInterface.h>

@class NSString;

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface> {

	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)client_deliverDateRangeDictionary:(NSDictionary*)arg1 forQuery:(id)arg2 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
@end

