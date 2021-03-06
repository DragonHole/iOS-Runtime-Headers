/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKFocusView.h>

@class CAKeyframeAnimation;

@interface CMKFocusLockView : CMKFocusView {

	CAKeyframeAnimation* _lockBoundsAnimation;

}
-(void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3 ;
-(id)_createBoundsAnimation;
-(id)_createLockBoundsAnimation;
-(void)animateLock;
-(void)animateScaleDownWithCompletion:(/*^block*/id)arg1 ;
-(double)fadeInDuration;
@end

