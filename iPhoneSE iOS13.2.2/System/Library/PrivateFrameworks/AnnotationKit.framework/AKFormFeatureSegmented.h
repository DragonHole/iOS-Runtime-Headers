/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine, NSArray;

@interface AKFormFeatureSegmented : AKFormFeature {

	AKFormFeatureLine* _baseline;
	NSArray* _characterSegmentRects;
	CGRect _enclosingRegionRect;

}

@property (nonatomic,retain) AKFormFeatureLine * baseline;                 //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGRect enclosingRegionRect;                   //@synthesize enclosingRegionRect=_enclosingRegionRect - In the implementation block
@property (nonatomic,retain) NSArray * characterSegmentRects;              //@synthesize characterSegmentRects=_characterSegmentRects - In the implementation block
+(id)segments:(id)arg1 withEnclosingRect:(CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4 ;
-(void)setBaseline:(AKFormFeatureLine *)arg1 ;
-(AKFormFeatureLine *)baseline;
-(void)setEnclosingRegionRect:(CGRect)arg1 ;
-(CGRect)enclosingRegionRect;
-(id)initWithCharacterSegments:(id)arg1 enclosingRect:(CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4 ;
-(NSArray *)characterSegmentRects;
-(void)setCharacterSegmentRects:(NSArray *)arg1 ;
@end

