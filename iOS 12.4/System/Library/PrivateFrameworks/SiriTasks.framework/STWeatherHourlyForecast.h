/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject {

	long long _timeIndex;
	long long _conditionCode;
	NSNumber* _temperature;
	NSNumber* _chanceOfPrecipitation;

}
+(BOOL)supportsSecureCoding;
-(long long)conditionCode;
-(id)chanceOfPrecipitation;
-(long long)timeIndex;
-(id)_initWithConditionCodeIndex:(long long)arg1 timeIndex:(long long)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4 ;
-(id)temperature;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

