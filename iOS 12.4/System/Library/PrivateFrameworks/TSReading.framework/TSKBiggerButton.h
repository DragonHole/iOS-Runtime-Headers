/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIButton.h>

@interface TSKBiggerButton : UIButton {

	BOOL mHitTestWithOutsets;
	UIEdgeInsets mOutsets;

}
+(id)tsdPlatformButtonWithFrame:(CGRect)arg1 ;
-(void)setHitBufferTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
