/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLFeatureProviderUtils : NSObject
+(id)_featureValuesForNames:(id)arg1 providedBy:(id)arg2 error:(id*)arg3 ;
+(long long)_vectorizedSizeOfFeatureValues:(id)arg1 error:(id*)arg2 ;
+(BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)arg1 intoDoubleVector:(double*)arg2 stride:(unsigned long long)arg3 error:(id*)arg4 ;
+(BOOL)canVectorizeFeatureWithDescription:(id)arg1 ;
+(BOOL)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 intoDoubleVector:(double*)arg3 length:(unsigned long long)arg4 stride:(unsigned long long)arg5 error:(id*)arg6 ;
+(id)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 error:(id*)arg3 ;
+(BOOL)canVectorizeAllFeaturesWithDescriptions:(id)arg1 ;
+(id)providerWithSubsetOfFeaturesNamed:(id)arg1 providedBy:(id)arg2 ;
+(id)lazyProviderWithFeaturesProvidedBy:(id)arg1 addedToFeaturesProvidedBy:(id)arg2 ;
@end

