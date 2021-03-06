/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class HKHealthChartPoint, NSDate, NSString;

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint> {

	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	HKHealthChartPoint* _systolicChartPoint;
	HKHealthChartPoint* _diastolicChartPoint;
	NSDate* _date;

}

@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * systolicChartPoint;                    //@synthesize systolicChartPoint=_systolicChartPoint - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * diastolicChartPoint;                   //@synthesize diastolicChartPoint=_diastolicChartPoint - In the implementation block
@property (nonatomic,retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)xValueAsGenericType;
-(id)allYValues;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(HKHealthChartPoint *)systolicChartPoint;
-(HKHealthChartPoint *)diastolicChartPoint;
-(void)setSystolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(void)setDiastolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(void)setChartPoint:(id)arg1 forType:(id)arg2 ;
-(id)yValue;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

