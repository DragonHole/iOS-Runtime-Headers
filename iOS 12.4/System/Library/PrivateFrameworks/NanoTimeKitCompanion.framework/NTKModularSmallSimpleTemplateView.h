/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {

	UIView*<NTKComplicationImageView> _imageView;
	NTKColoringLabel* _label;
	long long _maxDynamicFontSize;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(id)supportedTemplateClasses;
+(void)load;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureWithTextTemplate:(id)arg1 ;
-(void)_configureWithImageTemplate:(id)arg1 ;
-(double)_maxTextWidthForDynamicFontSize:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_update;
@end

