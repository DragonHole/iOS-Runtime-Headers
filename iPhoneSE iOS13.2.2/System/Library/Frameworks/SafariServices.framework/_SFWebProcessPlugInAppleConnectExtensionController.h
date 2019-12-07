/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFAppleConnectExtensionMessageReceiver.h>

@protocol _SFAppleConnectExtensionContentScriptMessageReceiver;
@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface, WKWebProcessPlugInScriptWorld, NSString;

@interface _SFWebProcessPlugInAppleConnectExtensionController : NSObject <_SFAppleConnectExtensionMessageReceiver> {

	_SFWebProcessPlugInPageController* _pageController;
	id<_SFAppleConnectExtensionContentScriptMessageReceiver> _appleConnectExtensionContentScriptMessageReceiver;
	_WKRemoteObjectInterface* _extensionMessageReceiverInterface;
	WKWebProcessPlugInScriptWorld* _isolatedWorld;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithPageController:(id)arg1 ;
-(void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2 ;
-(id)_appleConnectExtensionContentScriptMessageReceiver;
-(void)injectAppleConnectBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
@end
