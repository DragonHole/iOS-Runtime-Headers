/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, UILabel, NTKWorldClockRichComplicationHandsView, WorldClockCity;

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	SCD_Struct_NT5 _constants;
	NTKRichComplicationDialView* _dialView;
	UILabel* _cityNameLabel;
	NTKWorldClockRichComplicationHandsView* _handsView;
	WorldClockCity* _city;
	NSNumber* _clockTimerToken;
	BOOL _positionLabelNorthSide;

}
-(void)_updateUI;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(BOOL)_shouldUseDaytimeColoring;
-(id)init;
-(void)dealloc;
-(void)layoutSubviews;
@end

