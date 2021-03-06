/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/RPSystemBroadcastPickerViewControllerDelegate.h>

@class RPBroadcastPickerHostViewController, NSString;

@interface RPSystemBroadcastPickerViewController : UIViewController <RPSystemBroadcastPickerViewControllerDelegate> {

	RPBroadcastPickerHostViewController* _hostViewController;

}

@property (nonatomic,retain) RPBroadcastPickerHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewControllerDidFinish;
-(RPBroadcastPickerHostViewController *)hostViewController;
-(void)setHostViewController:(RPBroadcastPickerHostViewController *)arg1 ;
@end

