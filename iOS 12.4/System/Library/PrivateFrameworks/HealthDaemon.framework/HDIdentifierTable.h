/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface HDIdentifierTable : NSObject {

	NSMapTable* _map;
	unsigned long long _nextIdentifier;

}

@property (nonatomic,retain) NSMapTable * map;                               //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) unsigned long long nextIdentifier;              //@synthesize nextIdentifier=_nextIdentifier - In the implementation block
-(NSMapTable *)map;
-(void)removeObjectWithIdentifier:(unsigned long long)arg1 ;
-(id)objectWithIdentifier:(unsigned long long)arg1 ;
-(void)setMap:(NSMapTable *)arg1 ;
-(unsigned long long)nextIdentifier;
-(void)setNextIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)addObject:(id)arg1 ;
-(unsigned long long)count;
-(id)allObjects;
-(void)removeAllObjects;
@end

