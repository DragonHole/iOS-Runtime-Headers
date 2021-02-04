/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACHWorkoutEvaluationWorkoutProperties : NSObject {

	BOOL _isFirstParty;
	unsigned long long _type;
	double _duration;
	double _kilocalories;
	double _kilometers;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double kilocalories;                  //@synthesize kilocalories=_kilocalories - In the implementation block
@property (nonatomic,readonly) double kilometers;                    //@synthesize kilometers=_kilometers - In the implementation block
@property (nonatomic,readonly) BOOL isFirstParty;                    //@synthesize isFirstParty=_isFirstParty - In the implementation block
-(double)kilocalories;
-(double)kilometers;
-(id)initWithWorkout:(id)arg1 ;
-(unsigned long long)type;
-(double)duration;
-(BOOL)isFirstParty;
@end
