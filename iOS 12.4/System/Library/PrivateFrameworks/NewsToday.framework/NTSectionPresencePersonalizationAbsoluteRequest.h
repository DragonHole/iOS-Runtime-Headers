/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NTAbsolutePersonalizedSectionPresenceConfig;
@class FCPersonalizationFeature, NSObject;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying> {

	FCPersonalizationFeature* _feature;
	double _featureClickPrior;
	double _featureImpressionPrior;
	NSObject*<NTAbsolutePersonalizedSectionPresenceConfig> _absolutePresenceConfig;

}

@property (nonatomic,copy) FCPersonalizationFeature * feature;                                                         //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) double featureClickPrior;                                                                 //@synthesize featureClickPrior=_featureClickPrior - In the implementation block
@property (assign,nonatomic) double featureImpressionPrior;                                                            //@synthesize featureImpressionPrior=_featureImpressionPrior - In the implementation block
@property (nonatomic,copy) NSObject*<NTAbsolutePersonalizedSectionPresenceConfig> absolutePresenceConfig;              //@synthesize absolutePresenceConfig=_absolutePresenceConfig - In the implementation block
-(FCPersonalizationFeature *)feature;
-(void)setFeature:(FCPersonalizationFeature *)arg1 ;
-(void)setFeatureImpressionPrior:(double)arg1 ;
-(double)featureImpressionPrior;
-(void)setFeatureClickPrior:(double)arg1 ;
-(void)setAbsolutePresenceConfig:(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)arg1 ;
-(double)featureClickPrior;
-(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)absolutePresenceConfig;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
