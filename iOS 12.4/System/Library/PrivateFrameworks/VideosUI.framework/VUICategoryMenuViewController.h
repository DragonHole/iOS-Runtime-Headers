/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol VUICategoryMenuViewControllerDelegate;
@class VUICollectionView, VUILibraryMenuItemViewCell, VUIMenuSectionHeaderCollectionViewCell, VUIMenuDataSource, NSString;

@interface VUICategoryMenuViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _shouldShowBackButton;
	id<VUICategoryMenuViewControllerDelegate> _delegate;
	VUICollectionView* _menuCollectionView;
	VUILibraryMenuItemViewCell* _sizingCell;
	VUIMenuSectionHeaderCollectionViewCell* _sectionHeaderSizingCell;
	VUIMenuDataSource* _categories;

}

@property (nonatomic,retain) VUICollectionView * menuCollectionView;                                        //@synthesize menuCollectionView=_menuCollectionView - In the implementation block
@property (nonatomic,retain) VUILibraryMenuItemViewCell * sizingCell;                                       //@synthesize sizingCell=_sizingCell - In the implementation block
@property (nonatomic,retain) VUIMenuSectionHeaderCollectionViewCell * sectionHeaderSizingCell;              //@synthesize sectionHeaderSizingCell=_sectionHeaderSizingCell - In the implementation block
@property (nonatomic,retain) VUIMenuDataSource * categories;                                                //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic,__weak) id<VUICategoryMenuViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBackButton;                                                     //@synthesize shouldShowBackButton=_shouldShowBackButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCategories:(VUIMenuDataSource *)arg1 ;
-(void)setDelegate:(id<VUICategoryMenuViewControllerDelegate>)arg1 ;
-(id<VUICategoryMenuViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(VUIMenuDataSource *)categories;
-(void)_updateNavigationBarPadding;
-(void)setShouldShowBackButton:(BOOL)arg1 ;
-(void)_updateCollectionLayout;
-(BOOL)shouldShowBackButton;
-(void)_backSelected:(id)arg1 ;
-(VUICollectionView *)menuCollectionView;
-(id)initWithCategories:(id)arg1 ;
-(void)updateWithCategories:(id)arg1 updateEntitiesIfNecessaryBlock:(/*^block*/id)arg2 ;
-(void)setMenuCollectionView:(VUICollectionView *)arg1 ;
-(VUILibraryMenuItemViewCell *)sizingCell;
-(void)setSizingCell:(VUILibraryMenuItemViewCell *)arg1 ;
-(VUIMenuSectionHeaderCollectionViewCell *)sectionHeaderSizingCell;
-(void)setSectionHeaderSizingCell:(VUIMenuSectionHeaderCollectionViewCell *)arg1 ;
@end
