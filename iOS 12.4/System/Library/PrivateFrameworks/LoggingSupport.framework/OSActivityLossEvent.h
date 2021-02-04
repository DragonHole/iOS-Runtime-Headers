/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityLossEvent : OSActivityEvent {

	BOOL _saturated;
	unsigned _count;
	unsigned long long _startMachTimestamp;
	unsigned long long _endMachTimestamp;

}

@property (nonatomic,readonly) unsigned long long startMachTimestamp;              //@synthesize startMachTimestamp=_startMachTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachTimestamp;                //@synthesize endMachTimestamp=_endMachTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned count;                                     //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL saturated;                                     //@synthesize saturated=_saturated - In the implementation block
-(void)_addProperties:(id)arg1 ;
-(BOOL)saturated;
-(unsigned long long)startMachTimestamp;
-(unsigned long long)endMachTimestamp;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(unsigned)count;
@end
