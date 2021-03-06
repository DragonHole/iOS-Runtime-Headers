/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLMultiLabelEvaluationTrackerProtocol;
@class PMLTrainingStore, PMLSessionDescriptor, NSArray, NSString;

@interface PMLMultiLabelRegressionEvaluationPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsLimit;
	unsigned long long _sessionsInBatch;
	unsigned long long _supportPerLabel;
	NSArray* _models;
	NSArray* _positiveLabels;
	NSArray* _weightsArray;
	BOOL _intercept;
	NSArray* _evaluationPoints;
	id<PMLMultiLabelEvaluationTrackerProtocol> _tracker;
	unsigned long long _evaluationLevel;
	BOOL _isSynchronous;
	NSString* _planId;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                                        //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;                        //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                             //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionsInBatch;                              //@synthesize sessionsInBatch=_sessionsInBatch - In the implementation block
@property (nonatomic,readonly) unsigned long long supportPerLabel;                              //@synthesize supportPerLabel=_supportPerLabel - In the implementation block
@property (nonatomic,readonly) NSArray * models;                                                //@synthesize models=_models - In the implementation block
@property (nonatomic,readonly) NSArray * positiveLabels;                                        //@synthesize positiveLabels=_positiveLabels - In the implementation block
@property (nonatomic,readonly) NSArray * weightsArray;                                          //@synthesize weightsArray=_weightsArray - In the implementation block
@property (nonatomic,readonly) BOOL intercept;                                                  //@synthesize intercept=_intercept - In the implementation block
@property (nonatomic,readonly) NSArray * evaluationPoints;                                      //@synthesize evaluationPoints=_evaluationPoints - In the implementation block
@property (nonatomic,readonly) id<PMLMultiLabelEvaluationTrackerProtocol> tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) unsigned long long evaluationLevel;                              //@synthesize evaluationLevel=_evaluationLevel - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                               //@synthesize planId=_planId - In the implementation block
@property (nonatomic,readonly) BOOL isSynchronous;                                              //@synthesize isSynchronous=_isSynchronous - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)models;
-(PMLTrainingStore *)store;
-(BOOL)isSynchronous;
-(NSString *)planId;
-(id)runWhile:(/*^block*/id)arg1 didFinish:(BOOL*)arg2 ;
-(unsigned long long)maxSessionsLimit;
-(id)_rankedLabelsForSession:(id)arg1 ;
-(id)_precisionAtEvaluationPointsForSessions:(id)arg1 ;
-(id)initWithPlanId:(NSString*)arg1 store:(id)arg2 sessionDescriptor:(id)arg3 maxSessionsLimit:(unsigned long long)arg4 sessionsInBatch:(unsigned long long)arg5 supportPerLabel:(unsigned long long)arg6 labelAndWeights:(id)arg7 intercept:(BOOL)arg8 evaluationPoints:(id)arg9 tracker:(id)arg10 evaluationLevel:(unsigned long long)arg11 ;
-(unsigned long long)sessionsInBatch;
-(unsigned long long)supportPerLabel;
-(NSArray *)positiveLabels;
-(NSArray *)weightsArray;
-(BOOL)intercept;
-(NSArray *)evaluationPoints;
-(unsigned long long)evaluationLevel;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id<PMLMultiLabelEvaluationTrackerProtocol>)tracker;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)init;
-(id)run;
@end

