/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, NSArray, UICollectionView;

@interface _TVAlertTemplateView : UIView {

	UIImage* _bgImage;
	UIImageView* _bgImageView;
	NSArray* _viewsAbove;
	UICollectionView* _collectionView;
	NSArray* _viewsBelow;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSArray * viewsAbove;                           //@synthesize viewsAbove=_viewsAbove - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelow;                           //@synthesize viewsBelow=_viewsBelow - In the implementation block
-(void)setViewsAbove:(NSArray *)arg1 ;
-(void)setViewsBelow:(NSArray *)arg1 ;
-(void)setBgImage:(id)arg1 ;
-(NSArray *)viewsAbove;
-(NSArray *)viewsBelow;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

