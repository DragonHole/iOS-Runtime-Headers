/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXGlobalAppScoresUtil : NSObject
+(int)locationTypeIndexFromRTLocationOfInterestType:(long long)arg1 ;
+(int)dayOfWeekIndexFromDate:(id)arg1 ;
+(int)timeOfDayIndexFromDate:(id)arg1 ;
+(id)initializeTrieAtPath:(id)arg1 ;
+(id)loadCoreMLModelWithName:(id)arg1 ;
+(id)normalizeValues:(id)arg1 ;
+(id)getContextKeyForTimeOfDayIndex:(int)arg1 dayOfWeekIndex:(int)arg2 locationIndex:(int)arg3 bundleIdIndex:(int)arg4 ;
@end
