/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHRecentsDocumentExtensionProviderDelegate.h>

@class MTMaterialView, NSArray, UIViewController, NSString, UIContextMenuInteraction;

@interface SBHIconViewContextMenuWrapperViewController : UIViewController <WGWidgetViewControllerDelegate, SBHRecentsDocumentExtensionProviderDelegate> {

	MTMaterialView* _backgroundView;
	NSArray* _layoutConstraints;
	UIViewController* _contentViewController;
	NSString* _groupNameBase;
	double _backgroundScale;
	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) UIViewController * contentViewController;                       //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,copy) NSString * groupNameBase;                                         //@synthesize groupNameBase=_groupNameBase - In the implementation block
@property (assign,nonatomic) double backgroundScale;                                         //@synthesize backgroundScale=_backgroundScale - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;              //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UIViewController *)contentViewController;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)setGroupNameBase:(NSString *)arg1 ;
-(NSString *)groupNameBase;
-(double)backgroundScale;
-(void)setBackgroundScale:(double)arg1 ;
-(void)_applyPreferredContentSizeChange:(CGSize)arg1 ;
-(void)remoteViewControllerDidConnectForWidgetViewController:(id)arg1 ;
-(void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg1 ;
-(void)recentsDocumentExtensionViewControllerRequestsDismiss:(id)arg1 ;
@end

