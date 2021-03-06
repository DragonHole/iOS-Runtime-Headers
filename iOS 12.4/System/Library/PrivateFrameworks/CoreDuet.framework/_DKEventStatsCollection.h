/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface _DKEventStatsCollection : NSObject {

	NSMutableDictionary* _eventCounterStats;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)collectionWithName:(id)arg1 ;
+(id)allEventStatsCollections;
+(id)counterWithClass:(Class)arg1 collectionName:(id)arg2 eventName:(id)arg3 eventType:(id)arg4 eventTypePossibleValues:(id)arg5 hasResult:(BOOL)arg6 scalar:(BOOL)arg7 ;
-(id)eventStatsCounterWithKey:(id)arg1 ;
-(void)addEventStatsCounter:(id)arg1 withKey:(id)arg2 ;
-(id)allEventStatsCounters;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

