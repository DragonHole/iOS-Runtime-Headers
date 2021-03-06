/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PSGBackupDisabledAppsInfo : NSObject {

	BOOL _includePhoto;
	NSArray* _backupDisabledAppsForDisplay;
	long long _backupDisabledAppCount;

}

@property (nonatomic,retain) NSArray * backupDisabledAppsForDisplay;              //@synthesize backupDisabledAppsForDisplay=_backupDisabledAppsForDisplay - In the implementation block
@property (assign,nonatomic) BOOL includePhoto;                                   //@synthesize includePhoto=_includePhoto - In the implementation block
@property (assign,nonatomic) long long backupDisabledAppCount;                    //@synthesize backupDisabledAppCount=_backupDisabledAppCount - In the implementation block
-(void)setBackupDisabledAppCount:(long long)arg1 ;
-(void)setBackupDisabledAppsForDisplay:(NSArray *)arg1 ;
-(void)setIncludePhoto:(BOOL)arg1 ;
-(long long)backupDisabledAppCount;
-(BOOL)includePhoto;
-(NSArray *)backupDisabledAppsForDisplay;
@end

