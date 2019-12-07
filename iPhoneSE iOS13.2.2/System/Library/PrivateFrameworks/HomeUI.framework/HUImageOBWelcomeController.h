/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class UIImageView, UIImage;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController {

	UIImageView* _contentImageView;

}

@property (nonatomic,readonly) UIImageView * contentImageView;              //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,retain) UIImage * contentImage; 
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIImage *)contentImage;
-(void)setContentImage:(UIImage *)arg1 ;
-(double)_contentAspectRatio;
-(void)_updateContentMode;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4 ;
-(UIImageView *)contentImageView;
-(void)_viewDidUpdateContent;
@end
