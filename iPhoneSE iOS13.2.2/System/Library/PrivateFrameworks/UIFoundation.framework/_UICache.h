/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface _UICache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_source> _memoryWarningsSource;
	BOOL _clearsCacheOnLowMemoryWarnings;
	BOOL _clearsCacheOnApplicationBackground;
	id _noteObserver;

}

@property (assign,nonatomic) BOOL clearsCacheOnLowMemoryWarnings; 
@property (assign,nonatomic) BOOL clearsCacheOnApplicationBackground; 
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setClearsCacheOnLowMemoryWarnings:(BOOL)arg1 ;
-(void)setClearsCacheOnApplicationBackground:(BOOL)arg1 ;
-(BOOL)clearsCacheOnLowMemoryWarnings;
-(BOOL)clearsCacheOnApplicationBackground;
-(id)cacheKeys;
@end

