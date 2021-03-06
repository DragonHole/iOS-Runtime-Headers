/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@class CALayer, SXSolidBorderView;

@interface SXLineComponentView : SXComponentView {

	CALayer* _strokeLayer;
	SXSolidBorderView* _borderView;
	CGRect _strokeRect;

}

@property (nonatomic,retain) CALayer * strokeLayer;                       //@synthesize strokeLayer=_strokeLayer - In the implementation block
@property (nonatomic,retain) SXSolidBorderView * borderView;              //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) CGRect strokeRect;                           //@synthesize strokeRect=_strokeRect - In the implementation block
-(void)setBorderView:(SXSolidBorderView *)arg1 ;
-(SXSolidBorderView *)borderView;
-(void)presentComponentWithChanges:(SCD_Struct_SX15)arg1 ;
-(BOOL)userInteractable;
-(CGRect)strokeRect;
-(CALayer *)strokeLayer;
-(void)setStrokeLayer:(CALayer *)arg1 ;
-(void)setStrokeRect:(CGRect)arg1 ;
@end

