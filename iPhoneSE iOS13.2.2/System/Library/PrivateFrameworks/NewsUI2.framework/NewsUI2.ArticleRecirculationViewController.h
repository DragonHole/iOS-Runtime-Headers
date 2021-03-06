/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSArticleRecirculationRoutedType.h>
#import <libobjc.A.dylib/SXDocumentSectionItemImpressionable.h>
#import <libobjc.A.dylib/SXDocumentSectionItemProvider.h>
#import <libobjc.A.dylib/TSArticleRecirculationViewControllerType.h>

@class NSArray;

@interface NewsUI2.ArticleRecirculationViewController : UIViewController <TSArticleRecirculationRoutedType, SXDocumentSectionItemImpressionable, SXDocumentSectionItemProvider, TSArticleRecirculationViewControllerType> {

	 delegate;
	 footerDelegate;
	 styler;
	 eventHandler;
	 resultProvider;
	 blueprintViewController;
	 routableDelegate;
	 customImpressionManager;
	 manualImpressionUpdateProvider;
	 presentingHeadline;
	 eventManager;
	 marginPipeline;
	 existingMargin;
	 layoutProvider;
	 sharingActivityProviderFactory;
	 isPublisherHeaderVisible;

}

@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
@property (readonly,nonatomic) CGSize contentSize; 
@property (readonly,nonatomic) long long section; 
@property (readonly,nonatomic) NSArray * headlines; 
@property (assign,__weak,nonatomic) id<TSArticleRecirculationViewControllerDelegate> delegate; 
@property (assign,__weak,nonatomic) id<TSArticleRecirculationRoutableFeedDelegate> routableDelegate; 
-(void)updateDocumentSectionImpressionForView:(id)arg1 visibleRect:(CGRect)arg2 ;
-(void)endDocumentSectionImpression;
-(double)sectionItemHeightForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)sectionItemViewController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)resignFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(CGSize)contentSize;
-(long long)section;
-(NSArray *)headlines;
-(id)initWithCoder:(id)arg1 ;
-(id<TSArticleRecirculationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TSArticleRecirculationViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<TSArticleRecirculationRoutableFeedDelegate>)routableDelegate;
-(void)setRoutableDelegate:(id<TSArticleRecirculationRoutableFeedDelegate>)arg1 ;
@end

