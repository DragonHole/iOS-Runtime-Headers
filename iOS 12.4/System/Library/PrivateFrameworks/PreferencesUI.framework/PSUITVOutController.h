/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>

@class PSUITVOutManager;

@interface PSUITVOutController : PSListController {

	PSUITVOutManager* _tvOutManager;

}
-(id)specifiers;
-(void)handleTVOutChange;
-(void)writeValue:(CFStringRef)arg1 forKey:(CFStringRef)arg2 ;
-(id)isWidescreen:(id)arg1 ;
-(void)setWidescreen:(id)arg1 specifier:(id)arg2 ;
-(id)tvSignal:(id)arg1 ;
-(void)setTVSignal:(id)arg1 specifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
