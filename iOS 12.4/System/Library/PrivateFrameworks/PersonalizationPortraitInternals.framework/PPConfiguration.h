/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock;

@interface PPConfiguration : NSObject {

	_PASLock* _lock;

}
+(id)_loadConfigPlist;
+(id)sharedInstance;
-(double)topicsSigmoidWidth;
-(double)topicsSigmoidPeakValue;
-(double)topicsScalingFactor;
-(double)remoteTopicsMultiplier;
-(double)halfValuePosition;
-(double)nonReaderTextWeight;
-(void)_loadConfigParams;
-(id)resourceForMappingId:(id)arg1 ;
-(double)scalingFactorForMappingId:(id)arg1 ;
-(unsigned long long)minNumberOfTopicRecords;
-(unsigned long long)maxNumberOfTopicRecords;
-(id)portraitVariantName;
-(double)getTopicsMultiplierForSource:(id)arg1 andAlgorithm:(id)arg2 ;
-(double)portraitAnalyticsSamplingRate;
-(id)init;
@end

