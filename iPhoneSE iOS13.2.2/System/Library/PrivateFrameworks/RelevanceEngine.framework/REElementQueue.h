/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REOrderingArray, NSMutableSet, NSArray;

@interface REElementQueue : NSObject {

	REOrderingArray* _relevantElements;
	NSMutableSet* _hiddenElements;
	NSArray* _comparators;
	long long _maximumRelevantElementsCount;

}

@property (nonatomic,copy,readonly) NSArray * comparators;                        //@synthesize comparators=_comparators - In the implementation block
@property (assign,nonatomic) long long maximumRelevantElementsCount;              //@synthesize maximumRelevantElementsCount=_maximumRelevantElementsCount - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long visibleCount; 
@property (nonatomic,readonly) NSArray * allElements; 
-(long long)count;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(void)removeElement:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(long long)visibleCount;
-(NSArray *)comparators;
-(NSArray *)allElements;
-(id)initWithMaximumRelevantElementsCount:(long long)arg1 comparators:(id)arg2 ;
-(void)setMaximumRelevantElementsCount:(long long)arg1 ;
-(long long)maximumRelevantElementsCount;
-(void)addElement:(id)arg1 hidden:(BOOL)arg2 ;
-(void)updatePositionForElement:(id)arg1 hidden:(BOOL)arg2 ;
-(long long)indexOfElement:(id)arg1 ;
-(BOOL)containsElement:(id)arg1 ;
-(void)updateAllElements;
@end

