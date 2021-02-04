/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface TUAnimationFloatFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _startValue;
	double _endValue;
	double _speed;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double startValue;                                   //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                     //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(double)startValue;
-(double)endValue;
-(double)solveForTime:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 startValue:(double)arg2 endValue:(double)arg3 speed:(double)arg4 ;
-(id)init;
-(CAMediaTimingFunction *)timingFunction;
-(void)setSpeed:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)speed;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
@end
