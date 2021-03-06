/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFServiceMaintenance.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CFBackgroundActionService : NSObject <AFServiceMaintenance> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(void)handleBackgroundActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleBackgroundAction:(id)arg1 onDispatchGroup:(id)arg2 ;
-(void)_scriptCheckSumsWithCompletion:(/*^block*/id)arg1 ;
-(void)performMaintenanceWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

