/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKInkSmoothingDescriptor : NSObject {

	double _stylusSmoothing;
	double _touchSmoothing;
	double _velocitySmoothing;

}

@property (nonatomic,readonly) double stylusSmoothing;                //@synthesize stylusSmoothing=_stylusSmoothing - In the implementation block
@property (nonatomic,readonly) double touchSmoothing;                 //@synthesize touchSmoothing=_touchSmoothing - In the implementation block
@property (nonatomic,readonly) double velocitySmoothing;              //@synthesize velocitySmoothing=_velocitySmoothing - In the implementation block
+(id)smoothingDescriptorWithStylus:(double)arg1 touch:(double)arg2 velocity:(double)arg3 ;
+(id)defaultSmoothingDescriptor;
-(id)initWithStylusSmoothing:(double)arg1 touchSmoothing:(double)arg2 velocitySmoothing:(double)arg3 ;
-(double)stylusSmoothing;
-(double)touchSmoothing;
-(double)velocitySmoothing;
@end

