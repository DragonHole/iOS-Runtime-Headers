/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRRemoteAuthorizationPromptViewControllerDelegate.h>

@protocol SRRemoteAuthorizationPromptViewController;
@class UIViewController, NSError, NSString;

@interface SRAuthorizationPromptPresentationController : NSObject <SRRemoteAuthorizationPromptViewControllerDelegate> {

	BOOL _presenting;
	BOOL _hostNavigationBarHidden;
	UIViewController*<SRRemoteAuthorizationPromptViewController> _viewController;
	/*^block*/id _completionHandler;
	NSError* _error;

}

@property (nonatomic,retain) UIViewController*<SRRemoteAuthorizationPromptViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                                      //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) BOOL hostNavigationBarHidden;                                                             //@synthesize hostNavigationBarHidden=_hostNavigationBarHidden - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                          //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setViewController:(UIViewController*<SRRemoteAuthorizationPromptViewController>)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController*<SRRemoteAuthorizationPromptViewController>)viewController;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)presentAnyViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)presentationAnchor;
-(id)presentingViewControllerFromRoot:(id)arg1 ;
-(id)navigationControllerFromRoot:(id)arg1 ;
-(void)setHostNavigationBarHidden:(BOOL)arg1 ;
-(void)completePromptWithError:(id)arg1 ;
-(BOOL)isViewControllerPresentedModally;
-(BOOL)hostNavigationBarHidden;
-(void)viewControllerCleanUp;
-(void)authorizationRequestCompleted;
-(void)authorizationRequestFailedWithError:(id)arg1 ;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg1 ;
-(void)authorizationPresentDeleteAllAlertWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3 ;
-(void)authorizationPresentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2 ;
-(void)authorizationRequestWillDisappear;
-(void)authorizationRequestDidDisappear;
-(void)presentPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentPendingAuthorizationPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundlePath:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentAppsAndStudiesPromptViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentStudyAuthorizationPromptViewController:(id)arg1 bundlePath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)presentResearchDataViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

