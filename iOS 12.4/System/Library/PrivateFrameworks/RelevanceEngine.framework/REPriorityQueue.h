/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {

	CFBinaryHeapRef _binaryHeap;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                          //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id minimumObject; 
-(id)comparator;
-(void)insertObject:(id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(id)minimumObject;
-(void)removeMinimumObject;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(unsigned long long)hash;
-(id)description;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
@end

