/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSTimeZone, _ATXMovingAverage;

@interface _ATXAppHistoricalAverageDose : NSObject {

	NSDate* _currentDay;
	double _currentDuration;
	int _dayCount;
	NSTimeZone* _timeZone;
	_ATXMovingAverage* _movingAverage;

}

@property (nonatomic,readonly) _ATXMovingAverage * movingAverage;              //@synthesize movingAverage=_movingAverage - In the implementation block
-(_ATXMovingAverage *)movingAverage;
-(id)initWith:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 alpha:(double)arg4 ;
-(void)addDuration:(id)arg1 endDate:(id)arg2 ;
-(void)skipTo:(id)arg1 ;
-(void)_updateMovingAverageForOneDay:(double)arg1 ;
-(void)_finishCurrentDay;
@end
