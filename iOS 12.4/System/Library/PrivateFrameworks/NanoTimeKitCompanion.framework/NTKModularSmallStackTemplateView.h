/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class NTKOneColumnModularSmallLayoutAttributes, NTKColoringLabel, UIView;

@interface NTKModularSmallStackTemplateView : NTKModularTemplateView {

	NTKOneColumnModularSmallLayoutAttributes* _layoutAttributes;
	NTKColoringLabel* _titleLabel;
	NTKColoringLabel* _subtitleLabel;
	UIView*<NTKComplicationImageView> _imageView;

}

@property (nonatomic,retain) NTKColoringLabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(void)load;
-(void)_layoutContentView;
-(NTKColoringLabel *)subtitleLabel;
-(void)setSubtitleLabel:(NTKColoringLabel *)arg1 ;
-(void)_updateLayoutForLabel:(id)arg1 baselineOffset:(double)arg2 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(NTKColoringLabel *)titleLabel;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)setTitleLabel:(NTKColoringLabel *)arg1 ;
-(void)_update;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
@end

