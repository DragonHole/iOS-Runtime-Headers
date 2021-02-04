/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MFMailComposeRemoteHost.h>

@protocol MFMailComposeRemoteViewControllerDelegate;
@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost> {

	id<MFMailComposeRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<MFMailComposeRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)serviceCompositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)serviceCompositionFinishedWithResult:(long long)arg1 error:(id)arg2 ;
-(void)bodyFinishedDrawing;
-(void)setDelegate:(id<MFMailComposeRemoteViewControllerDelegate>)arg1 ;
-(id<MFMailComposeRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end
