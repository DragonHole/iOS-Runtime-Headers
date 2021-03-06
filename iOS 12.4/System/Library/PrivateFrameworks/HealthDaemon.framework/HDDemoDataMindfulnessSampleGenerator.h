/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator {

	BOOL _didGenerateMindfulnessMinute;
	double _nextMindfulSessionSampleTime;

}

@property (assign,nonatomic) double nextMindfulSessionSampleTime;              //@synthesize nextMindfulSessionSampleTime=_nextMindfulSessionSampleTime - In the implementation block
@property (assign,nonatomic) BOOL didGenerateMindfulnessMinute;                //@synthesize didGenerateMindfulnessMinute=_didGenerateMindfulnessMinute - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)nextMindfulSessionSampleTime;
-(BOOL)didGenerateMindfulnessMinute;
-(id)_mindfulSessionSampleForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3 ;
-(id)_heartRatesFromMindfulSessionSample:(id)arg1 demoPerson:(id)arg2 atTime:(double)arg3 ;
-(void)setDidGenerateMindfulnessMinute:(BOOL)arg1 ;
-(void)setNextMindfulSessionSampleTime:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

