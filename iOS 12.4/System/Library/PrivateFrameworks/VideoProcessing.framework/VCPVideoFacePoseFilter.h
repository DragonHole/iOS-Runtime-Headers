/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoFacePoseFilter : NSObject {

	Matrix<float, 12, 1> _previousState;
	Matrix<float, 12, 12> _previousCovar;
	BOOL _previousStateIsValid;

}
-(int)filteringPose:(SCD_Struct_VC10*)arg1 ;
-(int)rotationToEulerAngles:(float)arg1 angles:(float)arg2 ;
-(int)kalmanFiltering:(float)arg1 T:(float)arg2 ;
-(int)eulerAnglesToRotation:(float)arg1 R:(float)arg2 ;
-(void)reset;
@end

