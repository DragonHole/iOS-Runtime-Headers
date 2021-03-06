/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>

@interface NTKStopwatchComplicationController : NTKComplicationController

@property (nonatomic,__weak,readonly) id<NTKStopwatchComplicationDisplay> legacyDisplay; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(id)complicationApplicationIdentifier;
-(void)_updateDisplay;
-(void)_activate;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)_handleLocaleChange;
-(void)_handleTimeFormatChange;
-(void)_stopStopwatchTimerUpdates;
-(void)_startStopwatchTimerUpdates;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleReloadNotification;
-(void)_deactivate;
@end

