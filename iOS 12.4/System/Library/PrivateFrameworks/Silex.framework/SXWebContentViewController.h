/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@protocol SXWebContentScriptsManager, SXWebContentMessageHandlerManager, SXWebContentNavigationManager, SXWebContentErrorReporting, SXWebContentDocumentStateReporting, SXWebContentTimeoutManager, SXWebContentProcessTerminationManager, SXWebContentContentRuleManager, SXReachabilityProvider, SXWebContentLogger;
@class WKWebView, SXWebContentLoader, NSString;

@interface SXWebContentViewController : UIViewController <WKNavigationDelegate, WKUIDelegate> {

	id<SXWebContentScriptsManager> _scriptsManager;
	id<SXWebContentMessageHandlerManager> _messageHandlerManager;
	id<SXWebContentNavigationManager> _navigationManager;
	WKWebView* _webView;
	id<SXWebContentErrorReporting> _errorReporter;
	id<SXWebContentDocumentStateReporting> _documentStateReporter;
	id<SXWebContentTimeoutManager> _timeoutManager;
	id<SXWebContentProcessTerminationManager> _terminationManager;
	id<SXWebContentContentRuleManager> _contentRuleManager;
	id<SXReachabilityProvider> _reachabilityProvider;
	id<SXWebContentLogger> _logger;
	SXWebContentLoader* _loader;

}

@property (nonatomic,readonly) WKWebView * webView;                                                       //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) id<SXWebContentErrorReporting> errorReporter;                              //@synthesize errorReporter=_errorReporter - In the implementation block
@property (nonatomic,readonly) id<SXWebContentDocumentStateReporting> documentStateReporter;              //@synthesize documentStateReporter=_documentStateReporter - In the implementation block
@property (nonatomic,readonly) id<SXWebContentTimeoutManager> timeoutManager;                             //@synthesize timeoutManager=_timeoutManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentProcessTerminationManager> terminationManager;              //@synthesize terminationManager=_terminationManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentContentRuleManager> contentRuleManager;                     //@synthesize contentRuleManager=_contentRuleManager - In the implementation block
@property (nonatomic,readonly) id<SXReachabilityProvider> reachabilityProvider;                           //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (nonatomic,readonly) id<SXWebContentLogger> logger;                                             //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) SXWebContentLoader * loader;                                                 //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) id<SXWebContentScriptsManager> scriptsManager;                             //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentMessageHandlerManager> messageHandlerManager;               //@synthesize messageHandlerManager=_messageHandlerManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentNavigationManager> navigationManager;                       //@synthesize navigationManager=_navigationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadURL:(id)arg1 ;
-(SXWebContentLoader *)loader;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2 ;
-(id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3 ;
-(void)webView:(id)arg1 commitPreviewingViewController:(id)arg2 ;
-(id)initWithWebView:(id)arg1 scriptsManager:(id)arg2 messageHandlerManager:(id)arg3 navigationManager:(id)arg4 errorReporter:(id)arg5 documentStateReporter:(id)arg6 timeoutManager:(id)arg7 terminationManager:(id)arg8 contentRuleManager:(id)arg9 reachabilityProvider:(id)arg10 logger:(id)arg11 ;
-(id<SXReachabilityProvider>)reachabilityProvider;
-(id<SXWebContentContentRuleManager>)contentRuleManager;
-(void)initiateLoadingWithLoader:(id)arg1 ;
-(void)setLoader:(SXWebContentLoader *)arg1 ;
-(id<SXWebContentProcessTerminationManager>)terminationManager;
-(id<SXWebContentDocumentStateReporting>)documentStateReporter;
-(id<SXWebContentErrorReporting>)errorReporter;
-(id<SXWebContentScriptsManager>)scriptsManager;
-(id<SXWebContentMessageHandlerManager>)messageHandlerManager;
-(id<SXWebContentTimeoutManager>)timeoutManager;
-(id<SXWebContentLogger>)logger;
-(id<SXWebContentNavigationManager>)navigationManager;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(WKWebView *)webView;
@end

