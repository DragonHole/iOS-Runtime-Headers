/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView {

	NTKColoringLabel* _firstLineLabel;
	NTKColoringLabel* _secondLineLabel;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(void)load;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateLabelsForFontChange;
-(void)_updateForTemplateChange;
-(void)setUsesMultiColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateLabelColors;
-(void)setForegroundColor:(id)arg1 ;
@end
