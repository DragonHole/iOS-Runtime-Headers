/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationRecorder <NSObject>
@required
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
-(void)recordLocationUpdateResume;
-(void)recordLocationUpdatePause;
-(void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;
-(void)recordError:(id)arg1;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
-(void)recordInitialCourse:(double)arg1;

@end
