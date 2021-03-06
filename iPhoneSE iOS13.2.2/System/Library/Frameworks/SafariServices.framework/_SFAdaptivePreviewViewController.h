/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SFLinkPreviewHeaderDelegate.h>

@protocol _SFAdaptivePreviewViewControllerDelegate;
@class _SFURLTextPreviewViewController, UIViewController, NSArray, _WKActivatedElementInfo, NSURL, NSString;

@interface _SFAdaptivePreviewViewController : UIViewController <_SFLinkPreviewHeaderDelegate> {

	_SFURLTextPreviewViewController* _textPreviewViewController;
	UIViewController* _linkPreviewViewController;
	id<_SFAdaptivePreviewViewControllerDelegate> _delegate;
	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	NSURL* _URL;

}

@property (assign,nonatomic,__weak) id<_SFAdaptivePreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * linkActions;                                                     //@synthesize linkActions=_linkActions - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * activatedElementInfo;                            //@synthesize activatedElementInfo=_activatedElementInfo - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id<_SFAdaptivePreviewViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFAdaptivePreviewViewControllerDelegate>)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)viewDidLoad;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
-(id)previewActionItems;
-(void)setLinkPreviewEnabled:(BOOL)arg1 ;
-(void)_setUpLinkPreviewViewControllerIfNeeded;
-(void)_setUpTextPreviewViewControllerIfNeeded;
-(void)_addViewFromViewController:(id)arg1 ;
-(void)_removeViewController:(id)arg1 ;
-(void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(BOOL)arg2 ;
-(NSArray *)linkActions;
-(void)setLinkActions:(NSArray *)arg1 ;
-(_WKActivatedElementInfo *)activatedElementInfo;
-(void)setActivatedElementInfo:(_WKActivatedElementInfo *)arg1 ;
@end

