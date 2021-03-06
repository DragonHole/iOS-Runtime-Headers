/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXReusableObjectPoolDelegate.h>
#import <libobjc.A.dylib/PXAssetsSceneDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUAssetExplorerReviewScreenViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKPluginEntryViewController.h>
#import <libobjc.A.dylib/AEMessagesShelfLayoutDelegate.h>

@class PXTilingController, PXBasicUIViewTileAnimator, PXAssetsScene, PXScrollViewController, PUReviewDataSource, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, AEWrappedDataSourceManager, AEPackageTransport, NSMutableSet, UIColor, NSString;

@interface AEMessagesShelfViewController : UIViewController <PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTileSource, PXChangeObserver, PUAssetExplorerReviewScreenViewControllerDelegate, UIGestureRecognizerDelegate, CKPluginEntryViewController, AEMessagesShelfLayoutDelegate> {

	PXTilingController* __tilingController;
	PXBasicUIViewTileAnimator* __tileAnimator;
	PXAssetsScene* __sceneController;
	PXScrollViewController* __scrollViewController;
	PUReviewDataSource* __dataSource;
	PUReviewAssetsDataSourceManager* __internalReviewDataSourceManager;
	PUReviewAssetsMediaProvider* __internalReviewMediaProvider;
	AEWrappedDataSourceManager* __wrappedDataSourceManager;
	AEPackageTransport* __packageTransport;
	NSMutableSet* __tilesInUse;
	long long __indexToScrollTo;
	UIColor* __roundedCornerOverlayFillColor;

}

@property (nonatomic,readonly) PXTilingController * _tilingController;                                          //@synthesize _tilingController=__tilingController - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                       //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXAssetsScene * _sceneController;                                                //@synthesize _sceneController=__sceneController - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * _scrollViewController;                                  //@synthesize _scrollViewController=__scrollViewController - In the implementation block
@property (nonatomic,readonly) PUReviewDataSource * _dataSource;                                                //@synthesize _dataSource=__dataSource - In the implementation block
@property (nonatomic,readonly) PUReviewAssetsDataSourceManager * _internalReviewDataSourceManager;              //@synthesize _internalReviewDataSourceManager=__internalReviewDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUReviewAssetsMediaProvider * _internalReviewMediaProvider;                      //@synthesize _internalReviewMediaProvider=__internalReviewMediaProvider - In the implementation block
@property (nonatomic,readonly) AEWrappedDataSourceManager * _wrappedDataSourceManager;                          //@synthesize _wrappedDataSourceManager=__wrappedDataSourceManager - In the implementation block
@property (nonatomic,readonly) AEPackageTransport * _packageTransport;                                          //@synthesize _packageTransport=__packageTransport - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                                      //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (assign,setter=_setIndexToScrollTo:,nonatomic) long long _indexToScrollTo;                            //@synthesize _indexToScrollTo=__indexToScrollTo - In the implementation block
@property (nonatomic,retain) UIColor * _roundedCornerOverlayFillColor;                                          //@synthesize _roundedCornerOverlayFillColor=__roundedCornerOverlayFillColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
@property (readonly) BOOL loadedContentView; 
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(PXScrollViewController *)_scrollViewController;
-(NSMutableSet *)_tilesInUse;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(PXTilingController *)_tilingController;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2 ;
-(id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PUReviewDataSource *)_dataSource;
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)_currentAssetsDataSource;
-(id)framesOfVisibleContentViewInCoordinateSpace:(id)arg1 ;
-(BOOL)wantsEdgeToEdgeLayout;
-(PUReviewAssetsDataSourceManager *)_internalReviewDataSourceManager;
-(PUReviewAssetsMediaProvider *)_internalReviewMediaProvider;
-(void)_transportStagingStateDidChange;
-(AEPackageTransport *)_packageTransport;
-(PXAssetsScene *)_sceneController;
-(void)_removeFromShelf:(id)arg1 ;
-(void)_toggleIris:(id)arg1 ;
-(UIColor *)_roundedCornerOverlayFillColor;
-(void)_setIndexToScrollTo:(long long)arg1 ;
-(long long)_indexToScrollTo;
-(id)contentAssetReferenceAtPoint:(CGPoint)arg1 ;
-(void)_presentReviewForAssetReference:(id)arg1 ;
-(void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(BOOL)arg2 mediaOrigin:(long long)arg3 ;
-(id)_traverseHierarchyForFillColorStartingWithView:(id)arg1 ;
-(long long)layout:(id)arg1 irisToggleStateForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsVideo:(PXSimpleIndexPath)arg2 ;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsLoop:(PXSimpleIndexPath)arg2 ;
-(double)layout:(id)arg1 itemAtIndexPathDuration:(PXSimpleIndexPath)arg2 ;
-(BOOL)layoutShouldShowVideoDuration:(id)arg1 ;
-(id)initWithPackageTransport:(id)arg1 ;
-(AEWrappedDataSourceManager *)_wrappedDataSourceManager;
-(void)set_roundedCornerOverlayFillColor:(UIColor *)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)handleTap:(id)arg1 ;
@end

