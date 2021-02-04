/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKShareSheetDelegate;
#import <WebKit/WebKit-Structs.h>
@interface WKShareSheet : NSObject {

	WeakObjCPtr<WKWebView> _webView;
	CompletionHandler<void (bool)>* _completionHandler;
	RetainPtr<UIActivityViewController>* _shareSheetViewController;
	RetainPtr<UIViewController>* _presentationViewController;
	id<WKShareSheetDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WKShareSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)presentWithParameters:(const ShareDataWithParsedURL*)arg1 completionHandler:(CompletionHandler<void (bool)>*)arg2 ;
-(void)_didCompleteWithSuccess:(BOOL)arg1 ;
-(void)dispatchDidDismiss;
-(void)setDelegate:(id<WKShareSheetDelegate>)arg1 ;
-(id<WKShareSheetDelegate>)delegate;
-(void)dismiss;
-(id)initWithView:(id)arg1 ;
@end
