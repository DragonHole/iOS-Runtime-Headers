/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSStopWatch : NSObject {

	double _startTimestamp;

}

@property (nonatomic,readonly) double elapsedTime; 
-(double)_timeIntervalSinceInternalClockReference;
-(id)_initWithStartTime:(double)arg1 ;
-(id)initWithDistantPast;
-(id)init;
-(void)reset;
-(double)elapsedTime;
@end

