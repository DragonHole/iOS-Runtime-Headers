/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>
#import <libobjc.A.dylib/REElementActionDelegate.h>
#import <libobjc.A.dylib/RETrainingSimulationServerInterface.h>

@class RETrainingSimulationServer, NSMutableDictionary, NSMapTable, NSString;

@interface RETrainingSimulationCoordinator : RESingleton <REElementActionDelegate, RETrainingSimulationServerInterface> {

	RETrainingSimulationServer* _server;
	NSMutableDictionary* _elementsAddedByEngine;
	NSMapTable* _actionCompletionBlocks;
	BOOL _isActivelyTraining;

}

@property (assign) BOOL isActivelyTraining;                         //@synthesize isActivelyTraining=_isActivelyTraining - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)prewarm;
-(void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2 ;
-(void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2 ;
-(void)elementAction:(id)arg1 didFinishTask:(BOOL)arg2 ;
-(void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)availableRelevanceEngines:(/*^block*/id)arg1 ;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isActivelyTraining;
-(void)_relevanceEnginesDidChange;
-(id)_engineWithName:(id)arg1 ;
-(id)_unavailableEngineWithNameError:(id)arg1 ;
-(void)setIsActivelyTraining:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

