/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureExportedInterface <NSObject>
@required
-(oneway void)pictureInPictureInterruptionBegan;
-(oneway void)pictureInPictureInterruptionEnded;
-(oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)updatePictureInPicturePossible:(BOOL)arg1;
-(oneway void)pictureInPictureSuspended;
-(oneway void)pictureInPictureResumed;
-(oneway void)pictureInPictureCancelled;
-(oneway void)updateHostedWindowSize:(CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
-(oneway void)hostedWindowSizeChangeBegan;
-(oneway void)hostedWindowSizeChangeEnded;
-(oneway void)actionButtonTapped;

@end
