/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTSettingSyncing <NSObject>
@required
-(void)removeSectionWithSectionID:(id)arg1;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3;
-(void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
-(void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2;
-(void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2;

@end
