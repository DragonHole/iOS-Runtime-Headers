/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPaymentTransactionCollectionViewCell, UIFont, UIImage, NSCache, NSDateFormatter, NSString;

@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter> {

	PKPaymentTransactionCollectionViewCell* _sampleCell;
	UIFont* _transactionCellPrimaryLabelFont;
	UIFont* _transactionCellValueLabelFont;
	UIFont* _transactionCellSecondaryLabelFont;
	UIImage* _emptyImage;
	UIImage* _cashbackImage;
	UIImage* _transactionListImage;
	UIImage* _interestImage;
	UIImage* _appleCardImage;
	UIImage* _refundsImage;
	NSCache* _iconsPerMerchantCategory;
	NSCache* _iconsPerMerchant;
	CGSize _groupSize;
	BOOL _needsSizing;
	NSDateFormatter* _formatterYear;
	NSDateFormatter* _formatterMonth;
	BOOL _useAccessibilityLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_imageSize;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(BOOL)arg5 ;
-(id)_viewControllerForItem:(id)arg1 ;
-(id)cashbackImage;
-(id)appleCardImage;
-(id)transactionListImage;
-(id)interestImage;
-(id)refundsImage;
-(id)_contactKeysToFetch;
-(Class)itemClass;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(id)init;
@end
