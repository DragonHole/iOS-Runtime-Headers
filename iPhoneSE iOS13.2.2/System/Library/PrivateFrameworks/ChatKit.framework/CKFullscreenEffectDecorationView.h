/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionReusableView.h>

@protocol CKFullscreenEffectView;
@class UIView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView {

	UIView*<CKFullscreenEffectView> _effectView;

}

@property (assign,nonatomic,__weak) UIView*<CKFullscreenEffectView> effectView;              //@synthesize effectView=_effectView - In the implementation block
+(id)reuseIdentifier;
+(id)decorationViewKind;
-(void)prepareForReuse;
-(UIView*<CKFullscreenEffectView>)effectView;
-(void)setEffectView:(UIView*<CKFullscreenEffectView>)arg1 ;
-(void)setupForEffectView:(id)arg1 ;
-(void)tearDownEffectView;
@end

