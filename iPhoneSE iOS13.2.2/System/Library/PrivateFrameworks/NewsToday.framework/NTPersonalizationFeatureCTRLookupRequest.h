/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCPersonalizationFeature;

@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <NSCopying> {

	FCPersonalizationFeature* _personalizationFeature;
	double _clickPrior;
	double _impressionPrior;

}

@property (nonatomic,copy) FCPersonalizationFeature * personalizationFeature;              //@synthesize personalizationFeature=_personalizationFeature - In the implementation block
@property (assign,nonatomic) double clickPrior;                                            //@synthesize clickPrior=_clickPrior - In the implementation block
@property (assign,nonatomic) double impressionPrior;                                       //@synthesize impressionPrior=_impressionPrior - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCPersonalizationFeature *)personalizationFeature;
-(void)setPersonalizationFeature:(FCPersonalizationFeature *)arg1 ;
-(double)clickPrior;
-(void)setClickPrior:(double)arg1 ;
-(double)impressionPrior;
-(void)setImpressionPrior:(double)arg1 ;
@end

