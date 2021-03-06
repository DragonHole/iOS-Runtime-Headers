/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNSettings, MNObserverHashTable;

@interface MNSettingsManager : NSObject {

	MNSettings* _settings;
	MNObserverHashTable* _observers;

}

@property (nonatomic,readonly) MNSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)sharedInstance;
-(void)updateForSettings:(id)arg1 ;
-(void)_setVolumeFromDefaults;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(MNSettings *)settings;
@end

