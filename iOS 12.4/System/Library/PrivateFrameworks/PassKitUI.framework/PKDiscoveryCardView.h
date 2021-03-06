/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKDiscoveryCardViewDelegate;
@class PKDiscoveryCard, PKDiscoveryMedia, UIImageView, UILabel, PKDiscoveryCallToActionFooterView, UITapGestureRecognizer, PKContinuousButton, PKDiscoveryArticleLayout;

@interface PKDiscoveryCardView : UIView {

	PKDiscoveryCard* _card;
	PKDiscoveryMedia* _media;
	UIImageView* _backgroundImageView;
	UILabel* _headingLabel;
	UILabel* _titleLabel;
	UIImageView* _shadowView;
	UIImageView* _maskImageView;
	PKDiscoveryCallToActionFooterView* _ctaFooterView;
	UITapGestureRecognizer* _tapRecognizer;
	PKContinuousButton* _dismissButton;
	BOOL _dismissable;
	BOOL _removing;
	BOOL _hasSafeAreaInsetOverride;
	PKDiscoveryArticleLayout* _articleLayout;
	id<PKDiscoveryCardViewDelegate> _delegate;
	long long _displayType;
	/*^block*/id _callToActionTappedOverride;
	UIEdgeInsets _safeAreaOverrideInsets;

}

@property (nonatomic,retain) PKDiscoveryArticleLayout * articleLayout;                     //@synthesize articleLayout=_articleLayout - In the implementation block
@property (assign,nonatomic,__weak) id<PKDiscoveryCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long displayType;                                        //@synthesize displayType=_displayType - In the implementation block
@property (assign,getter=isDismissable,nonatomic) BOOL dismissable;                        //@synthesize dismissable=_dismissable - In the implementation block
@property (assign,getter=isRemoving,nonatomic) BOOL removing;                              //@synthesize removing=_removing - In the implementation block
@property (assign,nonatomic) BOOL hasSafeAreaInsetOverride;                                //@synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaOverrideInsets;                          //@synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets - In the implementation block
@property (nonatomic,copy) id callToActionTappedOverride;                                  //@synthesize callToActionTappedOverride=_callToActionTappedOverride - In the implementation block
+(CGSize)compressedSize;
+(CGSize)expandedSize;
+(double)compressedWidth;
+(double)expandedHeight;
+(double)compressedHeight;
+(double)expandedWidth;
+(double)cornerRadius;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)_loadImageData;
-(void)setCallToActionTappedOverride:(id)arg1 ;
-(void)setSafeAreaOverrideInsets:(UIEdgeInsets)arg1 ;
-(void)setHasSafeAreaInsetOverride:(BOOL)arg1 ;
-(PKDiscoveryArticleLayout *)articleLayout;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 ;
-(BOOL)hasSafeAreaInsetOverride;
-(UIEdgeInsets)safeAreaOverrideInsets;
-(void)setArticleLayout:(PKDiscoveryArticleLayout *)arg1 ;
-(void)setDismissable:(BOOL)arg1 ;
-(id)callToActionTappedOverride;
-(BOOL)isRemoving;
-(void)setRemoving:(BOOL)arg1 ;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 dismissable:(BOOL)arg4 callToActionTappedOverride:(/*^block*/id)arg5 ;
-(id)_headingLabelFont;
-(id)_headingLabelTextColor;
-(id)_titleLabelTextColor;
-(id)_dismissButtonTintColor;
-(void)_dismissButtonPressed:(id)arg1 ;
-(void)_updateForDisplayType;
-(UIEdgeInsets)_currentContentInsets;
-(double)_yOffsetToHeadingLabel;
-(BOOL)isDismissable;
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKDiscoveryCardViewDelegate>)delegate;
-(void)setDisplayType:(long long)arg1 ;
-(long long)displayType;
@end

