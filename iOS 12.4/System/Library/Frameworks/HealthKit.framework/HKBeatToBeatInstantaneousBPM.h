/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKBeatToBeatInstantaneousBPM : NSObject {

	double _bpm;
	double _time;

}

@property (nonatomic,readonly) double bpm;               //@synthesize bpm=_bpm - In the implementation block
@property (nonatomic,readonly) double time;              //@synthesize time=_time - In the implementation block
-(double)time;
-(id)initWithBPM:(double)arg1 time:(double)arg2 ;
-(double)bpm;
@end
