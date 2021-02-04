/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _SBOrientationTransformedContentView, NSArray;

@interface SBOrientationTransformWrapperView : UIView {

	_SBOrientationTransformedContentView* _transformedView;
	long long _contentOrientation;
	long long _containerOrientation;

}

@property (assign,nonatomic) long long contentOrientation;                //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,nonatomic) long long containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * contentViews; 
-(void)setContainerOrientation:(long long)arg1 ;
-(void)setContentOrientation:(long long)arg1 ;
-(void)_updateGeometry;
-(long long)containerOrientation;
-(long long)contentOrientation;
-(NSArray *)contentViews;
-(void)addContentView:(id)arg1 ;
-(void)bringContentSubviewToFront:(id)arg1 ;
-(CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGPoint)arg1 ;
-(CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGRect)arg1 ;
-(CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGAffineTransform)arg1 ;
-(CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGPoint)arg1 ;
-(CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGRect)arg1 ;
-(CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGAffineTransform)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
