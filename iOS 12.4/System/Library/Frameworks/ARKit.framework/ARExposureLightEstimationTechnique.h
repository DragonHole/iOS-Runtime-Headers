/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface ARExposureLightEstimationTechnique : ARTechnique {

	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	float _temperature;
	float _lightIntensity;
	ExponentialSmoother<float> _smoother;

}
-(unsigned long long)requiredSensorDataTypes;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)processData:(id)arg1 ;
-(id)init;
@end

