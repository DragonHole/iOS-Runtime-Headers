/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, HKAxisLabelStyle;

@interface HKHeartRateDistributionSeries : HKGraphSeries {

	HKStrokeStyle* _inactiveStrokeStyle;
	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;
	HKAxisLabelStyle* _minMaxLabelStyle;
	HKAxisLabelStyle* _minMaxValueStyle;
	HKStrokeStyle* _minMaxPointStyle;

}

@property (nonatomic,copy) HKStrokeStyle * inactiveStrokeStyle;                //@synthesize inactiveStrokeStyle=_inactiveStrokeStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
@property (nonatomic,copy) HKAxisLabelStyle * minMaxLabelStyle;                //@synthesize minMaxLabelStyle=_minMaxLabelStyle - In the implementation block
@property (nonatomic,copy) HKAxisLabelStyle * minMaxValueStyle;                //@synthesize minMaxValueStyle=_minMaxValueStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * minMaxPointStyle;                   //@synthesize minMaxPointStyle=_minMaxPointStyle - In the implementation block
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)selectedStrokeStyle;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(id)marginsForYAxis:(id)arg1 chartRect:(CGRect)arg2 ;
-(void)_drawMinMaxLabelsForMin:(CGPoint)arg1 max:(CGPoint)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 ;
-(id)_quickDate:(id)arg1 ;
-(HKStrokeStyle *)inactiveStrokeStyle;
-(void)setInactiveStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKAxisLabelStyle *)minMaxLabelStyle;
-(void)setMinMaxLabelStyle:(HKAxisLabelStyle *)arg1 ;
-(HKAxisLabelStyle *)minMaxValueStyle;
-(void)setMinMaxValueStyle:(HKAxisLabelStyle *)arg1 ;
-(HKStrokeStyle *)minMaxPointStyle;
-(void)setMinMaxPointStyle:(HKStrokeStyle *)arg1 ;
@end

