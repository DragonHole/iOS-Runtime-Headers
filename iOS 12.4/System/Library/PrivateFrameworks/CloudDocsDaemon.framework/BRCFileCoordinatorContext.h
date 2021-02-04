/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class brc_task_tracker, NSObject;

@interface BRCFileCoordinatorContext : NSObject {

	int _startTracingCode;
	int _endTracingCode;
	brc_task_tracker* _tracker;
	unsigned long long _sections;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) brc_task_tracker * tracker;                      //@synthesize tracker=_tracker - In the implementation block
@property (assign,nonatomic) unsigned long long sections;                     //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) int startTracingCode;                            //@synthesize startTracingCode=_startTracingCode - In the implementation block
@property (assign,nonatomic) int endTracingCode;                              //@synthesize endTracingCode=_endTracingCode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(brc_task_tracker *)tracker;
-(void)setTracker:(brc_task_tracker *)arg1 ;
-(void)setStartTracingCode:(int)arg1 ;
-(void)setEndTracingCode:(int)arg1 ;
-(id)initWithTracker:(id)arg1 queue:(id)arg2 startCode:(int)arg3 endCode:(int)arg4 ;
-(int)startTracingCode;
-(int)endTracingCode;
-(unsigned long long)sections;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setSections:(unsigned long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
