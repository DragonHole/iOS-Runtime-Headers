/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CMKFlipButton : UIButton {

	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)flipButton;
-(id)_flipImage;
-(void)_commonCMKFlipButtonInitialization;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
@end
