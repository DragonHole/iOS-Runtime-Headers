/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProductInfoAiringLayout, VUILabel, _TVImageView;

@interface VUIProductInfoAiringView : UIView {

	VUIProductInfoAiringLayout* _layout;
	VUILabel* _infoLabel;
	_TVImageView* _logo;

}

@property (nonatomic,retain) VUIProductInfoAiringLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * infoLabel;                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * logo;                              //@synthesize logo=_logo - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingView:(id)arg2 ;
+(id)airingTextWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)airingLogoWithImageDictionary:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(void)setLogo:(_TVImageView *)arg1 ;
-(_TVImageView *)logo;
-(VUILabel *)infoLabel;
-(void)setInfoLabel:(VUILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIProductInfoAiringLayout *)layout;
-(void)setLayout:(VUIProductInfoAiringLayout *)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end
