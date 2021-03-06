/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PUTiltWheelDataSource;
@class NSDictionary;

@interface PUTiltWheel : UIView {

	int __tiltWheelOrientation;
	id<PUTiltWheelDataSource> _dataSource;
	NSDictionary* __dotsByDegree;
	NSDictionary* __labelsByDegree;
	unsigned long long __numericIndicatorDegreeStep;

}

@property (setter=_setDotsByDegree:,nonatomic,copy) NSDictionary * _dotsByDegree;                                                //@synthesize _dotsByDegree=__dotsByDegree - In the implementation block
@property (setter=_setLabelsByDegree:,nonatomic,copy) NSDictionary * _labelsByDegree;                                            //@synthesize _labelsByDegree=__labelsByDegree - In the implementation block
@property (assign,setter=_setNumericIndicatorDegreeStep:,nonatomic) unsigned long long _numericIndicatorDegreeStep;              //@synthesize _numericIndicatorDegreeStep=__numericIndicatorDegreeStep - In the implementation block
@property (assign,setter=_setTiltWheelOrientation:,nonatomic) int _tiltWheelOrientation;                                         //@synthesize _tiltWheelOrientation=__tiltWheelOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<PUTiltWheelDataSource> dataSource;                                                        //@synthesize dataSource=_dataSource - In the implementation block
-(void)_layoutDots;
-(void)_purgeCachedIndicators;
-(void)_setNumericIndicatorDegreeStep:(unsigned long long)arg1 ;
-(void)_setTiltWheelOrientation:(int)arg1 ;
-(unsigned long long)_countOfIndicatorsFrom:(double)arg1 to:(double)arg2 step:(unsigned long long)arg3 ;
-(id)_makeDotForDegree:(long long)arg1 ;
-(id)_makeLabelForDegree:(long long)arg1 ;
-(void)_setDotsByDegree:(id)arg1 ;
-(void)_setLabelsByDegree:(id)arg1 ;
-(NSDictionary *)_dotsByDegree;
-(NSDictionary *)_labelsByDegree;
-(double)_dotLayoutRadius;
-(void)_layoutViewsByDegree:(id)arg1 aroundRadius:(double)arg2 ;
-(CGPoint)_baseViewCenterForRadius:(double)arg1 aroundCenter:(CGPoint)arg2 ;
-(int)_tiltWheelOrientation;
-(double)_dotIndicatorSizeForDegree:(long long)arg1 ;
-(unsigned long long)_numericIndicatorDegreeStep;
-(void)layoutSubviews;
-(void)reloadData;
-(id<PUTiltWheelDataSource>)dataSource;
-(void)setDataSource:(id<PUTiltWheelDataSource>)arg1 ;
-(void)_layoutLabels;
@end

