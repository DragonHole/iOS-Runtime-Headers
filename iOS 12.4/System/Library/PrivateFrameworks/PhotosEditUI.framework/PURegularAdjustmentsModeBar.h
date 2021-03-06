/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosEditUI/PUAdjustmentsModeBar.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSMapTable, UIView, PUSlidersCollectionView, UIButton, NSArray, PUAdjustmentsMode, NSString;

@interface PURegularAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource> {

	NSMapTable* _supermodeButtonsByMode;
	NSMapTable* _supermodeLabelsByMode;
	NSMapTable* _supermodeTitleBackgroundByMode;
	UIView* _modeDetailView;
	PUSlidersCollectionView* _modeDetailSlidersCollectionView;
	UIButton* _expansionButton;
	NSArray* _supermodeButtonsConstraints;
	NSArray* _modeDetailViewConstraints;
	NSArray* _modeDetailSlidersCollectionViewConstraints;
	NSArray* _expansionButtonConstraints;
	NSArray* __availableSupermodes;
	NSArray* __visibleSliderModes;

}

@property (nonatomic,readonly) PUAdjustmentsMode * _expandedSupermode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedMode:(id)arg1 animated:(BOOL)arg2 ;
-(id)newConstraintsForModePickerList:(id)arg1 ;
-(id)currentSlidersCollectionView;
-(id)visibleSliderAdjustmentModes;
-(BOOL)wantsToHandleEventAtPoint:(CGPoint)arg1 ;
-(void)updateEnabledForCurrentMode;
-(void)configureSliderCell:(id)arg1 forMode:(id)arg2 ;
-(void)setSlidersLongContentLength:(double)arg1 ;
-(void)_updateSupermodeButtons;
-(id)_availableSupermodes;
-(PUAdjustmentsMode *)_expandedSupermode;
-(id)_layoutConstraintsForExpandedModeDetailView:(id)arg1 mode:(id)arg2 ;
-(double)_slidersViewLongSideLength;
-(void)_updateViewsForExpandedSupermode:(id)arg1 fromOldSupermode:(id)arg2 animated:(BOOL)arg3 ;
-(void)_createNewModeDetailViewAndSubviews;
-(id)_layoutConstraintsForCollapsedModeDetailView:(id)arg1 mode:(id)arg2 ;
-(void)_handleModeButton:(id)arg1 ;
-(void)updateConstraints;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

