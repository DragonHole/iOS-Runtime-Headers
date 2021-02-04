/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUColorWheelSpace;
@interface HUColorWheelView : UIView {

	double _wheelHoleRadius;
	id<HUColorWheelSpace> _colorWheelSpace;

}

@property (assign,nonatomic) double wheelHoleRadius;                             //@synthesize wheelHoleRadius=_wheelHoleRadius - In the implementation block
@property (nonatomic,retain) id<HUColorWheelSpace> colorWheelSpace;              //@synthesize colorWheelSpace=_colorWheelSpace - In the implementation block
+(double)_colorWheelRenderingScale;
-(void)setColorWheelSpace:(id<HUColorWheelSpace>)arg1 ;
-(double)_outerRadius;
-(double)wheelHoleRadius;
-(id)wheelBezierPath;
-(id<HUColorWheelSpace>)colorWheelSpace;
-(id)initWithColorWheelSpace:(id)arg1 ;
-(void)setWheelHoleRadius:(double)arg1 ;
-(CGPoint)pointForColorWheelCoordinate:(CGSize)arg1 ;
-(CGSize)colorWheelCoordinateForPoint:(CGPoint)arg1 boundedToWheel:(BOOL)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
@end
