/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDashboardItemPresenter <NSObject>
@optional
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(void)cellDidDisappear:(id)arg1 foritem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
-(void)cellWillAppear:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
-(BOOL)cellIsStackableForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(BOOL)cellIsIndependentForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(void)prefetchForItem:(id)arg1 inCollectionView:(id)arg2;

@required
-(Class)itemClass;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(CGSize*)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;

@end

