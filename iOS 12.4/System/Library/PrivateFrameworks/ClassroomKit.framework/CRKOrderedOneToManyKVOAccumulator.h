/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKOrderedOneToManyKVOAccumulatorDelegate;
@class CRKPointerSet, NSMapTable, NSMutableArray, NSString, NSObject;

@interface CRKOrderedOneToManyKVOAccumulator : NSObject {

	CRKPointerSet* mInsertedObjects;
	CRKPointerSet* mReplacementObjects;
	NSMapTable* mIndexForDeletedObject;
	NSMapTable* mOriginalIndexOfMovedObject;
	NSMutableArray* mObservedShadow;
	long long mInitialArrayCount;
	id<CRKOrderedOneToManyKVOAccumulatorDelegate> _delegate;
	NSString* _observedKeyPath;
	NSObject* _observedObject;

}

@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy) NSString * observedKeyPath;                                                   //@synthesize observedKeyPath=_observedKeyPath - In the implementation block
@property (assign,nonatomic,__weak) NSObject * observedObject;                                           //@synthesize observedObject=_observedObject - In the implementation block
@property (assign,nonatomic,__weak) id<CRKOrderedOneToManyKVOAccumulatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_drain;
-(void)setObservedObject:(NSObject *)arg1 ;
-(BOOL)hasChanges;
-(NSString *)observedKeyPath;
-(BOOL)_integrateChange:(id)arg1 toArray:(id)arg2 ;
-(unsigned long long)_prestateIndexForImmediateIndex:(unsigned long long)arg1 ;
-(void)_validateArrayChangeToFinalCount:(long long)arg1 accumulatedResults:(id)arg2 ;
-(id)_resultsToArriveAtArray:(id)arg1 ;
-(void)setObservedKeyPath:(NSString *)arg1 ;
-(NSObject *)observedObject;
-(void)dealloc;
-(void)setDelegate:(id<CRKOrderedOneToManyKVOAccumulatorDelegate>)arg1 ;
-(id<CRKOrderedOneToManyKVOAccumulatorDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_reset;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 ;
@end

