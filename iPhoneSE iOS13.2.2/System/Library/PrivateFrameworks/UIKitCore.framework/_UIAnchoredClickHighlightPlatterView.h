/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIClickHighlightPlatterView.h>

@class UIView;

@interface _UIAnchoredClickHighlightPlatterView : _UIClickHighlightPlatterView {

	UIView* _anchorView;

}

@property (assign,nonatomic,__weak) UIView * anchorView;              //@synthesize anchorView=_anchorView - In the implementation block
-(id)initWithTargetedPreview:(id)arg1 ;
-(UIView *)anchorView;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)anchorToContainer;
-(void)deAnchor;
@end
