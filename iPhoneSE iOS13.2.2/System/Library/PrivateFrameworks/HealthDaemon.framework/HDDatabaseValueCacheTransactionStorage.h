/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject {

	BOOL _didRemoveAllObjects;
	NSMutableDictionary* _cache;
	long long _cacheScope;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) long long cacheScope;                     //@synthesize cacheScope=_cacheScope - In the implementation block
@property (assign,nonatomic) BOOL didRemoveAllObjects;                 //@synthesize didRemoveAllObjects=_didRemoveAllObjects - In the implementation block
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(void)setCacheScope:(long long)arg1 ;
-(long long)cacheScope;
-(BOOL)didRemoveAllObjects;
-(void)setDidRemoveAllObjects:(BOOL)arg1 ;
@end
