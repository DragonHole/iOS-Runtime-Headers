/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXActionProducer.h>

@protocol ATXActionProducerDelegate;
@class NSString;

@interface ATXHeuristicActionProducer : NSObject <ATXActionProducer> {

	id _expireNotificationHandle;
	id<ATXActionProducerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXActionProducerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)generateScoreForHeuristic:(id)arg1 ;
+(double)computeHeuristicEngagementScoreWithPriorAlpha:(int)arg1 priorBeta:(int)arg2 confirms:(double)arg3 rejects:(double)arg4 totalConfirms:(double)arg5 totalRejects:(double)arg6 ;
-(id)produceActions;
-(id)digitalHealthBlacklist;
-(id)actionPredictionBlacklist;
-(id)bundleIdForAction:(id)arg1 ;
-(id)blacklistSubstitutionForBundleId:(id)arg1 ;
-(BOOL)isActionBlacklisted:(id)arg1 ;
-(BOOL)userAlreadyEngagedWithAction:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<ATXActionProducerDelegate>)arg1 ;
-(id<ATXActionProducerDelegate>)delegate;
-(void)invalidate;
@end

