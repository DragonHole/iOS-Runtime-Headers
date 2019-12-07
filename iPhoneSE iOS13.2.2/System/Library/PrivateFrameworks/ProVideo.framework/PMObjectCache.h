/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRecursiveLock, NSMapTable;

@interface PMObjectCache : NSObject {

	NSRecursiveLock* _cacheLock;
	int _purgesInProgress;
	unsigned long long _currentSize;
	unsigned long long _setSize;
	unsigned long long _maxSize;
	unsigned long long _reservedMemory;
	unsigned long long _numberOfCalls;
	NSMapTable* _mapTable;
	float _responseRate;
	float _decayRate;
	float _penalty;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)dealloc;
-(void)clearCache;
-(void)removeObjectForKey:(id)arg1 ;
-(unsigned long long)currentSize;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 ;
-(id)copyObjectForKey:(id)arg1 cost:(double*)arg2 ;
-(id)copyObjectForKeyDontUpdateAccessTime:(id)arg1 cost:(double*)arg2 ;
-(void)shutdownCache;
-(int)addObject:(id)arg1 cacheKey:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 retDidAddObject:(BOOL*)arg5 ;
-(id)copyObjectForKeyImpl:(id)arg1 cost:(double*)arg2 updateAccessTime:(BOOL)arg3 ;
-(unsigned long long)reservedMemorySize;
-(unsigned long long)getCacheMemoryUsed;
-(unsigned long long)getCacheSize;
-(void)reserveCacheMemory:(long long)arg1 ;
@end
