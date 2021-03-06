/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject {

	double _maxScoreRecentnessInterval;
	NSMutableDictionary* _scoresByWorkerType;
	NSMutableDictionary* _cachedAverageScoresByWorkerType;
	NSMutableDictionary* _lastTrimDateByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * scoresByWorkerType;                           //@synthesize scoresByWorkerType=_scoresByWorkerType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedAverageScoresByWorkerType;              //@synthesize cachedAverageScoresByWorkerType=_cachedAverageScoresByWorkerType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastTrimDateByWorkerType;                     //@synthesize lastTrimDateByWorkerType=_lastTrimDateByWorkerType - In the implementation block
@property (assign,nonatomic) double maxScoreRecentnessInterval;                                    //@synthesize maxScoreRecentnessInterval=_maxScoreRecentnessInterval - In the implementation block
-(BOOL)isHealthyForWorkerType:(short)arg1 ;
-(id)statusAsDictionary;
-(NSMutableDictionary *)scoresByWorkerType;
-(NSMutableDictionary *)lastTrimDateByWorkerType;
-(double)maxScoreRecentnessInterval;
-(id)_scoresForWorkerType:(short)arg1 ;
-(NSMutableDictionary *)cachedAverageScoresByWorkerType;
-(BOOL)_needsTrimScoresForWorkerType:(short)arg1 ;
-(void)_trimScoresForWorkerType:(short)arg1 ;
-(float)_calculateAverageScoreForWorkerType:(short)arg1 ;
-(float)averageScoreForWorkerType:(short)arg1 ;
-(void)recordResultsFromWorkerJob:(id)arg1 ;
-(void)setMaxScoreRecentnessInterval:(double)arg1 ;
-(id)init;
-(void)reset;
@end

