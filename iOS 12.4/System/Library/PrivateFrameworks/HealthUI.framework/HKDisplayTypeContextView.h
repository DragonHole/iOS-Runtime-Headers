/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/HKDisplayTypeContextCollectionViewCellDelegate.h>

@protocol HKDisplayTypeContextViewDelegate;
@class UICollectionView, HKHorizontalFlowLayout, NSLayoutConstraint, NSArray, NSString;

@interface HKDisplayTypeContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextCollectionViewCellDelegate> {

	UICollectionView* _collectionView;
	HKHorizontalFlowLayout* _collectionViewLayout;
	NSLayoutConstraint* _collectionHeightConstraint;
	NSArray* _displayTypeContextItems;
	id<HKDisplayTypeContextViewDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * displayTypeContextItems;                                 //@synthesize displayTypeContextItems=_displayTypeContextItems - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeContextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapOnInfoButtonForCollectionViewCell:(id)arg1 ;
-(void)setDisplayTypeContextItems:(NSArray *)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(NSArray *)displayTypeContextItems;
-(id)init;
-(void)setDelegate:(id<HKDisplayTypeContextViewDelegate>)arg1 ;
-(id<HKDisplayTypeContextViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)preferredHeight;
@end
