/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTLocationShifter;

@interface RTDistanceCalculator : RTService {

	RTLocationShifter* _locationShifter;

}

@property (nonatomic,retain) RTLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
-(RTLocationShifter *)locationShifter;
-(void)setLocationShifter:(RTLocationShifter *)arg1 ;
-(double)distanceFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3 ;
@end

