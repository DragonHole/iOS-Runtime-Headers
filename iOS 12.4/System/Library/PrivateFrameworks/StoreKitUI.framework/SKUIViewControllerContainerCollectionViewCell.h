/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class SKUIViewControllerContainerView, NSIndexPath, UIViewController, UIView;

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {

	SKUIViewControllerContainerView* _viewControllerContainerView;
	BOOL _managesViewControllerContainerViewLayout;
	double _maximumContentWidth;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic) double maximumContentWidth;                                 //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (nonatomic,retain) UIViewController * viewController; 
@property (nonatomic,readonly) UIView * viewControllerContainerView; 
@property (assign,nonatomic) BOOL managesViewControllerContainerViewLayout;              //@synthesize managesViewControllerContainerViewLayout=_managesViewControllerContainerViewLayout - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                  //@synthesize indexPath=_indexPath - In the implementation block
-(void)setManagesViewControllerContainerViewLayout:(BOOL)arg1 ;
-(UIView *)viewControllerContainerView;
-(BOOL)managesViewControllerContainerViewLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setMaximumContentWidth:(double)arg1 ;
-(double)maximumContentWidth;
@end

