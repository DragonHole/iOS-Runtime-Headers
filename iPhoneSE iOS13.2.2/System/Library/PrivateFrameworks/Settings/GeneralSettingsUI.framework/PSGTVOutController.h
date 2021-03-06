/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralSettingsUI/GeneralSettingsUI-Structs.h>
#import <Preferences/PSListController.h>

@class PSGTVOutManager;

@interface PSGTVOutController : PSListController {

	PSGTVOutManager* _tvOutManager;

}
-(id)init;
-(void)dealloc;
-(id)specifiers;
-(void)handleTVOutChange;
-(void)writeValue:(CFStringRef)arg1 forKey:(CFStringRef)arg2 ;
-(id)isWidescreen:(id)arg1 ;
-(void)setWidescreen:(id)arg1 specifier:(id)arg2 ;
-(id)tvSignal:(id)arg1 ;
-(void)setTVSignal:(id)arg1 specifier:(id)arg2 ;
@end

