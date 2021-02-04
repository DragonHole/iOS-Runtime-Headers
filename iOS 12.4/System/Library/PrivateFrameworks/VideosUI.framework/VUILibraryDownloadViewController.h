/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>
#import <libobjc.A.dylib/VUILibraryShelfCollectionViewControllerDelegate.h>

@class VUILibraryBannerCollectionViewCell, UIBarButtonItem, VUILibraryMediaEntityShelvesViewModel, _VUIDownloadSeeAllController, NSString;

@interface VUILibraryDownloadViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIMediaEntitiesFetchControllerDelegate, VUILibraryShelfCollectionViewControllerDelegate> {

	VUILibraryBannerCollectionViewCell* _bannerViewSizingCell;
	BOOL _isPhone;
	UIBarButtonItem* _libraryBarButton;
	VUILibraryMediaEntityShelvesViewModel* _viewModel;
	UIBarButtonItem* _currentNavBarButtonItem;
	_VUIDownloadSeeAllController* _currentSeeAllController;

}

@property (nonatomic,retain) VUILibraryMediaEntityShelvesViewModel * viewModel;                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * currentNavBarButtonItem;                           //@synthesize currentNavBarButtonItem=_currentNavBarButtonItem - In the implementation block
@property (nonatomic,retain) _VUIDownloadSeeAllController * currentSeeAllController;              //@synthesize currentSeeAllController=_currentSeeAllController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryBarButton;                                  //@synthesize libraryBarButton=_libraryBarButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_localizedTitleForMediaEntityType:(id)arg1 ;
-(VUILibraryMediaEntityShelvesViewModel *)viewModel;
-(void)setViewModel:(VUILibraryMediaEntityShelvesViewModel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)start;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4 ;
-(void)seeAllButtonPressed:(id)arg1 ;
-(id)_localizedBannerString;
-(void)setLibraryBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)libraryBarButton;
-(UIBarButtonItem *)currentNavBarButtonItem;
-(void)setCurrentNavBarButtonItem:(UIBarButtonItem *)arg1 ;
-(_VUIDownloadSeeAllController *)currentSeeAllController;
-(void)setCurrentSeeAllController:(_VUIDownloadSeeAllController *)arg1 ;
@end
