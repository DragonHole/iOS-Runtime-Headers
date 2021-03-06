/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/RPSystemBroadcastPickerViewController.h>

@protocol RPSystemBroadcastPickerViewControllerDelegate;
@class RPModalPresentationWindow;

@interface RPBroadcastPickerStandaloneViewController : RPSystemBroadcastPickerViewController {

	RPModalPresentationWindow* _presentationWindow;
	id<RPSystemBroadcastPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RPSystemBroadcastPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewControllerDidFinish;
-(void)loadViewControllerWithBundleIdentifier:(id)arg1 showMicrophoneButton:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<RPSystemBroadcastPickerViewControllerDelegate>)arg1 ;
-(id<RPSystemBroadcastPickerViewControllerDelegate>)delegate;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

