/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemAggregatedViewController.h>

@class QLItem, QLPasswordItemViewController, QLWKWebItemViewController;

@interface QLProtectedItemViewController : QLItemAggregatedViewController {

	QLItem* _previewItem;
	QLPasswordItemViewController* _passwordItemViewController;
	QLWKWebItemViewController* _webViewController;

}

@property (retain) QLPasswordItemViewController * passwordItemViewController;              //@synthesize passwordItemViewController=_passwordItemViewController - In the implementation block
@property (retain) QLWKWebItemViewController * webViewController;                          //@synthesize webViewController=_webViewController - In the implementation block
+(id)supportedContentTypes;
+(Class)transformerClass;
+(BOOL)shouldBeRemoteForContentType:(id)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPasswordItemViewController:(QLPasswordItemViewController *)arg1 ;
-(QLPasswordItemViewController *)passwordItemViewController;
-(void)setWebViewController:(QLWKWebItemViewController *)arg1 ;
-(QLWKWebItemViewController *)webViewController;
-(void)dealloc;
@end

