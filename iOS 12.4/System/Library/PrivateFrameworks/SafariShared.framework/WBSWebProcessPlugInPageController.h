/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKWebProcessPlugInLoadDelegate.h>

@class WKWebProcessPlugInBrowserContextController, WBSWebProcessPlugIn, WKWebProcessPlugInFrame, NSString;

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate> {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	WBSWebProcessPlugIn* _webProcessPlugIn;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (nonatomic,readonly) WKWebProcessPlugInBrowserContextController * browserContextController;              //@synthesize browserContextController=_browserContextController - In the implementation block
@property (nonatomic,readonly) WBSWebProcessPlugIn * webProcessPlugIn;                                             //@synthesize webProcessPlugIn=_webProcessPlugIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(WKWebProcessPlugInBrowserContextController *)browserContextController;
-(WBSWebProcessPlugIn *)webProcessPlugIn;
-(id)init;
-(WKWebProcessPlugInFrame *)mainFrame;
@end

