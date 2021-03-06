/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface UIKBASPCoverView : UIView {

	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
+(id)ASPCoverViewColor;
+(id)ASPCoverView:(BOOL)arg1 withFrame:(CGRect)arg2 isRightToLeft:(BOOL)arg3 withTextWidth:(double)arg4 ;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(id)initCoverViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 withTextWidth:(double)arg3 ;
-(id)initCoverBackgroundViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end

