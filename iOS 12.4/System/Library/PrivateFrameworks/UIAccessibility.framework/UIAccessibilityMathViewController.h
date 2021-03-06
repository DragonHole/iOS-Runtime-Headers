/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class SCRCMathExpression, UIAccessibilityMathWebView, NSDictionary, NSString;

@interface UIAccessibilityMathViewController : UIViewController <WKNavigationDelegate> {

	SCRCMathExpression* _mathExpression;
	UIAccessibilityMathWebView* _webView;
	NSDictionary* _mathDictionary;

}

@property (nonatomic,readonly) NSDictionary * mathDictionary;              //@synthesize mathDictionary=_mathDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_uiaxBundle;
-(void)_doneButtonTapped;
-(void)_styleBarButtonItem:(id)arg1 ;
-(id)initWithMathDictionary:(id)arg1 ;
-(NSDictionary *)mathDictionary;
-(id)_htmlString;
-(void)loadView;
-(void)viewDidLoad;
@end

