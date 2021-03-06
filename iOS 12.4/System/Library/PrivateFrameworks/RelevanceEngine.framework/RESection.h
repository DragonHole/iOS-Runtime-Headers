/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RESectionDelegate.h>

@protocol RESectionDelegate;
@class _RESectionDescriptor, REElementQueue, NSMutableSet, NSMutableDictionary, NSMutableArray, REMLElementComparator, NSString, NSArray;

@interface RESection : NSObject <RESectionDelegate> {

	_RESectionDescriptor* _descriptor;
	REElementQueue* _queue;
	NSMutableSet* _hiddenElements;
	NSMutableDictionary* _elements;
	BOOL _allowsSubsections;
	NSMutableDictionary* _subsections;
	BOOL _performingBatch;
	NSMutableArray* _batchBlocks;
	REMLElementComparator* _comparator;
	id<RESectionDelegate> _delegate;

}

@property (nonatomic,copy) REMLElementComparator * comparator;                   //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic,__weak) id<RESectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long visibleCount; 
@property (assign,nonatomic) long long maximumElements; 
@property (nonatomic,readonly) NSArray * allElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(REMLElementComparator *)comparator;
-(void)setComparator:(REMLElementComparator *)arg1 ;
-(void)_removeSection:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(long long)visibleCount;
-(NSArray *)allElements;
-(long long)_compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3 ;
-(void)setMaximumElements:(long long)arg1 ;
-(void)removeElementWithId:(id)arg1 ;
-(void)addElement:(id)arg1 forceHidden:(BOOL)arg2 ;
-(id)elementIdAtIndex:(unsigned long long)arg1 ;
-(id)section:(id)arg1 groupForIdentifier:(id)arg2 ;
-(id)_groupForIdentifier:(id)arg1 ;
-(id)initWithSectionDescriptor:(id)arg1 comparator:(id)arg2 ;
-(void)_addElement:(id)arg1 forceHidden:(BOOL)arg2 ;
-(void)_performOrEnqueueBlock:(/*^block*/id)arg1 ;
-(id)_groupIdentifierForElement:(id)arg1 ;
-(id)_createSectionForGroup:(id)arg1 ;
-(void)_removeElementWithId:(id)arg1 ;
-(void)_updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(BOOL)arg3 ;
-(void)updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(BOOL)arg3 ;
-(void)sectionDidUpdateContentOrder:(id)arg1 ;
-(long long)indexOfElementWithId:(id)arg1 ;
-(long long)maximumElements;
-(BOOL)containsElementWithId:(id)arg1 ;
-(long long)_mappedIndexFromIndex:(long long)arg1 ;
-(long long)count;
-(NSString *)name;
-(void)setDelegate:(id<RESectionDelegate>)arg1 ;
-(id<RESectionDelegate>)delegate;
@end

