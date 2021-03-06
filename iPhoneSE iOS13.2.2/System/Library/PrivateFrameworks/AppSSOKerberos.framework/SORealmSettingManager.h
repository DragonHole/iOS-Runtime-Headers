/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SORealmSettingManager : NSObject {

	NSMutableDictionary* _realmSettings;
	NSObject*<OS_dispatch_queue> _settingsQueue;

}

@property (nonatomic,retain) NSMutableDictionary * realmSettings;                     //@synthesize realmSettings=_realmSettings - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> settingsQueue;              //@synthesize settingsQueue=_settingsQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)settingsQueue;
-(void)setSettingsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRealmSettings:(NSMutableDictionary *)arg1 ;
-(void)loadRealmSettings;
-(void)saveRealmSettings;
-(NSMutableDictionary *)realmSettings;
-(id)settingsForRealm:(id)arg1 ;
-(void)removeRealm:(id)arg1 ;
@end

