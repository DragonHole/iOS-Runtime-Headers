/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXLayoutTask.h>

@interface SXRepeatedLayoutTask : SXLayoutTask {

	unsigned long long _repeatCount;
	double _elapsedDuration;

}

@property (nonatomic,readonly) unsigned long long repeatCount;              //@synthesize repeatCount=_repeatCount - In the implementation block
@property (nonatomic,readonly) double elapsedDuration;                      //@synthesize elapsedDuration=_elapsedDuration - In the implementation block
-(double)elapsedDuration;
-(id)initWithTask:(id)arg1 result:(id)arg2 ;
-(unsigned long long)repeatCount;
@end

