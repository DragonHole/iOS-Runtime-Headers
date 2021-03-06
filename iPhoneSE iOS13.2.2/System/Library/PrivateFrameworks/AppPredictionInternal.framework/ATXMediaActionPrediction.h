/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXMediaActionPrediction : NSObject
+(id)getAllUpcomingMedia;
+(id)updatePlayMediaActionPredictions:(id)arg1 withUpcomingMedia:(id)arg2 forActionKey:(id)arg3 appActionPredictionItem:(const ATXPredictionItem*)arg4 appActionLogProbability:(double)arg5 statistics:(id)arg6 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 withINUpcomingMediaManagerReturnValueForTests:(id)arg2 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 ;
+(PASTuple2*)resolvePlayMediaIntent:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(PASTuple2*)resolveBucketLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(PASTuple2*)resolveContainerLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(PASTuple2*)resolveItemLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)findTopRankedINPlayMediaIntentFromArray:(id)arg1 ;
+(id)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(BOOL)arg2 ;
@end

