/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface BRCFairScheduler : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	unsigned long long _maxRegistedSourceBit;
	unsigned long long _lastVisitedBit;
	NSMutableDictionary* _sourceForBitIndex;
	BOOL _resumed;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
-(void)addSource:(id)arg1 ;
-(id)initWithQueue:(id)arg1 name:(id)arg2 ;
-(id)sourceForBitIndex:(unsigned long long)arg1 ;
-(void)unregisterSources;
-(void)signalSourceForBitIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)close;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)suspend;
-(void)schedule;
@end

