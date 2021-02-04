/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCSModuleSettingsProviderObserver.h>

@class CCSModuleSettingsProvider, NSDictionary, NSHashTable, NSString;

@interface CCUIModuleSettingsManager : NSObject <CCSModuleSettingsProviderObserver> {

	CCSModuleSettingsProvider* _settingsProvider;
	NSDictionary* _settingsByIdentifier;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)orderedEnabledModuleIdentifiers;
-(id)sortModuleIdentifiers:(id)arg1 forInterfaceOrientation:(long long)arg2 ;
-(id)moduleSettingsForModuleIdentifier:(id)arg1 prototypeSize:(CCUILayoutSize)arg2 ;
-(void)_loadSettings;
-(void)_runBlockOnListeners:(/*^block*/id)arg1 ;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end
