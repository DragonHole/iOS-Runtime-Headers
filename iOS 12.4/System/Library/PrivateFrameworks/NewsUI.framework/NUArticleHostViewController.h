/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NULoadingDelegate.h>
#import <libobjc.A.dylib/SXAnalyticsReporting.h>
#import <libobjc.A.dylib/NUPageable.h>
#import <libobjc.A.dylib/NUBarCompressible.h>

@protocol NULoadingDelegate, NUArticleViewControllerFactory, NUSettings, NULoadingViewProviding, NUErrorMessageFactory, NUAnalyticsReporting;
@class NSString, FCObservable, FCArticle, FCIssue, UIViewController, UIView, NFMultiDelegate, NSHashTable, UIScrollView;

@interface NUArticleHostViewController : UIViewController <NULoadingDelegate, SXAnalyticsReporting, NUPageable, NUBarCompressible> {

	NSString* _pageIdentifier;
	id<NULoadingDelegate> _loadingDelegate;
	FCObservable* _articleViewStyler;
	FCArticle* _article;
	FCIssue* _issue;
	id<NUArticleViewControllerFactory> _articleViewControllerFactory;
	id<NUSettings> _settings;
	UIViewController* _contentTypeViewController;
	UIView*<NULoadingViewProviding> _loadingView;
	NFMultiDelegate* _multiLoadingDelegate;
	id<NUErrorMessageFactory> _errorMessageFactory;
	id<NUAnalyticsReporting> _analyticsReporting;

}

@property (nonatomic,readonly) FCArticle * article;                                                          //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) FCIssue * issue;                                                              //@synthesize issue=_issue - In the implementation block
@property (nonatomic,readonly) id<NUArticleViewControllerFactory> articleViewControllerFactory;              //@synthesize articleViewControllerFactory=_articleViewControllerFactory - In the implementation block
@property (nonatomic,copy,readonly) id<NUSettings> settings;                                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIViewController * contentTypeViewController;                                   //@synthesize contentTypeViewController=_contentTypeViewController - In the implementation block
@property (nonatomic,retain) UIView*<NULoadingViewProviding> loadingView;                                    //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,readonly) NFMultiDelegate * multiLoadingDelegate;                                       //@synthesize multiLoadingDelegate=_multiLoadingDelegate - In the implementation block
@property (nonatomic,readonly) id<NUErrorMessageFactory> errorMessageFactory;                                //@synthesize errorMessageFactory=_errorMessageFactory - In the implementation block
@property (nonatomic,readonly) id<NUAnalyticsReporting> analyticsReporting;                                  //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (nonatomic,readonly) FCObservable * articleViewStyler;                                             //@synthesize articleViewStyler=_articleViewStyler - In the implementation block
@property (nonatomic,readonly) NSHashTable * loadingListeners; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;                                   //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageIdentifier;                                               //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(NSString *)pageIdentifier;
-(void)setLoadingView:(UIView*<NULoadingViewProviding>)arg1 ;
-(UIView*<NULoadingViewProviding>)loadingView;
-(FCArticle *)article;
-(id<NUAnalyticsReporting>)analyticsReporting;
-(void)reportEvent:(id)arg1 ;
-(NSHashTable *)loadingListeners;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)loadingDidFinishWithError:(id)arg1 ;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(id<NUArticleViewControllerFactory>)articleViewControllerFactory;
-(id<NUErrorMessageFactory>)errorMessageFactory;
-(id)initWithArticle:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4 ;
-(void)loadingWillStart;
-(void)loadingDidStart;
-(void)loadingDidUpdateProgress:(double)arg1 ;
-(FCIssue *)issue;
-(FCObservable *)articleViewStyler;
-(id)initWithArticle:(id)arg1 issue:(id)arg2 articleViewControllerFactory:(id)arg3 settings:(id)arg4 errorMessageFactory:(id)arg5 analyticsReporting:(id)arg6 ;
-(id)initWithArticle:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4 analyticsReporting:(id)arg5 ;
-(void)loadArticleAndEmbedArticleViewController;
-(UIViewController *)contentTypeViewController;
-(NFMultiDelegate *)multiLoadingDelegate;
-(void)setContentTypeViewController:(UIViewController *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(id<NUSettings>)settings;
@end
