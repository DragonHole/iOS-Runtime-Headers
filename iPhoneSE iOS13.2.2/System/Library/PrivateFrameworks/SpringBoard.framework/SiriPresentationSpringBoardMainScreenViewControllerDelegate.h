/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
@optional
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;

@required
-(void)screenWakeRequested;
-(void)screenWakeIdleTimerResetRequested;
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;

@end

