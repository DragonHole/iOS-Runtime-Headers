/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;
@interface DDRemoteActionHostViewController : _UIRemoteViewController {

	id<DDRemoteActionHostViewControllerDelegate> _delegate;

}

@property (__weak) id<DDRemoteActionHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<DDRemoteActionHostViewControllerDelegate>)arg1 ;
-(id<DDRemoteActionHostViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

