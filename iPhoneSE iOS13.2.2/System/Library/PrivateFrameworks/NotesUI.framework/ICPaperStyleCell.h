/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface ICPaperStyleCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIView* _selectionView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;               //@synthesize selectionView=_selectionView - In the implementation block
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(UIView *)selectionView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)setupCell;
-(id)preferredTintColor;
@end
