/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistorySessions.h>

@class NSArray;

@interface WBSHistorySessionsSnapshot : NSObject <WBSHistorySessions> {

	NSArray* _sessions;

}

@property (nonatomic,copy,readonly) NSArray * orderedSessions; 
@property (nonatomic,readonly) unsigned long long numberOfSessions; 
-(NSArray *)orderedSessions;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithSessions:(id)arg1 ;
-(unsigned long long)numberOfItemsVisitedInSession:(id)arg1 ;
-(id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)itemsLastVisitedInSession:(id)arg1 ;
-(unsigned long long)numberOfSessions;
-(id)init;
@end

