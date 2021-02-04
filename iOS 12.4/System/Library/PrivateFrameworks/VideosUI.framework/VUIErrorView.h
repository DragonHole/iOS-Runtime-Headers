/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIErrorLayout, VUILabel;

@interface VUIErrorView : UIView {

	VUIErrorLayout* _layout;
	VUILabel* _titleLabel;
	VUILabel* _descriptionLabel;
	VUILabel* _debugTextLabel;
	VUILabel* _debugTextLabel2;

}

@property (nonatomic,retain) VUIErrorLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) VUILabel * debugTextLabel;                //@synthesize debugTextLabel=_debugTextLabel - In the implementation block
@property (nonatomic,retain) VUILabel * debugTextLabel2;               //@synthesize debugTextLabel2=_debugTextLabel2 - In the implementation block
-(VUILabel *)descriptionLabel;
-(void)setDescriptionLabel:(VUILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)titleLabel;
-(VUIErrorLayout *)layout;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setLayout:(VUIErrorLayout *)arg1 ;
-(VUILabel *)debugTextLabel;
-(void)setDebugTextLabel:(VUILabel *)arg1 ;
-(void)setDebugTextLabel2:(VUILabel *)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(VUILabel *)debugTextLabel2;
@end
