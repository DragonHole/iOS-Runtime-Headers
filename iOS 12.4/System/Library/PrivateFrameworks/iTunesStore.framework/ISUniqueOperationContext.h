/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {

	NSMutableSet* _operations;
	NSMutableDictionary* _uniqueOperations;

}
-(unsigned long long)countOfOperations;
-(id)uniqueOperationForKey:(id)arg1 ;
-(void)setUniqueOperation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsOperation:(id)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
@end

