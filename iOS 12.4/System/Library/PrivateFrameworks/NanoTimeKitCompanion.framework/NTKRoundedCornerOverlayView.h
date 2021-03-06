/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CLKDevice;

@interface NTKRoundedCornerOverlayView : UIView {

	double _cornerRadius;
	UIImageView* _upperLeftCorner;
	UIImageView* _upperRightCorner;
	UIImageView* _bottomLeftCorner;
	UIImageView* _bottomRightCorner;
	CLKDevice* _device;

}
-(id)initWithFrame:(CGRect)arg1 forDeviceCornerRadius:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 cornerRadius:(double)arg3 ;
-(void)layoutSubviews;
@end

