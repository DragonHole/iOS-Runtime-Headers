/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MusicLibraryBrowseTableViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicProductAdditionalMetadataViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicVerticalScrollingContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicMediaDetailSplitViewController.h>

@protocol MusicEntityProviding, MusicMediaDetailSplitViewControllerDelegate;
@class MusicProductAdditionalMetadataViewController, MusicProductTracklistTableViewConfiguration, MusicEntityValueContext, MusicProductTracklistTableViewController, MusicVerticalScrollingContainerViewController, MusicClientContext, UIViewController, MusicMediaDetailTintInformation, UIImage, NSString, UIScrollView;

@interface MusicMediaProductSplitMainViewController : UIViewController <MusicLibraryBrowseTableViewControllerDelegate, MusicProductAdditionalMetadataViewControllerDelegate, MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController> {

	long long _presentationSource;
	MusicProductAdditionalMetadataViewController* _productAdditionalMetadataViewController;
	MusicProductTracklistTableViewConfiguration* _tracklistTableViewConfiguration;
	UIEdgeInsets _verticalScrollingContainerContentInsetAdditions;
	BOOL _forContentCreation;
	BOOL _trailingSeparatorInsetFollowsLayoutInsets;
	MusicEntityValueContext* _containerEntityValueContext;
	MusicProductTracklistTableViewController* _tracklistTableViewController;
	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	MusicClientContext* _clientContext;
	id<MusicEntityProviding> _containerEntityProvider;
	UIViewController* _headerContentViewController;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	id<MusicMediaDetailSplitViewControllerDelegate> _mediaSplitViewControllerDelegate;
	long long _productDescriptionTextStyle;
	id<MusicEntityProviding> _tracklistEntityProvider;
	unsigned long long _editableComponents;
	UIImage* _editedContentArtworkImage;
	NSString* _editedContentTitle;
	UIViewController* _relatedContentViewController;

}

@property (nonatomic,readonly) MusicEntityValueContext * _containerEntityValueContext;                                                 //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (assign,nonatomic) unsigned long long editableComponents;                                                                    //@synthesize editableComponents=_editableComponents - In the implementation block
@property (nonatomic,readonly) MusicProductTracklistTableViewController * _tracklistTableViewController;                               //@synthesize tracklistTableViewController=_tracklistTableViewController - In the implementation block
@property (nonatomic,readonly) MusicVerticalScrollingContainerViewController * _verticalScrollingContainerViewController;              //@synthesize verticalScrollingContainerViewController=_verticalScrollingContainerViewController - In the implementation block
@property (nonatomic,retain) MusicClientContext * clientContext;                                                                       //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> containerEntityProvider;                                                       //@synthesize containerEntityProvider=_containerEntityProvider - In the implementation block
@property (getter=isForContentCreation,nonatomic,readonly) BOOL forContentCreation;                                                    //@synthesize forContentCreation=_forContentCreation - In the implementation block
@property (nonatomic,retain) UIViewController * headerContentViewController;                                                           //@synthesize headerContentViewController=_headerContentViewController - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                               //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaDetailSplitViewControllerDelegate> mediaSplitViewControllerDelegate;                  //@synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) long long presentationSource;                                                                           //@synthesize presentationSource=_presentationSource - In the implementation block
@property (assign,nonatomic) long long prominentTrackStoreID; 
@property (assign,nonatomic) long long productDescriptionTextStyle;                                                                    //@synthesize productDescriptionTextStyle=_productDescriptionTextStyle - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> tracklistEntityProvider;                                                       //@synthesize tracklistEntityProvider=_tracklistEntityProvider - In the implementation block
@property (assign,nonatomic) BOOL trailingSeparatorInsetFollowsLayoutInsets;                                                           //@synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets - In the implementation block
@property (nonatomic,retain) UIImage * editedContentArtworkImage;                                                                      //@synthesize editedContentArtworkImage=_editedContentArtworkImage - In the implementation block
@property (nonatomic,copy) NSString * editedContentTitle;                                                                              //@synthesize editedContentTitle=_editedContentTitle - In the implementation block
@property (nonatomic,retain) UIViewController * relatedContentViewController;                                                          //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (nonatomic,readonly) UIScrollView * containerScrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commitEditing;
-(void)cancelEditing;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(long long)presentationSource;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_containerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_reloadVerticalScrollingContainerItems;
-(id<MusicMediaDetailSplitViewControllerDelegate>)mediaSplitViewControllerDelegate;
-(void)verticalScrollingContainerViewControllerDidScroll:(id)arg1 ;
-(void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1 ;
-(void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setMediaSplitViewControllerDelegate:(id<MusicMediaDetailSplitViewControllerDelegate>)arg1 ;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setEditedContentArtworkImage:(UIImage *)arg1 ;
-(UIImage *)editedContentArtworkImage;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(MusicEntityValueContext *)_containerEntityValueContext;
-(MusicVerticalScrollingContainerViewController *)_verticalScrollingContainerViewController;
-(void)setProminentTrackStoreID:(long long)arg1 ;
-(long long)prominentTrackStoreID;
-(void)setTrailingSeparatorInsetFollowsLayoutInsets:(BOOL)arg1 ;
-(id<MusicEntityProviding>)containerEntityProvider;
-(void)setProductDescriptionTextStyle:(long long)arg1 ;
-(void)setEditedContentTitle:(NSString *)arg1 ;
-(unsigned long long)editableComponents;
-(void)setHeaderContentViewController:(UIViewController *)arg1 ;
-(BOOL)isForContentCreation;
-(id<MusicEntityProviding>)tracklistEntityProvider;
-(void)_configureProductAdditionalMetadataViewController:(id)arg1 ;
-(id)_loadProductTracklistTableViewConfigurationWithTracklistEntityProvider:(id)arg1 ;
-(id)_loadProductHeaderLockupContentDescriptor;
-(void)_configureWithTintInformation;
-(BOOL)trailingSeparatorInsetFollowsLayoutInsets;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(long long)arg4 forContentCreation:(BOOL)arg5 ;
-(void)libraryBrowseTableViewControllerDidFinishContentHeightAnimation:(id)arg1 ;
-(void)libraryBrowseTableViewControllerWillBeginContentHeightAnimation:(id)arg1 ;
-(long long)productDescriptionTextStyle;
-(void)_prepareToCommitEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)editedContentTitle;
-(void)_commitEditingWithTracklistEntityProviderChangeRecords:(id)arg1 ;
-(MusicProductTracklistTableViewController *)_tracklistTableViewController;
-(void)setEditableComponents:(unsigned long long)arg1 ;
-(id)_productAdditionalMetadataViewController;
-(void)productAdditionalMetadataViewControllerDidFinishContentHeightAnimation:(id)arg1 ;
-(void)productAdditionalMetadataViewControllerWillBeginContentHeightAnimation:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(UIViewController *)headerContentViewController;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)contentScrollView;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(UIScrollView *)containerScrollView;
-(void)setRelatedContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)relatedContentViewController;
@end
