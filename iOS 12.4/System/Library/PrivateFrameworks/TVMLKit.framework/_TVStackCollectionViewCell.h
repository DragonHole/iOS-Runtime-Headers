/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVStackCollectionViewCell : UICollectionViewCell {

	UIView* _cellContentView;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)layoutSubviews;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
@end

