/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class BKUIPearlCrossHairsRenderingView, UIImageView;

@interface BKUIPearlCrossHairsView : UIView {

	BKUIPearlCrossHairsRenderingView* _renderingView;
	UIImageView* _arrowView;

}
-(void)_setPitch:(double)arg1 yaw:(double)arg2 animated:(BOOL)arg3 ;
-(double)angleFromDirection:(unsigned long long)arg1 ;
-(void)nudgeCrossHairsAtAngle:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPitch:(double)arg1 yaw:(double)arg2 ;
-(void)nudgeInDirection:(unsigned long long)arg1 smallNudgePeak:(/*^block*/id)arg2 largeNudgePeak:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
