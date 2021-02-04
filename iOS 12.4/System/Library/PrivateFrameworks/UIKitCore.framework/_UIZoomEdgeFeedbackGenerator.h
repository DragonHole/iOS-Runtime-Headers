/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIEdgeFeedbackGenerator.h>

@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator {

	double _minimumZoomScale;
	double _maximumZoomScale;
	double _minimumTemporaryZoomScale;
	double _maximumTemporaryZoomScale;

}

@property (assign,nonatomic) double minimumZoomScale;                       //@synthesize minimumZoomScale=_minimumZoomScale - In the implementation block
@property (assign,nonatomic) double maximumZoomScale;                       //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) double minimumTemporaryZoomScale;              //@synthesize minimumTemporaryZoomScale=_minimumTemporaryZoomScale - In the implementation block
@property (assign,nonatomic) double maximumTemporaryZoomScale;              //@synthesize maximumTemporaryZoomScale=_maximumTemporaryZoomScale - In the implementation block
-(id)init;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(void)_updateMaximumValue;
-(void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2 ;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(void)zoomScaleUpdated:(double)arg1 ;
-(double)minimumZoomScale;
-(double)maximumZoomScale;
-(double)minimumTemporaryZoomScale;
-(void)setMinimumTemporaryZoomScale:(double)arg1 ;
-(double)maximumTemporaryZoomScale;
-(void)setMaximumTemporaryZoomScale:(double)arg1 ;
@end
