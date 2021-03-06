/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface PUApertureGradientView : UIView {

	UIColor* _gradientColor;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) UIColor * gradientColor;              //@synthesize gradientColor=_gradientColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setGradientColor:(UIColor *)arg1 ;
-(UIColor *)gradientColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isOpaque;
-(void)drawRect:(CGRect)arg1 ;
@end

