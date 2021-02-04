/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DKObjectFromMOCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _cacheEntries;
	NSMutableDictionary* _cacheHits;
	NSMutableDictionary* _cacheMisses;

}

@property (retain) NSMutableDictionary * cacheEntries;              //@synthesize cacheEntries=_cacheEntries - In the implementation block
@property (retain) NSMutableDictionary * cacheHits;                 //@synthesize cacheHits=_cacheHits - In the implementation block
@property (retain) NSMutableDictionary * cacheMisses;               //@synthesize cacheMisses=_cacheMisses - In the implementation block
@property (retain) NSMutableDictionary * cache;                     //@synthesize cache=_cache - In the implementation block
-(NSMutableDictionary *)cacheHits;
-(NSMutableDictionary *)cacheMisses;
-(void)setCacheHits:(NSMutableDictionary *)arg1 ;
-(void)setCacheMisses:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 type:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 type:(id)arg3 ;
-(id)objectForKey:(id)arg1 type:(id)arg2 setIfMissingWithBlock:(/*^block*/id)arg3 ;
-(id)initWithReporting;
-(void)reportMetrics;
-(void)removeObjectForKey:(id)arg1 type:(id)arg2 ;
-(id)deduplicateString:(id)arg1 ;
-(NSMutableDictionary *)cacheEntries;
-(void)setCacheEntries:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
@end
