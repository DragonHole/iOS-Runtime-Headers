/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPEffectsAnalyzer : NSObject {

	BOOL _hasFace;

}
+(BOOL)isAutoLoopFramworkAvailable;
+(BOOL)usePHAssetScene;
+(id)gatingResultKeyToIndex;
+(id)getResultIndex:(id)arg1 ;
+(id)gatingTypeKeys;
-(int)enumerateMatchingScenesOfAsset:(id)arg1 forLongExposureUsingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)generateStatsToBeCollectedFrom:(id)arg1 ;
-(BOOL)reportLivePhotoEffectAnalysisResults:(id)arg1 ;
-(id)performanSceneClassificationOfImageFileAtURL:(id)arg1 ;
-(id)matchingNodeForSceneClassification:(id)arg1 inSceneNames:(id)arg2 ;
-(id)initWithFlagHasFace:(BOOL)arg1 ;
-(int)analyzeAsset:(id)arg1 onDemand:(BOOL)arg2 cancel:(/*^block*/id)arg3 statsFlags:(unsigned long long*)arg4 results:(id*)arg5 ;
-(id)initWithAnalysisResults:(id)arg1 ;
@end

