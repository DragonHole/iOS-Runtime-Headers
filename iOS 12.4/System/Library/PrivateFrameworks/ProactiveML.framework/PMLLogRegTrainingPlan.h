/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLLogRegTrackerProtocol, PMLNoiseStrategy;
@class PMLTrainingStore, PMLSessionDescriptor, PMLModelWeights, NSString;

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	id<PMLLogRegTrackerProtocol> _tracker;
	id<PMLNoiseStrategy> _noiseStrategy;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsLimit;
	unsigned long long _sessionsInBatch;
	unsigned long long _currentServerIteration;
	PMLModelWeights* _currentModelWeights;
	unsigned long long _localGradientIterations;
	float _localLearningRate;
	float _stoppingThreshold;
	unsigned long long _localMinimumIterations;
	BOOL _useOnlyAppleInternalSessions;
	double _skew;
	double _threshold;
	BOOL _isMultiLabel;
	unsigned long long _positiveLabel;
	unsigned long long _evaluationLevel;
	BOOL _reportScale;
	BOOL _isSynchronous;
	BOOL _intercept;
	NSString* _planId;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                                //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<PMLLogRegTrackerProtocol> tracker;                    //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) unsigned long long currentServerIteration;               //@synthesize currentServerIteration=_currentServerIteration - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;                //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                     //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) PMLModelWeights * currentModelWeights;                   //@synthesize currentModelWeights=_currentModelWeights - In the implementation block
@property (nonatomic,readonly) float localLearningRate;                                 //@synthesize localLearningRate=_localLearningRate - In the implementation block
@property (nonatomic,readonly) float stoppingThreshold;                                 //@synthesize stoppingThreshold=_stoppingThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long localMinimumIterations;               //@synthesize localMinimumIterations=_localMinimumIterations - In the implementation block
@property (nonatomic,readonly) unsigned long long localGradientIterations;              //@synthesize localGradientIterations=_localGradientIterations - In the implementation block
@property (nonatomic,readonly) BOOL useOnlyAppleInternalSessions;                       //@synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions - In the implementation block
@property (nonatomic,readonly) BOOL isMultiLabel;                                       //@synthesize isMultiLabel=_isMultiLabel - In the implementation block
@property (nonatomic,readonly) unsigned long long positiveLabel;                        //@synthesize positiveLabel=_positiveLabel - In the implementation block
@property (nonatomic,readonly) BOOL intercept;                                          //@synthesize intercept=_intercept - In the implementation block
@property (nonatomic,readonly) unsigned long long evaluationLevel;                      //@synthesize evaluationLevel=_evaluationLevel - In the implementation block
@property (nonatomic,readonly) BOOL reportScale;                                        //@synthesize reportScale=_reportScale - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                       //@synthesize planId=_planId - In the implementation block
@property (nonatomic,readonly) BOOL isSynchronous;                                      //@synthesize isSynchronous=_isSynchronous - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)planWithStore:(id)arg1 tracker:(id)arg2 sessionDescriptor:(id)arg3 arguments:(id)arg4 ;
-(PMLTrainingStore *)store;
-(BOOL)isSynchronous;
-(id)train;
-(NSString *)planId;
-(id)runWhile:(/*^block*/id)arg1 didFinish:(BOOL*)arg2 ;
-(void)loadSessionsWithBlock:(/*^block*/id)arg1 ;
-(id)normalizeRegressor:(id)arg1 ;
-(void)runUntilDoneForTesting;
-(unsigned long long)maxSessionsLimit;
-(BOOL)useOnlyAppleInternalSessions;
-(BOOL)intercept;
-(unsigned long long)evaluationLevel;
-(PMLModelWeights *)currentModelWeights;
-(id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(/*^block*/id)arg3 start:(id)arg4 ;
-(id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(NSString*)arg4 isSynchronous:(BOOL)arg5 sessionDescriptor:(id)arg6 maxSessionsLimit:(unsigned long long)arg7 sessionsInBatch:(unsigned long long)arg8 currentServerIteration:(unsigned long long)arg9 currentModelWeights:(id)arg10 localLearningRate:(float)arg11 stoppingThreshold:(float)arg12 localMinimumIterations:(unsigned long long)arg13 localGradientIterations:(unsigned long long)arg14 useOnlyAppleInternalSessions:(BOOL)arg15 skew:(double)arg16 threshold:(double)arg17 isMultiLabel:(BOOL)arg18 intercept:(BOOL)arg19 positiveLabel:(unsigned long long)arg20 evaluationLevel:(unsigned long long)arg21 reportScale:(BOOL)arg22 ;
-(unsigned long long)currentServerIteration;
-(float)localLearningRate;
-(float)stoppingThreshold;
-(unsigned long long)localMinimumIterations;
-(unsigned long long)localGradientIterations;
-(BOOL)isMultiLabel;
-(unsigned long long)positiveLabel;
-(BOOL)reportScale;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id<PMLLogRegTrackerProtocol>)tracker;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)init;
-(NSString *)description;
@end
