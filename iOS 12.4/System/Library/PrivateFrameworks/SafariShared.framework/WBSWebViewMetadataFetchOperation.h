/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSSiteMetadataFetchOperation.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol WBSWebViewMetadataFetchOperationDelegate;
@class WKWebView, WKWebViewConfiguration, NSString;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate> {

	id<WBSWebViewMetadataFetchOperationDelegate> _delegate;
	WKWebView* _webView;

}

@property (assign,nonatomic,__weak) id<WBSWebViewMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webViewConfiguration; 
@property (nonatomic,readonly) CGSize webViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearWebView;
-(void)setUpWebViewIfNeeded;
-(void)willClearWebView;
-(void)didFailFetch;
-(CGSize)webViewSize;
-(void)startOffscreenFetching;
-(WKWebViewConfiguration *)webViewConfiguration;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)didCreateWebView;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(void)setDelegate:(id<WBSWebViewMetadataFetchOperationDelegate>)arg1 ;
-(id<WBSWebViewMetadataFetchOperationDelegate>)delegate;
-(void)cancel;
-(void)start;
-(WKWebView *)webView;
@end

