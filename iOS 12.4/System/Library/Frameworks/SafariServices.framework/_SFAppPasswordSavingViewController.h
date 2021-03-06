/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordSavingServiceViewControllerProtocol;
@class SFPasswordSavingRemoteViewController, SFQueueingServiceViewControllerProxy, NSString;

@interface _SFAppPasswordSavingViewController : _SFPasswordViewController {

	SFPasswordSavingRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordSavingServiceViewControllerProtocol> _serviceProxy;
	NSString* _tokenForShowingPrompt;

}
-(void)_setUpServiceProxyIfNeeded;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_remoteViewController;
-(void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

