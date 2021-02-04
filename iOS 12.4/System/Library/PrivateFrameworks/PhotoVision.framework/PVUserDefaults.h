/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVUserDefaults : NSObject
+(unsigned)sceneAlgorithmUmbrellaVersion;
+(unsigned)faceAlgorithmUmbrellaVersion;
+(BOOL)personBuilderMergeCandidatesDisabled;
+(unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+(BOOL)quarantineTwinsOnAssetEnabled;
+(BOOL)personBuildingDisabled;
+(BOOL)suggestionsLogEnabled;
+(unsigned long long)faceIDModelRebuildPeriod;
+(unsigned long long)minimumSuggestionSize;
+(BOOL)faceIDModelAlwaysRebuild;
+(unsigned long long)advancedStatusMergeCandidateLimit;
+(unsigned long long)advancedStatusVerifiedPersonLimit;
+(int)_intValueForKey:(id)arg1 defaultValue:(int)arg2 ;
+(BOOL)isBlacklistDisabled;
+(float)faceClusteringThreshold;
+(float)faceMergeFaceprintDistanceThreshold;
+(float)facePrimarySuggestionsThreshold;
+(unsigned long long)minFaceCountToTriggerClustering;
+(unsigned long long)maxFaceCountForClustering;
+(BOOL)faceClusteringDisabled;
+(float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2 ;
+(BOOL)_boolValueForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2 ;
@end
