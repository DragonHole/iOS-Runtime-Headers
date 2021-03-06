/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSyncSettingsProviderDelegate;
@class NPSDomainAccessor, DNDSSyncSettings;

@interface DNDSSyncSettingsProvider : NSObject {

	NPSDomainAccessor* _accessor;
	DNDSSyncSettings* _syncSettings;
	id<DNDSSyncSettingsProviderDelegate> _delegate;

}

@property (nonatomic,copy,readonly) DNDSSyncSettings * syncSettings;                            //@synthesize syncSettings=_syncSettings - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSSyncSettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(DNDSSyncSettings *)syncSettings;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(void)_updateSyncPreferences;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<DNDSSyncSettingsProviderDelegate>)arg1 ;
-(id<DNDSSyncSettingsProviderDelegate>)delegate;
@end

