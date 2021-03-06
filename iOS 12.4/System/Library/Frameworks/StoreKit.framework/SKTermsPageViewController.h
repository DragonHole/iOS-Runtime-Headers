/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol SKTermsPageViewControllerDelegate;
@class UINavigationBar, NSString, UIToolbar, UIWebView;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate> {

	UINavigationBar* _navbar;
	NSString* _terms;
	UIToolbar* _toolbar;
	UIWebView* _webview;
	id<SKTermsPageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKTermsPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTerms:(id)arg1 ;
-(id)_markupTermsWithHTML:(id)arg1 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 withAcceptance:(BOOL)arg2 ;
-(void)_buttonAccept:(id)arg1 ;
-(void)_buttonDecline:(id)arg1 ;
-(void)_loadSubviews;
-(id)init;
-(void)setDelegate:(id<SKTermsPageViewControllerDelegate>)arg1 ;
-(id<SKTermsPageViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)_dismissViewController;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
@end

