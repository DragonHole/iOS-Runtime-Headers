/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUIInternal/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class NSObject, SPZKWSession;

@interface SPUISearchModelZKW : SPUISearchModel {

	NSObject*<OS_dispatch_queue> _queryProcessor;
	BOOL _shouldCacheResults;
	BOOL _newQuery;
	SPZKWSession* _session;

}

@property (nonatomic,retain) SPZKWSession * session;              //@synthesize session=_session - In the implementation block
-(id)init;
-(void)dealloc;
-(SPZKWSession *)session;
-(void)setSession:(SPZKWSession *)arg1 ;
-(void)updateAtUIPriorityWithQueryContext:(id)arg1 ;
-(void)updateWithQueryContext:(id)arg1 ;
-(void)updateWithQueryContext:(id)arg1 uiPriority:(BOOL)arg2 ;
@end
