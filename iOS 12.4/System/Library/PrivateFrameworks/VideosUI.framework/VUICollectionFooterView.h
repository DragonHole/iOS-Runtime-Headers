/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class IKViewElement, VUIButton;

@interface VUICollectionFooterView : UICollectionReusableView {

	IKViewElement* _viewElement;
	IKViewElement* _buttonViewElement;
	VUIButton* _buttonView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * buttonViewElement;              //@synthesize buttonViewElement=_buttonViewElement - In the implementation block
@property (nonatomic,retain) VUIButton * buttonView;                         //@synthesize buttonView=_buttonView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
+(id)configureCollectionFooterViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIButton *)buttonView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setButtonViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)buttonViewElement;
-(void)setButtonView:(VUIButton *)arg1 ;
@end

