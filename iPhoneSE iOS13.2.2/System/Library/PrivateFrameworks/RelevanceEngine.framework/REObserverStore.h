/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSHashTable, NSArray;

@interface REObserverStore : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObservers; 
-(id)init;
-(unsigned long long)count;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)allObservers;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFunctionsOptions:(unsigned long long)arg1 ;
@end

