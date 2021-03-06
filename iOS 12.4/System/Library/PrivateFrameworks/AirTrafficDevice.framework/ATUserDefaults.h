/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject {

	NSMutableDictionary* _defaults;

}

@property (assign,nonatomic) BOOL hasCompletedDataMigration; 
@property (nonatomic,retain) NSDictionary * diskUsageInfo; 
+(id)readOnlyDefaults;
+(id)sharedInstance;
+(void)synchronize;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(BOOL)hasCompletedDataMigration;
-(void)setDiskUsageInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)diskUsageInfo;
-(void)_updateDefaults;
-(id)allHosts;
-(void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2 ;
-(void)updateLastSyncWithHostLibrary:(id)arg1 ;
-(void)removeHost:(id)arg1 ;
-(id)hostInfoForIdentifier:(id)arg1 ;
-(id)init;
@end

