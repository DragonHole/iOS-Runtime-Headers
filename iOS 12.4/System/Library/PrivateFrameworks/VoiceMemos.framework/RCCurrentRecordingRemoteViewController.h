/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RCUIClientCurrentRecordingViewController.h>

@protocol RCCurrentRecordingViewControllerDelegate;
@class NSString;

@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController> {

	id<RCCurrentRecordingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RCCurrentRecordingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)currentRecordingDidEnd;
-(void)currentRecordingAVStateDidChange:(id)arg1 ;
-(void)setDelegate:(id<RCCurrentRecordingViewControllerDelegate>)arg1 ;
-(id<RCCurrentRecordingViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

