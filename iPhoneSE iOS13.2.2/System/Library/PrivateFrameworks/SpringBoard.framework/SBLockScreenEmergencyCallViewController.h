/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;
@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController {

	id<SBLockScreenEmergencyCallViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBLockScreenEmergencyCallViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenEmergencyCallViewControllerDelegate>)arg1 ;
-(void)dismiss;
-(void)setBackgroundStyle:(long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2 ;
-(long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1 ;
@end
