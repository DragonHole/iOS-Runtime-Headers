/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIFlashlightObserver <NSObject>
@optional
-(void)flashlightOverheatedDidChange:(BOOL)arg1;

@required
-(void)flashlightAvailabilityDidChange:(BOOL)arg1;
-(void)flashlightLevelDidChange:(unsigned long long)arg1;

@end

