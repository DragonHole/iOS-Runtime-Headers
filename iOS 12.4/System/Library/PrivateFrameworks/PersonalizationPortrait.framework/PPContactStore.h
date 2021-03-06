/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface PPContactStore : NSObject {

	NSMapTable* _recordLoadingDelegates;
	NSObject*<OS_dispatch_queue> _changeMonitoringQueue;

}
-(void)_sendChangesToDelegates;
-(void)_resetContactNameRecordsWithDelegate:(id)arg1 ;
-(void)_loadContactNameRecordsWithDelegate:(id)arg1 ;
-(BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
@end

