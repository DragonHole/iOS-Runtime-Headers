/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class HMCameraSnapshot, NSURL, NSString;

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning> {

	HMCameraSnapshot* _cameraSnapshot;
	NSURL* _demoSnapshotURL;

}

@property (nonatomic,readonly) HMCameraSnapshot * cameraSnapshot;              //@synthesize cameraSnapshot=_cameraSnapshot - In the implementation block
@property (nonatomic,retain) NSURL * demoSnapshotURL;                          //@synthesize demoSnapshotURL=_demoSnapshotURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMCameraSnapshot *)cameraSnapshot;
-(NSURL *)demoSnapshotURL;
-(id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 ;
-(id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 snapshotDemoURL:(id)arg3 ;
-(void)setDemoSnapshotURL:(NSURL *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end

