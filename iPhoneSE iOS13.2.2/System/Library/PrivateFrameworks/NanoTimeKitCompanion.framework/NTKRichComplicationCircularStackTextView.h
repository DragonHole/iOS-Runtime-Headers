/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel;

@interface NTKRichComplicationCircularStackTextView : NTKRichComplicationCircularBaseView {

	NTKColoringLabel* _line1Label;
	NTKColoringLabel* _line2Label;
	unsigned long long _highlightMode;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(id)_createAndAddLabel;
-(id)_desiredFontForLabel:(id)arg1 ;
-(long long)_line1FilterStyle;
-(long long)_line2FilterStyle;
@end
