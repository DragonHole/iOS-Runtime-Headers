/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <libobjc.A.dylib/RERelevanceEngineObserver.h>
#import <libobjc.A.dylib/_REUIControllerTrainingContextDelegate.h>

@protocol REUIRelevanceEngineControllerDelegate;
@class NSMutableDictionary, NSArray, NSMutableSet, NSMutableArray, RERelevanceEnginePreferences, _REUIControllerTrainingContext, RERelevanceEngine, NSSet, REUITrainingContext, NSString;

@interface REUIRelevanceEngineController : NSObject <RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate> {

	NSMutableDictionary* _sectionNameOrdering;
	NSMutableDictionary* _currentElementStates;
	SCD_Struct_RE0 _delegateCallbacks;
	NSArray* _hiddenIndices;
	NSMutableSet* _hiddenBundleIdentifiers;
	NSMutableArray* _pendingOperations;
	RERelevanceEnginePreferences* _preferences;
	_REUIControllerTrainingContext* _trainingContext;
	BOOL _isShowingContentElements;
	BOOL _performingBatch;
	BOOL _allowsLocationUse;
	BOOL _wantsLiveDataSources;
	BOOL _wantsIdealizedContent;
	RERelevanceEngine* _engine;
	NSArray* _sectionOrder;
	id<REUIRelevanceEngineControllerDelegate> _delegate;

}

@property (assign,nonatomic) double maximumNegativeDwellTime; 
@property (assign,nonatomic) double minimumPositiveDwellTime; 
@property (assign,nonatomic) unsigned long long onScreenElementCount; 
@property (nonatomic,readonly) RERelevanceEngine * engine;                                           //@synthesize engine=_engine - In the implementation block
@property (nonatomic,readonly) NSArray * sectionOrder;                                               //@synthesize sectionOrder=_sectionOrder - In the implementation block
@property (assign,nonatomic,__weak) id<REUIRelevanceEngineControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * disabledDataSources; 
@property (assign,nonatomic) BOOL allowsLocationUse;                                                 //@synthesize allowsLocationUse=_allowsLocationUse - In the implementation block
@property (assign,nonatomic) BOOL wantsLiveDataSources;                                              //@synthesize wantsLiveDataSources=_wantsLiveDataSources - In the implementation block
@property (assign,nonatomic) BOOL wantsIdealizedContent;                                             //@synthesize wantsIdealizedContent=_wantsIdealizedContent - In the implementation block
@property (nonatomic,readonly) REUITrainingContext * trainingContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<REUIRelevanceEngineControllerDelegate>)delegate;
-(void)setDelegate:(id<REUIRelevanceEngineControllerDelegate>)arg1 ;
-(void)resignCurrent;
-(RERelevanceEngine *)engine;
-(unsigned long long)numberOfSections;
-(long long)_indexForSection:(id)arg1 ;
-(NSArray *)sectionOrder;
-(BOOL)allowsLocationUse;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1 ;
-(void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1 ;
-(void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 ;
-(NSSet *)disabledDataSources;
-(BOOL)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2 ;
-(void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3 ;
-(id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2 ;
-(void)setMinimumPositiveDwellTime:(double)arg1 ;
-(void)setMaximumNegativeDwellTime:(double)arg1 ;
-(void)setOnScreenElementCount:(unsigned long long)arg1 ;
-(void)_loadNewRelevanceEngine:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_sectionAtIndex:(long long)arg1 ;
-(id)_engineIndexPathForControllerIndexPath:(id)arg1 ;
-(id)_sectionPathForIndexPath:(id)arg1 ;
-(id)_elementAtIndexPath:(id)arg1 ;
-(id)_contentForElement:(id)arg1 ;
-(void)_enumerateEngineElementsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_controllerIndexPathForEngineIndexPath:(id)arg1 ;
-(id)indexPathForElementWithIdentifier:(id)arg1 ;
-(BOOL)isDataSourceEnabled:(id)arg1 ;
-(BOOL)_isElementHidden:(id)arg1 ;
-(void)_setElement:(id)arg1 atIndexPath:(id)arg2 hidden:(BOOL)arg3 ;
-(void)setWantsLiveDataSources:(BOOL)arg1 ;
-(unsigned long long)_numberOfItemsInSectionAtIndex:(unsigned long long)arg1 ;
-(void)_enumerateEngineElementsInSection:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_sectionSupportingNoContentElements;
-(BOOL)_sectionHasContent:(id)arg1 ;
-(id)_contentAtIndexPath:(id)arg1 ;
-(void)_performOrEnqueueOperation:(id)arg1 ;
-(void)_performOperations:(id)arg1 toSection:(unsigned long long)arg2 ;
-(void)_performBatchUpdateUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_indexPathForSectionPath:(id)arg1 ;
-(id)_indexPathForElementWithIdentifier:(id)arg1 ;
-(id)elementIdentifierAtIndexPath:(id)arg1 ;
-(id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2 ;
-(BOOL)elementIsAvailable:(id)arg1 ;
-(id)interactionTypeForElement:(id)arg1 ;
-(unsigned long long)numberOfItemsInSectionAtIndex:(unsigned long long)arg1 ;
-(id)contentAtIndexPath:(id)arg1 ;
-(id)actionAtIndexPath:(id)arg1 ;
-(id)identifierForElementAtIndexPath:(id)arg1 ;
-(id)predictionForElementAtIndexPath:(id)arg1 ;
-(id)metadataForElementWithIdentifier:(id)arg1 ;
-(void)setDataSource:(id)arg1 enabled:(BOOL)arg2 ;
-(REUITrainingContext *)trainingContext;
-(void)makeCurrent;
-(id)predictedContentForSectionAtIndex:(unsigned long long)arg1 atDate:(id)arg2 limit:(long long)arg3 ;
-(BOOL)wantsLiveDataSources;
-(BOOL)wantsIdealizedContent;
-(void)setWantsIdealizedContent:(BOOL)arg1 ;
-(double)maximumNegativeDwellTime;
-(double)minimumPositiveDwellTime;
-(unsigned long long)onScreenElementCount;
-(void)elementAtIndexPathWasSelected:(id)arg1 ;
-(void)elemenAtIndexPathDidDisplay:(id)arg1 ;
-(void)elementAtIndexPathDidEndDisplay:(id)arg1 ;
@end
