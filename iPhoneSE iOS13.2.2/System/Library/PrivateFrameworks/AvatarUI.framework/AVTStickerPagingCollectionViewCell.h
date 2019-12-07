/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell {

	UIView* _pageContentView;
	UIEdgeInsets _additionnalContentInsets;

}

@property (nonatomic,retain) UIView * pageContentView;                           //@synthesize pageContentView=_pageContentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets additionnalContentInsets;              //@synthesize additionnalContentInsets=_additionnalContentInsets - In the implementation block
+(id)cellIdentifier;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setPageContentView:(UIView *)arg1 ;
-(void)setAdditionnalContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)additionnalContentInsets;
-(UIView *)pageContentView;
@end
