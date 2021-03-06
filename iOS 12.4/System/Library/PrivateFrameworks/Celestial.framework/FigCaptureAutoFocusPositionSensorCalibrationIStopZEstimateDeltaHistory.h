/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject {

	int _lastPassingIStopZEstimateDelta;
	int _previousIStopZEstimateDelta;
	int _currentIStopZEstimateDelta;
	int _previousIStopZEstimate;
	int _currentIStopZEstimate;

}

@property (assign,nonatomic) int lastPassingIStopZEstimateDelta;              //@synthesize lastPassingIStopZEstimateDelta=_lastPassingIStopZEstimateDelta - In the implementation block
@property (assign,nonatomic) int previousIStopZEstimateDelta;                 //@synthesize previousIStopZEstimate=_previousIStopZEstimate - In the implementation block
@property (assign,nonatomic) int currentIStopZEstimateDelta;                  //@synthesize currentIStopZEstimate=_currentIStopZEstimate - In the implementation block
-(int)lastPassingIStopZEstimateDelta;
-(void)setLastPassingIStopZEstimateDelta:(int)arg1 ;
-(int)previousIStopZEstimateDelta;
-(void)setPreviousIStopZEstimateDelta:(int)arg1 ;
-(int)currentIStopZEstimateDelta;
-(void)setCurrentIStopZEstimateDelta:(int)arg1 ;
@end

