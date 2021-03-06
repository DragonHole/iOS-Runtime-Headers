/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class DOCTagIconView, CAShapeLayer;

@interface DOCTagCheckableDotView : UIView {

	BOOL _checked;
	DOCTagIconView* _tagDotView;
	CAShapeLayer* _borderLayer;

}

@property (nonatomic,readonly) DOCTagIconView * tagDotView;              //@synthesize tagDotView=_tagDotView - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * borderLayer;               //@synthesize borderLayer=_borderLayer - In the implementation block
@property (assign,nonatomic) long long tagColor; 
@property (assign,nonatomic) BOOL checked;                               //@synthesize checked=_checked - In the implementation block
-(void)setTagColor:(long long)arg1 ;
-(DOCTagIconView *)tagDotView;
-(CAShapeLayer *)borderLayer;
-(long long)tagColor;
-(void)updateLayoutOfLayers;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
@end

